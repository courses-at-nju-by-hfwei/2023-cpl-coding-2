add_executable(circle circle.c)
add_executable(sphere sphere.c)
add_executable(mol mol.c)

# gcc admin.c -o admin -lm
add_executable(admin admin.c)
target_link_libraries(admin m)

add_executable(admin-scanf admin-scanf.c)