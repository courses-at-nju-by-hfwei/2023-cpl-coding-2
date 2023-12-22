//
// Created by hfwei on 2023/12/19.
//
// sds.h: https://github.com/huangz1990/redis-3.0-annotated/blob/unstable/src/sds.h
// sds.c: https://github.com/huangz1990/redis-3.0-annotated/blob/unstable/src/sds.c
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef char *sds;

struct sdshdr {
  int len;
  int free;
  // zero-length array member; flexible array member
  char buf[];
};

static inline size_t sdslen(const sds s) {
  struct sdshdr *sh = (void *) (s - sizeof(struct sdshdr));
  return sh->len;
}

static inline size_t sdsavail(const sds s) {
  struct sdshdr *sh = (void *) (s - sizeof(struct sdshdr));
  return sh->free;
}

sds sdsnewlen(const void *init, size_t initlen);
// sds sdsnew(const char *init);

void sdsfree(sds s);

sds sdsMakeRoomFor(sds s, size_t addlen);
sds sdscatlen(sds s, const void *t, size_t len);
sds sdscpylen(sds s, const char *t, size_t len);

int main(void) {
  struct sdshdr *sh;

  sds x = sdsnewlen("foo", 3);
  assert(sdslen(x) == 3);

  // adding test-case for sdscatlen
  x = sdscatlen(x, "bar", 3);
  assert(sdslen(x) == 6);
  assert(strcmp(x, "foobar") == 0);

  // adding test-case for sdscpylen
  x = sdscpylen(x, "a", 1);
  assert(sdslen(x) == 1);
  assert(strcmp(x, "a") == 0);

  return 0;
}

sds sdsnewlen(const void *init, size_t initlen) {
  struct sdshdr *sh;

  sh = malloc(sizeof(struct sdshdr) + initlen + 1);
  if (sh == NULL) {
    return NULL;
  }

  sh->len = initlen;
  sh->free = 0;

  if (initlen && init) {
    memcpy(sh->buf, init, initlen);
  }

  sh->buf[initlen] = '\0';

  return (char *) sh->buf;
}

void sdsfree(sds s) {
  if (s == NULL) {
    return;
  }

  free(s - sizeof(struct sdshdr));
}

sds sdsMakeRoomFor(sds s, size_t addlen) {
  struct sdshdr *sh, *newsh;
  size_t free = sdsavail(s);
  size_t len, newlen;

  if (free >= addlen) {
    return s;
  }

  len = sdslen(s);
  sh = (void *) (s - sizeof(struct sdshdr));
  newlen = (len + addlen) * 2;
  newsh = realloc(sh, sizeof(struct sdshdr) + newlen + 1);
  if (newsh == NULL) {
    return NULL;
  }

  newsh->free = newlen - len;
  return newsh->buf;
}

sds sdscatlen(sds s, const void *t, size_t len) {
  struct sdshdr *sh;
  size_t curlen = sdslen(s);

  s = sdsMakeRoomFor(s, len);
  if (s == NULL) {
    return NULL;
  }

  sh = (void *) (s - sizeof(struct sdshdr));
  memcpy(s + curlen, t, len);
  sh->len = curlen + len;
  sh->free = sh->free - len;
  s[curlen + len] = '\0';

  return s;
}

sds sdscpylen(sds s, const char *t, size_t len) {
  struct sdshdr *sh = (void *) (s - sizeof(struct sdshdr));
  size_t totlen = sh->free + sh->len;

  if (totlen < len) {
    s = sdsMakeRoomFor(s, len - sh->len);
    if (s == NULL) {
      return NULL;
    }
    sh = (void *) (s - sizeof(struct sdshdr));
    totlen = sh->free + sh->len;
  }

  memcpy(s, t, len);
  s[len] = '\0';
  sh->len = len;
  sh->free = totlen - len;

  return s;
}