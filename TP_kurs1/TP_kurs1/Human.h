using namespace System;
using namespace System::Threading; // ��� �������-� Sleep()

public ref class Human {
public:

	static Byte Condition; // ���� "��������� ��������"
	int Smoke;//���� ����� �� �������
public:
	Human(int Condition1, int Smoke1) {//�����������
		Condition = Condition1; //���������� ��������� ����������
		Smoke = Smoke1;
	}

	void HumanPoint() {//����� ���������� �� ������������ ��������
		Condition += 1;
		//	return Condition;
	}
	~Human() { //�������������

	}

	///������
	/// �������� �� �����  VVVV
	/// ������������ ��������
	/// 
	///�������
	/// ����� �� ������� ������
	/// ��� ������
	///
	/// 


};