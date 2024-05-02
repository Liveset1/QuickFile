cmake -G "MinGW Makefiles" -S ../../ -B ./bin -DCMAKE_BUILD_TYPE=Release
cmake --build ./bin --config Release
pause