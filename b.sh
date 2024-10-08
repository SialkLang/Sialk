#!/bin/bash

# Variables
INPUT_FILE="sialk.c"
OUTPUT_FILE="s"
EXAMPLE_FILE="input.sialk"

# Check if an argument is provided
if [ "$#" -eq 1 ]; then
	EXAMPLE_FILE="$1"
fi

# Clear screen
clear

# Delete file
if [ -e "$OUTPUT_FILE" ]; then
	rm "$OUTPUT_FILE"
fi

# Check if ldconfig command is available
if ! command -v ldconfig &>/dev/null; then
	echo "ldconfig command is not found. Please install ldconfig."
	exit 1
fi

ldconfig -p | grep efence &>/dev/null
if ! [ $? -eq 0 ]; then
	echo "efence library is missing"
	echo "Install efence - Electric Fence Malloc Debugger"
	exit 1
fi

echo "efence library is installed"

# Compile
# gcc -g -ggdb -g -o "$OUTPUT_FILE" "$INPUT_FILE"
# gcc -g -fsanitize=undefined,address -Walloca -o "$OUTPUT_FILE" "$INPUT_FILE" -lefence
# gcc -g -fsanitize=undefined,address -Walloca -o "$OUTPUT_FILE" "$INPUT_FILE"
gcc -o "$OUTPUT_FILE" "$INPUT_FILE"

# if [ $? -eq 0 ]; then
# 	if ! [ -x "$(command -v emcc)" ]; then
# 		echo 'Error: emcc is not installed.' >&2
# 		echo 'Install from https://emscripten.org/docs/getting_started/downloads.html'
# 		exit 1
# 	fi

# 	# Compiling for web
# 	emcc sialk.c -o sialk.js -s ALLOW_MEMORY_GROWTH=1 -s EXIT_RUNTIME=1 -s NO_EXIT_RUNTIME=1
# fi

# Check if compilation was successful
if [ $? -eq 0 ]; then
	./"$OUTPUT_FILE" "$EXAMPLE_FILE"
	# LSAN_OPTIONS=verbosity=1:log_threads=1 ./"$OUTPUT_FILE" "$EXAMPLE_FILE"
	# ASAN_OPTIONS=detect_leaks=1 ./"$OUTPUT_FILE" "$EXAMPLE_FILE"
	# LSAN_OPTIONS=verbosity=1:log_threads=1:detect_leaks=1 ./"$OUTPUT_FILE" "$EXAMPLE_FILE"
else
	echo "Compilation failed!"
fi

# ./s --code "تابع سیلک {\n    نمایش \"سیلک، دنیا\"}"

./s --code "تابع سیلک() {
    نمایش \"سیلک، دنیا\"
}"
