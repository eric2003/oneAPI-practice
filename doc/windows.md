```
cmd.exe "/K" '"C:\Program Files (x86)\Intel\oneAPI\setvars.bat" && powershell'
```
```
rm * -Recurse -Force;cmake ..;cmake --build . --config release
```

