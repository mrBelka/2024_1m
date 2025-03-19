from conans import ConanFile, CMake

class lec18(ConanFile):
    name = "lec18"
    version = "1.1"
    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake", "cmake_find_package"
    requires = [("sfml/2.5.1")]