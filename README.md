# cc-shared-library-deps

on windows:
```
bazel build //:hello2_shared
```
result
```
 error LNK2019: unresolved external symbol "public: class std::basic_string<char,struct std::char_traits<char>,cl
ass std::allocator<char> > __cdecl Hello::print(void)"
```

solution
```
remember to use __declspec( dllexport )
```
