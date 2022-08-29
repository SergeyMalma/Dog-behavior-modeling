using namespace System;
using namespace System::Threading; // Для использ-я Sleep()

public ref class Human {
public:

	static Byte Condition; // Поле "Положение человека"
	int Smoke;//Поле курит ли человек
public:
	Human(int Condition1, int Smoke1) {//конструктор
		Condition = Condition1; //присвоение переданых параметров
		Smoke = Smoke1;
	}

	void HumanPoint() {//Метод отвечающий за передвижение человека
		Condition += 1;
		//	return Condition;
	}
	~Human() { //Деконструктор

	}

	///Методы
	/// Движение по уоице  VVVV
	/// Остановиться покурить
	/// 
	///Событие
	/// Выход за пределы забора
	/// Лай собаки
	///
	/// 


};