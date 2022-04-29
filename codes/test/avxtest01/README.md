cmd.exe "/K" '"C:\Program Files (x86)\Intel\oneAPI\setvars.bat" && powershell'

icx main.cpp -mavx -o testprj

icx main.cpp -mavx2 -o testprj



