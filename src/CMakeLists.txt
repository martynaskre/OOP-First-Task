project(1_uzd_src)

set(HEADER_FILES Application.h Student.h Faker.h Benchmark.h Human.h)

set(SOURCE_FILES Application.cpp Student.cpp Faker.cpp Benchmark.cpp Human.cpp)

add_library(1_uzd_src STATIC ${SOURCE_FILES} ${HEADER_FILES})