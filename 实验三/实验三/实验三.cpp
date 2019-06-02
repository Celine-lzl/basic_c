// 实验三.cpp : 定义控制台应用程序的入口点。
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
		cout << "正方形周长：" << _width * 4 << endl;
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
		cout << "长方形周长：" << 2 * (_width + _width2) << endl;
	}
	void Print2()
	{
		cout << "宽：" << _width << endl;
		cout << "长：" << _width2 << endl;
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
//		cout << "摩托车的最大速度是："<<MaxSpeed << " 摩托车的长度是" << Weight << endl;
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
//		cout << "年龄为：" << ani_age << endl;
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
//	Teacher(string name = "马克", int mon = 5000, int hour = 16)
//	{
//		teachername = name;
//		teachermoney = mon;
//		teacherhours = hour;
//	}
//	void Print()
//	{
//		cout << "姓名：" << teachername << "月工资：" << teachermoney << "授课时数：" << teacherhours << endl;
//	}
//	string teachername;	//名字
//	int teachermoney;		//月工资
//	int teacherhours;
//};
//
//class Professor: public Teacher
//{
//public:
//	Professor(string name = "汤姆", int mon = 6000, int hour = 15)
//	{
//		teachername = name;
//		teachermoney = mon;
//		teacherhours = hour;
//	}
//	void ProMoney()
//	{
//		cout << "教授：" << teachername << "工资为：" << teachermoney + teacherhours*30 << endl;
//	}
//};
//
//class Lecturer: public Teacher
//{
//public:
//	Lecturer(string name = "杰瑞", int mon = 3000, int hour = 25)
//	{
//		teachername = name;
//		teachermoney = mon;
//		teacherhours = hour;
//	}
//	void LecMoney()
//	{
//		cout << "讲师：" << teachername << "工资为：" << teachermoney + teacherhours*20 << endl;
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
//	int _ceng;	//Building的层数
//	int _num;	//Building的房间数
//	int _area;	//Building总面积
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
//	int bedRoom_num;	//卧室数
//	int living_num;		//客厅数
//	int bathRoom_num;	//卫生间数
//	int kitchRoom_num;		//厨房数
//};
//class Office_Building :public Building
//{
//public:
//	Office_Building(int officeroom = 10, int meetroom = 2)
//		:Office_num(officeroom)
//		,meetingRoom_num(meetroom)
//	{}
//	int Office_num;	//办公室数
//	int meetingRoom_num;	//会议室
//};
//class Hospital :public Building
//{
//public:
//	Hospital(int sickroom = 22, int ope = 33)
//		:_Room(sickroom)
//		,_operatorRoom(ope)
//	{}
//	int _Room;	//病房数
//	int _operatorRoom;	//手术室
//};
//
//int main()
//{
//	Building building;
//	cout << "层数:" << building._ceng << "房间数：" << building._num << "面积：" << building._area << endl;
//	Home_Arch h;
//	cout << "卧室数:" << h.bedRoom_num << "客厅数：" << h.living_num << "卫生间数：" << h.bathRoom_num << "厨房数：" << h.kitchRoom_num << endl;
//	Office_Building office;
//	cout << "办公室数:" << office.Office_num << "会议室数：" << office.meetingRoom_num << endl;
//	Hospital hospital;
//	cout << "病房数:" << hospital._Room << "手术室数：" << hospital._operatorRoom << endl;
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
//		cout << "所要求的长方体体积为：" << endl;
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
//	cout << "请输入第一个长方体的长、宽、高" << endl;
//	cin >> len >> wid >> hei;
//	cu1.Set(len, wid, hei);
//	cu1.Bulk();
//	cout << "请输入第2个长方体的长、宽、高" << endl;
//	cin >> len >> wid >> hei;
//	cu2.Set(len, wid, hei);
//	cu2.Bulk();
//	cout << "请输入第3个长方体的长、宽、高" << endl;
//	cin >> len >> wid >> hei;
//	cu3.Set(len, wid, hei);
//	cu3.Bulk();
//	system("pause");
//	return 0;
//}
