add_library(UnitsLib STATIC units.cpp)
target_include_directories(UnitsLib PUBLIC ${IncludeDir})

add_library(XenoLib STATIC xeno.cpp grid.cpp)
target_include_directories(XenoLib PUBLIC ${IncludeDir})

add_executable(SirrusHaven main.cpp)
target_link_libraries(SirrusHaven PRIVATE UnitsLib XenoLib)
