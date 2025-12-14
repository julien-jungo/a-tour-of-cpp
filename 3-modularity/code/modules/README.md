# Modules

## Compile

```shell
clang++ -std=c++20 -o Vector.pcm --precompile -x c++-module Vector.cpp
clang++ -std=c++20 -o example -fprebuilt-module-path=. example.cpp Vector.pcm
```

## Run

```shell
./example
```
