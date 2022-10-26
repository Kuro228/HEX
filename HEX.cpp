#include <iostream>
using namespace std;
int hex(int num, int i) {
	return (num % i);
}



int main()
{
	setlocale(0, "");
    int HEX[100] = {0};
	int action;
	int num; 
	
	while (true) {
		int i = 7;
		cout << "Введите действие" << endl;
		cout << "1) Добавить элемент" << endl; 
		cout << "2) Удалить элемент " << endl;
		cout << "3) Найти элемент " << endl; 

		cin >> action; 
		if (action == 1) {
			cout << "Введите элемент: ";
			cin >> num;
			if(HEX[hex(num, i)] == 0) HEX[hex(num,i)] = num;
			else {
				HEX[hex(hex(num, i), i)] = num; 
			}
	
		}
		else if (action == 2) {
			cout << "Введите значение которое хотите удалить: "; 
			cin >> num; 
			if (HEX[hex(num, i)] == num) HEX[hex(num, i)] = 0;
			else {
				HEX[hex(hex(num, i), i)] = 0;
			}
		}
		else if (action == 3) {
			cout << "Введите номер ячейки: ";
			cin >> num;
			cout << HEX[num] << endl;
		}
		else cout << "Вы ошиблись выбирайте ещё раз!" << endl;

	}
	

}

