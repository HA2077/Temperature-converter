echo "Building Temperature Converter..."

# Clean previous builds
rm -rf build-linux build-windows releases
mkdir -p releases

# Build for Linux
echo "Building for Linux..."
mkdir build-linux
cd build-linux
cmake .. -DCMAKE_BUILD_TYPE=Release
make
cp bin/temperature-converter ../releases/
cd ..

# Build for Windows  
echo "Building for Windows..."
mkdir build-windows
cd build-windows
cmake .. -DCMAKE_TOOLCHAIN_FILE=../windows-toolchain.cmake -DCMAKE_BUILD_TYPE=Release
make
cp bin/TemperatureConverter.exe ../releases/
cd ..

echo "Done! Check releases/ folder"