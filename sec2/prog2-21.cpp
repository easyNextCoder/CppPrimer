#include<iostream>

using namespace std;

int main(){

	//�������д�������û�зǷ�����
	int i = 0;
//	double *dp = &i;
	//ȡi�ĵ�ַ����dp 
	//�ģ���ַ���ܹ���������ǰ���½�������ת�� 
//	int *ip = i;
	//��ipָ��0��ַ 
	//�ģ����漰����ַ��ʱ���ܽ������͵�ת�����������ڵ�ַ�����Ĵ�С��int���͵ı����Ĵ�С��һ�£��� 
	int *p = &i;
	//ȡi�ĵ�ַ����p����
	 
	//��û�д��󣬶����Ա���ͨ�� 
	//�Լ����ж���ȫ����
	//�Լ����е�ʵ��
	double temp_test = i;
	i = temp_test;
	i = 2.9;
	 
	return 0;
}