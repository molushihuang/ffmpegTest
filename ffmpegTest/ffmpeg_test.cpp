#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
//C/C++��ָ࣬ʾ����������C���Խ��б���
extern "C" {
#include "libavcodec\avcodec.h"
}
int main() {
	//���FFmpeg��������Ϣ������Ƿ����ú�
	cout << avcodec_configuration() << endl;
	system("pause");
	return 0;

}