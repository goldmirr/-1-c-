#include <iostream>
using namespace std;
//2021-03-17 �ǽ����� 12171581 ���

/*1������
int main() {
	int min = 1000000;
	int max = -1;  
	int aver;
	int total=0;
	int grade;
	int student_num=1;
	while (student_num <=10) {
		cin >> grade;
		total += grade;
		if (grade < min) {
			min = grade;
		}
		if (grade > max) {
			max = grade;
		}
		student_num++;
	}
	cout << "��� : " <<total / 10 << endl;
	cout << "�ּ� �� : " << min << endl;
	cout << "�ִ� �� : " << max << endl;
}
*/
/*
���� 2��
int main() {
	int a, b, c, d, l_num;
	cout << "Enter 3 numbers : ";
	cin >> a >> b >> c;
	cout << "The largest number is : ";
	d = a > b ? a : b;
	l_num = d > c ? d : c;
	cout << l_num;

}
*/
/*
3������
int main() {
	int n;
	int cnt=1;
	cin >> n;
	int odd_total=0;
	int even_total=0;
	while (cnt<=n) {
		if (cnt % 2 == 1) {
			odd_total += cnt;
		}
		else {
			even_total += cnt;
		}

		cnt++;
	}

	cout << "Sum of all even num 1 to 100 : " << even_total << endl;
	cout << "Sum of all odd num 1 to 100 : "<<odd_total<<endl;
}
*/
/*
int main() {
	int n;
	
	cout << "Please enter one number : ";
	cin >> n;
	int y;
	
	while (0 < n) {
		y = n;
		while(0 < y){
		cout << "*";
		y--;
		}
		cout << endl;
		n--;
	}

}
*/