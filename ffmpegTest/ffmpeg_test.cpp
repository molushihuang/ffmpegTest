#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
//C/C++混编，指示编译器按照C语言进行编译
extern "C" {
#include "libavcodec\avcodec.h"
}
int main() {
	//输出FFmpeg的配置信息，检查是否配置好
	cout << avcodec_configuration() << endl;
	system("pause");
	return 0;

}