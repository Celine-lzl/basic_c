// ʵ����.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include"stdafx.h"
#include <iostream>
#include<string>
using namespace std;
class Square
{
public:
	Square(int wid = 30)
		:_width(wid)
	{}

	virtual void Print()
	{
		cout << "�������ܳ���" << _width * 4 << endl;
	}
protected:
	int _width;
};

class Rectangle :public Square
{
public:
	Rectangle(int wid = 10)
		:_width2(wid)
	{}
	virtual void Print()
	{
		cout << "�������ܳ���" << 2 * (_width + _width2) << endl;
	}
	void Print2()
	{
		cout << "��" << _width << endl;
		cout << "����" << _width2 << endl;
	}
protected:
	int _width2;
};

void Func(Square* s)
{
	s->Print();
}
int main()
{
	Square s;
	Rectangle r;
	Func(&s);
	Func(&r);
	system("pause");
	return 0;
}


//class vehicle
//{
//public:
//	int MaxSpeed;
//	int Weight;
//	void Run()
//	{}
//	void Stop()
//	{}
//};
//
//class bicycle: virtual public vehicle
//{
//protected:
//	int Height;
//};
//
//class motorcar: virtual public vehicle
//{
//protected:
//	int SeatNum;
//};
//
//class motorcycle: public bicycle, public motorcar
//{
//public:
//	void Print()
//	{
//		cout << "Ħ�г�������ٶ��ǣ�"<<MaxSpeed << " Ħ�г��ĳ�����" << Weight << endl;
//	}
//};
//
//int main()
//{
//	motorcycle m;
//	m.MaxSpeed = 100;
//	m.Weight = 3;
//	m.Print();
//	system("pause");
//	return 0;
//}


//class Animal
//{
//public:
//	int ani_age;
//};
//
//class dog :public Animal
//{
//public:
//	void SetAge()
//	{
//		ani_age = 3;
//	}
//	void out()
//	{
//		cout << "����Ϊ��" << ani_age << endl;
//	}
//};
//
//int main()
//{
//	dog dog;
//	dog.SetAge();
//	dog.out();
//	system("pause");
//	return 0;
//}

//class Teacher
//{
//public:
//	Teacher(string name = "���", int mon = 5000, int hour = 16)
//	{
//		teachername = name;
//		teachermoney = mon;
//		teacherhours = hour;
//	}
//	void Print()
//	{
//		cout << "������" << teachername << "�¹��ʣ�" << teachermoney << "�ڿ�ʱ����" << teacherhours << endl;
//	}
//	string teachername;	//����
//	int teachermoney;		//�¹���
//	int teacherhours;
//};
//
//class Professor: public Teacher
//{
//public:
//	Professor(string name = "��ķ", int mon = 6000, int hour = 15)
//	{
//		teachername = name;
//		teachermoney = mon;
//		teacherhours = hour;
//	}
//	void ProMoney()
//	{
//		cout << "���ڣ�" << teachername << "����Ϊ��" << teachermoney + teacherhours*30 << endl;
//	}
//};
//
//class Lecturer: public Teacher
//{
//public:
//	Lecturer(string name = "����", int mon = 3000, int hour = 25)
//	{
//		teachername = name;
//		teachermoney = mon;
//		teacherhours = hour;
//	}
//	void LecMoney()
//	{
//		cout << "��ʦ��" << teachername << "����Ϊ��" << teachermoney + teacherhours*20 << endl;
//	}
//};
//
//int main()
//{
//	Professor p;
//	p.ProMoney();
//	Lecturer l;
//	l.LecMoney();
//	system("pause");
//	return 0;
//}

//class Building
//{
//public:
//	Building(int ceng = 20, int num = 200, int area = 2000)
//		:_ceng(ceng)
//		,_num(num)
//		,_area(area)
//	{}
//	int _ceng;	//Building�Ĳ���
//	int _num;	//Building�ķ�����
//	int _area;	//Building�����
//};
//class Home_Arch : public Building
//{
//public:
//	Home_Arch(int bedroom = 30, int livingroom = 3, int bathroom = 10, int kitchen = 1)
//		:bedRoom_num(bedroom)
//		,living_num(livingroom)
//		,bathRoom_num(bathroom)
//		,kitchRoom_num(kitchen)
//	{}
//	int bedRoom_num;	//������
//	int living_num;		//������
//	int bathRoom_num;	//��������
//	int kitchRoom_num;		//������
//};
//class Office_Building :public Building
//{
//public:
//	Office_Building(int officeroom = 10, int meetroom = 2)
//		:Office_num(officeroom)
//		,meetingRoom_num(meetroom)
//	{}
//	int Office_num;	//�칫����
//	int meetingRoom_num;	//������
//};
//class Hospital :public Building
//{
//public:
//	Hospital(int sickroom = 22, int ope = 33)
//		:_Room(sickroom)
//		,_operatorRoom(ope)
//	{}
//	int _Room;	//������
//	int _operatorRoom;	//������
//};
//
//int main()
//{
//	Building building;
//	cout << "����:" << building._ceng << "��������" << building._num << "�����" << building._area << endl;
//	Home_Arch h;
//	cout << "������:" << h.bedRoom_num << "��������" << h.living_num << "����������" << h.bathRoom_num << "��������" << h.kitchRoom_num << endl;
//	Office_Building office;
//	cout << "�칫����:" << office.Office_num << "����������" << office.meetingRoom_num << endl;
//	Hospital hospital;
//	cout << "������:" << hospital._Room << "����������" << hospital._operatorRoom << endl;
//	system("pause");
//	return 0;
//}


//class Cuboid
//{
//public:
//	void Set(int length, int width, int heigth)
//	{
//		_length = length;
//		_width = width;
//		_height = heigth;
//	}
//	void Bulk()
//	{
//		cout << "��Ҫ��ĳ��������Ϊ��" << endl;
//		cout << _length * _width * _height << endl;
//	}
//private:
//	int _length;
//	int _width;
//	int _height;
//};
//
//int main()
//{
//	int len, wid, hei;
//	Cuboid cu1;
//	Cuboid cu2;
//	Cuboid cu3;
//	cout << "�������һ��������ĳ�������" << endl;
//	cin >> len >> wid >> hei;
//	cu1.Set(len, wid, hei);
//	cu1.Bulk();
//	cout << "�������2��������ĳ�������" << endl;
//	cin >> len >> wid >> hei;
//	cu2.Set(len, wid, hei);
//	cu2.Bulk();
//	cout << "�������3��������ĳ�������" << endl;
//	cin >> len >> wid >> hei;
//	cu3.Set(len, wid, hei);
//	cu3.Bulk();
//	system("pause");
//	return 0;
//}
