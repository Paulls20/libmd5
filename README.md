# MD5 Hash Library for C++

## What's this
This is MD5 hash library for C++.

## Attention
This code uses C++11 features.

## How to use

### With pointer
MD5 hasing function is in namespace MD5. This function always return 0.

    int MD5::hash(const std::string* src, std::string* dst);

### With reference
MD5 hasing function is in namespace MD5.

	std::string MD5::hash(const std::string& src);

### Examples
In detail, please shows md5_test.cpp.
That code is compiled on following commands.

    g++ md5_test.cpp -I. -L. -lmd5 -std=c++11 -o test.out

## Licence
This codes are licensed by New BSD License.
