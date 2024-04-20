cmake -G "MinGW Makefiles" -S ../../ -B ./bin -DCMAKE_BUILD_TYPE=Debug
cmake --build ./bin --config Debug
pause