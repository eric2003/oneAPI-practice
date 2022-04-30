cmd.exe "/K" '"C:\Program Files (x86)\Intel\oneAPI\setvars.bat" && powershell'

icx main.cpp -mavx -o testprj
icx main.cpp -mfma -o testprj

icl main.cpp -DSSE -o testprj

icx main.cpp -DSSE -o testprj

icx main.cpp -DSSE -mavx -o testprj

icx main.cpp -DSSE -mavx512f -o testprj

icx main.cpp -DAVX -mavx512f -o testprj

icx main.cpp -DSSE -mavx512f -o testprj