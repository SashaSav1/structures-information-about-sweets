//Пользователь вводит информацию о конфетах :
//-название конфет;
//-дата поставки;
//-цена;
//-вес.
//В программе реализовать возможности :
//• Просмотра на экране информации об имеющихся конфетах.
//• Вывести наименование и дату поставки самых дешевых конфет.
//• Вывести наименование и цену конфет с выбранной пользователем
//диапазоном веса.
//• Найти стоимость конфет, с весом больше, чем вводит пользователь.
//Все результаты вывести в новый текстовый файл.

#include <iostream>
#include <string>
using namespace std;
struct lab//Создание типа данных
{
	 // максимальный размер строк
	string name;//Название конфет
	int ves;//Вес
	float price;//Цена
    string data;//Дата
};
int main()
{

	system("chcp 1251");//Руский язык
	lab arr[10];//Массив приборов
	int n, i, a;
	while (true)//Бесконечный цикл
	{
		cout << "1.Ввод информации о конфетах\n";
		cout << "2.Наименование и дата поставки самых дешевых конфет\n";
		cout << "3.Наименование и цена конфет в определенном диапазоне веса.\n";
		cout << "4.Стоимость конфет, с весом больше, чем у других конфет\n";
		cout << "5.Информация об имеющихся конфетах\n";
		cout << "6.Выход\n"; 
		cin >> a;//Выбор пункта меню
		switch (a)//Меню
		{

		case 1: {//Нажатие на 1
			cout << "Введите кол-во конфет: ";
			cin >> n;
			for (i = 0; i < n; i++)
			{
				cout << "Введите название конфет\n";
				cin >> arr[i].name;//Ввод названия конфет
				cout << "Введите дату поставки конфет\n";
				cin >> arr[i].data;//Ввод даты поставки конфет
				cout << "Введите вес конфет в граммах\n";
				cin >> arr[i].ves;//Ввод массы конфет
				cout << "Введите цену конфет в рублях\n";
				cin >> arr[i].price;//Ввод цены
			}
			break;
		}
		case 2: {//Нажатие на 2
			float max = arr[0].price;
			int j = 0;
			for (i = 0; i < n; i++)//Поиск дешевых конфет
			{
				if (arr[i].price < max)
				{
					max = arr[i].price;
					j = i;//Номер конфет
				}
			}
			cout << "--------------------------------------" << endl;
			cout << " Конфеты с самой дешевой ценной: " << endl;
			cout << arr[j].name << endl;
			cout << " Дата поставки: " << arr[j].data << "\n";
			cout << "--------------------------------------" << endl;
			break;
		}
		case 3: {//Нажатие на 3
			int y = 0, k = 0, p = 0;
			cout << "Введите диапозон веса от и до\n";
			cin >> y;
			cin >> p;//Ввод ввод диапозона веса
			for (i = 0; i < n; i++)//Поиск вес конфет в введенном диапозоне
			{
				if ((arr[i].ves >= y) && (arr[i].ves <= p))
				{
					cout << "--------------------------------------" << endl;
					cout << " Наименование конфет: " << arr[i].name << "\n";
					cout << " цена конфет: " << arr[i].price << "\n";
					cout << "--------------------------------------" << endl;
					k++;
				}

			}
			if (k == 0)
			{
				cout << "--------------------------------------" << endl;
				cout << "Вы не попали в указанный диапозон\n";
				cout << "--------------------------------------" << endl;
			}
			break;
		}
		case 4: {//Нажати на 4
			int d;
			cout << "Введите вес конфет\n";
			cin >> d;//Ввод веса конфет
			for (i = 0; i < n; i++)//стоимость конфет, с весом больше, чем вводит пользователь
			{
				if (arr[i].ves > d) {
					cout << "--------------------------------------" << endl;
					cout << "Стоимость конфет с весом больше который вы вели: " << arr[i].ves << "\n";
					cout << "--------------------------------------" << endl;
				}
			}
			break;
		}
		case 5: {//Нажатие на 5
			for (i = 0; i < n; i++) 
			{
				cout << "--------------------------------------" << endl;
				cout << "Название конфет:\n";
				cout << arr[i].name << endl;
				cout << "Дата поставки конфет:\n";
				cout << arr[i].data << endl;
				cout << "Вес конфет:\n";
				cout << arr[i].ves << endl;
				cout << "Цена конфет:\n";
				cout << arr[i].price << endl;
				cout << "--------------------------------------" << endl;
			}
			break;
		}
		case 6: {exit(0); break; }//Нажатие для выхода из программы
		}
	}
}