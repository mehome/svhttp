// svhttp_example.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

//#define ENABLE_LIBICONV

#include "ip138.hpp"

int _tmain(int argc, _TCHAR* argv[])
{
	ip138 _ip;
	SVLOGGER_ERR << _ip.get_reponse_str();

	return 0;
}
