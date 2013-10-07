#include <iostream>
#include <string>
#include <md5.hpp>

int main(void) {
	MD5::md5_init();
	
	std::cout << MD5::hash(std::string("")) << std::endl;
	std::cout << "d41d8cd98f00b204e9800998ecf8427e" << std::endl;
	
	std::cout << std::endl;
	
	std::cout << MD5::hash(std::string("a")) << std::endl;
	std::cout << "0cc175b9c0f1b6a831c399e269772661" << std::endl;
	
	std::cout << std::endl;
	
	std::cout << MD5::hash(std::string("abc")) << std::endl;
	std::cout << "900150983cd24fb0d6963f7d28e17f72" << std::endl;
	
	std::cout << std::endl;
	
	std::cout << MD5::hash(std::string("message digest")) << std::endl;
	std::cout << "f96b697d7cb7938d525a2f31aaf161d0" << std::endl;
	
	std::cout << std::endl;
	
	std::cout << MD5::hash(std::string("abcdefghijklmnopqrstuvwxyz")) << std::endl;
	std::cout << "c3fcd3d76192e4007dfb496cca67e13b" << std::endl;
	
	std::cout << std::endl;
	
	std::string *dst = new std::string();
	MD5::hash(new std::string("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"), dst);
	std::cout << *dst << std::endl;
	delete dst;
	std::cout << "d174ab98d277d9f5a5611c2c9f419d9f" << std::endl;
	
	std::cout << std::endl;
	
	dst = new std::string();
	MD5::hash(new std::string("12345678901234567890123456789012345678901234567890123456789012345678901234567890"), dst);
	std::cout << *dst << std::endl;
	delete dst;
	std::cout << "57edf4a22be3c955ac49da2e2107b67a" << std::endl;
	
	std::cout << std::endl;
	
	dst = new std::string();
	MD5::hash(new std::string("The quick brown fox jumps over the lazy dog"), dst);
	std::cout << *dst << std::endl;
	delete dst;
	std::cout << "9e107d9d372bb6826bd81d3542a419d6" << std::endl;
	
	std::cout << std::endl;
	
	dst = new std::string();
	MD5::hash(new std::string("The quick brown fox jumps over the lazy dog."), dst);
	std::cout << *dst << std::endl;
	delete dst;
	std::cout << "e4d909c290d0fb1ca068ffaddf22cbd0" << std::endl;
	
	return 0;
}
