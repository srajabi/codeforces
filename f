start=$(($(gdate +%s%0N)/1000000))
g++-13 -x c++ -std=gnu++20 -Wall s.cpp
end=$(($(gdate +%s%0N)/1000000))
echo "Compiled: $(($end-$start)) ms"
pbpaste | ./a.out
