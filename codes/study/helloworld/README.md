cmd.exe "/K" '"C:\Program Files (x86)\Intel\oneAPI\setvars.bat" && powershell'

rm * -Recurse -Force;cmake ..;cmake --build . --config release

rm * -Recurse -Force;cmake -DCMAKE_C_COMPILER=icx -DCMAKE_CXX_COMPILER=icx -GNinja ..;cmake --build . --config release

cmake -DCMAKE_C_COMPILER=icx -DCMAKE_CXX_COMPILER=icx -GNinja ..

cmake --build .

