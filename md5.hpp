#ifndef __MD5_HPP__
#define __MD5_HPP__

#include <cstdlib>
#include <string>

namespace MD5 {
	void md5_init();
	std::string hash(const std::string&);
	int hash(const std::string*, std::string*);
};

#endif
