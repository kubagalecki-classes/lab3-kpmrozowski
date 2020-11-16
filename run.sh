clang-format -i --style=file zal/test.cpp
g++ -std=c++17 -Wall -Wextra -Wpedantic -Wshadow -o zal/test.out zal/test.cpp
chmod +x zal/test.out
./zal/test.out