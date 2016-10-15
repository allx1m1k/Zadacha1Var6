#include <stdio.h>
#include <cstdio>
#include <iostream>

using namespace std;

/* ������� N6.
����� ���������� ������ � ������������ �����.
����� ������������ �����, ������������ �������� ������� ����������� ������������������ ���������, 
�� ���������� 0.
*/


int main(){
	//double massiv[9]={1, 0, 2, 3, 0, 5, 6, 7, 0}; //�������� ������
	double massiv[11]={-222, 1, -2, 10, 0, 0, 2, 4, 4, 3, 2}; 			
	double m = 0;
	int i, j, n = 0; //��������
	int indexstart = 0, indexend = 0; //�������
	int nmax = 0; //������� ������� ����������� ������������������ ���������
	//double s = massiv[0] * massiv[1]; //������������ ������ 2 �����
	//printf("The initial multiplication S is: %9.3lf\n", s);
	
	//������� ���� ����������� �� ������� ��������� 0
	for(i = 0; i < 11; i++) {		
		if(massiv[i] != 0)	{									
			//������ ������ �������� �� ������� ���������
			n = 1; 
			//������� �������� � ����� �� ������� �������
			if(nmax < n) {
				nmax = n; //�������� ������� ������������������ �����������	
				indexstart = i; //�������� ������ ������� ��������
				indexend = i; //�������� ������ ���������� ��������
			}; 								  
			//���������� ���� ��� ������� �� ������� �� �������� �������� �� ���������� ��������
			for(j = i+1; j < 11; j++) {		
				if(massiv[j] == 0) 	{		
					i = j; //���������� ������ �� ��������� ������� �������
					break; //������ �� �����
				} else n = n + 1;  //�������� �������				  
				if(nmax < n) {
					nmax = n; //�������� ������� ������������������ �����������	
					indexstart = i; //�������� ������ ������� ��������
					indexend = j; //�������� ������ ���������� ��������
				}; 								  
			};				
		};
	};
	//��������� indexstart � indexend ����� ������� ���������� ������������������ ��� 0
	//������� ������� ������������
	for(int k = indexstart; k < indexend+1; k++) {
		if (m == 0)
			m = massiv[k];
		else
			m = m * massiv[k];
	}	
	//������� ��� ����������
	printf("Nmax is: %d\n", nmax);
	printf("N is: %d\n", n);
	printf("I Index start is: %d\n value is %9.3lf\n ", indexstart, massiv[indexstart]);
	printf("J Index end is: %d\n value is %9.3lf\n ", indexend, massiv[indexend]);
	printf("Multiplication is: %9.3lf\n ", m);
	system("pause");		
	return 0;
}


/*
#include <iostream>

int main()
{
	size_t length	  = 0;
	size_t max_length = 0;
	
	double value;
	double production		= 0;
	double max_production	= 0;
	
	while (std::cin >> value)
	{
		if (0 == value)
		{
			if (length > max_length)
			{
				max_length 		= length;
				max_production 	= production;
			}
			
			length 	   = 0;
			production = 0;
		}
		else
		{
			length++;
			production = (0 == production) ? value : production * value;
		}
	}

	std::cout << "max length: " << max_length << std::endl;
	std::cout << "max production: " << max_production << std::endl;

	return 0;
}
*/