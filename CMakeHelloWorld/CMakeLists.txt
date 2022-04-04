# CMakeList.txt: CMake-Projekt für "CMakeHelloWorld". Schließen Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#
cmake_minimum_required (VERSION 3.8)

# Fügen Sie der ausführbaren Datei dieses Projekts eine Quelle hinzu.
add_executable (CMakeHelloWorld "CMakeHelloWorld.cpp" "CMakeHelloWorld.h" "Car.cpp" "Car.h" "Vehicle.cpp" "Vehicle.h" "Enginetype.h")

# TODO: Fügen Sie bei Bedarf Tests hinzu, und installieren Sie Ziele.
