#pragma once
#include <iostream>

namespace TPkurs1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Threading;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Button^ button2;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Запустить симуляцию";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(454, 199);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 600);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(454, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(600, 200);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(258, 199);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(200, 600);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Тип собаки:";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(378, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(80, 200);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(301, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(80, 200);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(258, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(80, 200);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(24, 199);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(200, 200);
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Дрессировка собаки";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(27, 36);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(100, 17);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"Декоративная";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(27, 60);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(75, 17);
			this->checkBox2->TabIndex = 14;
			this->checkBox2->Text = L"Охранник";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(27, 106);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(146, 17);
			this->checkBox3->TabIndex = 15;
			this->checkBox3->Text = L"Дресерованная собака";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(149, 150);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1057, 800);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Симуляция поведения собаки";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//////////////////////////////////////////////////////////////////////////////////////////////

		
		
		ref class Dog
		{
		private:
			String^ dog_name;
			String^ poroda;
			int good;
			String^ OwnerName;
			int x_dog;
			int y_dog;
			int isgood;
		public:
			delegate void BarkHandler();
			delegate void HumanHearHandler(int xh);
			delegate void DogPointHandler(PictureBox^ pBox, int xd, int yd, String^ ms, int xh);
			delegate void Lunch(PictureBox^ pBox);//LunchEvent
			delegate void VetHandler(PictureBox^ pBox,int good1);
			event BarkHandler^ barkEvent;//Событие,которое вызывается в случае,если собака должна лаять 
			event DogPointHandler^ DogPointEvent;
			event VetHandler^ DogVetEvent;
			
			
			//Конструктор
			Dog() {
				dog_name = "Мухтар";
				poroda = "Немецкая овчарка";
				OwnerName = "Петров Иван";
				isgood = 1;
				//Подписка отрисовка собаки на событие передвижения
				this->DogPointEvent += gcnew Dog::DogPointHandler(this, &Dog::DogDrow);//Отрисовка собаки
			}
			property int x_dogP {
				int get() { return x_dog; }
			}
			property int y_dogP {
				int get() { return y_dog; }
			}
			property int goodP {
				int get() { return good; }
			}
			property int isgoodP {
				int get() { return isgood; }
			}

			void DogSetIsGood(int good1) {
				good = good1;
			}
			
			void setisgood(int isgood1) {
				isgood = isgood1;	
			}
			void DogPoint(PictureBox^ pBox, int xd, int yd, String^ ms, int xh) {//метод отвечающий за передвижение собаки
				int min = 1;
				int max = 3;
				x_dog = min + rand() % (max - min + 1);
				y_dog = min + rand() % (max - min + 1);
				DogPointEvent(pBox, x_dog, y_dog, ms, xh);
			}
			
			void Bark(int xh) {
				if ((y_dog >= 2) && (x_dog == xh) && (good == 1)) {
					barkEvent();
				}
			}
			void BarkDrow(PictureBox^ pBox, int xd, int yd, String^ ms, int xh) {// Метод,отвечающий за действия в случае когда собака начинает лаять 
				if ((y_dog>=2)&&(x_dog == xh)&&(good==1)) {//Задаем диапазон реакции собаки
					String^ ms1 = "s";
					DogDrow(pBox,x_dog,y_dog,ms1,xh);
					barkEvent();
				}
			}
			void DogNeedToVet(PictureBox^ pBox,int good1) {
				isgood = 0;
				String^ gooddrow = Convert::ToString(good);
				String^ imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\СобакеПлохо"+ gooddrow +".png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);


				DogVetEvent(pBox,good);
			}
			
			void DogDrow(PictureBox^ pBox,int x_dog,int y_dog,String^ ms,int x_human) {//метод,отвечающий за ортрисовку положения собаки во время прогулки или когда она лает
				String^ x1str = Convert::ToString(x_dog);
				String^ y1str = Convert::ToString(y_dog);
				String^ gooddrow = Convert::ToString(good);
				String^ imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\" + x1str + y1str + ms + gooddrow+".png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);
			}
			void foodtime(PictureBox^ pBox) {
				String^ gooddrow = Convert::ToString(good);
				pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\ВышелИзДома.png");
				Thread::Sleep(500);
				pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\ПустоБезСобаки.png");
				Thread::Sleep(500);
				pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\ПустоБезСобакиЧеловек.png");
				Thread::Sleep(500);
				pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\ПолноБезСобаки.png");
				Thread::Sleep(500);
				pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\НаполнилМиску.png");
				Thread::Sleep(500);
				String^ imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\ПолноСобака"+gooddrow+".png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);
				imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\ПустоСобакаПоела" +gooddrow+ ".png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);
				pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\ПустоБезСобаки.png");

			}
			void sleeptime(PictureBox^ pBox) {
				String^ gooddrow = Convert::ToString(good);
				String^ imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\СобакаСпит"  +gooddrow + ".png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);
			}
			void awaketime(PictureBox^ pBox) {
				pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\ПустоБезСобаки.png");

				Thread::Sleep(500);
			}
		};
		//////////////////////////////////////////////////////////////////////////////////////////////
		
		
		ref class Human {
		public:

			int Condition; // Поле "Положение человека"
			int Smoke;//Поле курит ли человек
			int fear;
			
		public:
			Human() {
				Condition = 0;
				fear = 0;
				Smoke = 0;
			}
			delegate void HumanWalkHandler(PictureBox^ pBox, int xh);
			delegate void SmokeHandler(PictureBox^ pBox);
			delegate void IsBarkHandler();
			delegate void DogSeeSmokeHumanHandler(int xh);
			event DogSeeSmokeHumanHandler^ DogSeeSmokeHumanEvent;
			event HumanWalkHandler^ HumanPointEvent;
			event SmokeHandler^ SmokeEvent;
			Human(int Condition1, int Smoke1) {//конструктор
				Condition = Condition1; //присвоение переданых параметров
				Smoke = Smoke1;
				fear = 0;
				this->HumanPointEvent += gcnew Human::HumanWalkHandler(this, &Human::HumanDrow);
				this->SmokeEvent += gcnew Human::SmokeHandler(this, &Human::HumanSmokeDrow);
			}

			void HumanPoint(PictureBox^ pBox, int xh) {//Метод отвечающий за передвижение человека
				
				Condition +=1;
				HumanPointEvent(pBox, Condition);//Человек переместился
				
				//HumanHearBarkEvent(Condition);
				if ((Smoke == 1) &&(Condition == 2)&&(fear==0)) {
					
					SmokeEvent(pBox);
					//DogSeeSmokeHumanEvent();
				}
				
				
				//	return Condition;
			}
			void HumanHearBark() {//реагирует на лай
				fear = 1;
			}

			
			void HumanDrow(PictureBox^ pBox,int x_human) {//метод,отвечающий за ортрисовку положения собаки во время прогулки или когда она лает
				String^ x1str = Convert::ToString(x_human);
				
				String^ imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\p" + x1str +".png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);	
			}

			void HumanSmokeDrow(PictureBox^ pBox) {
				
				pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\smoke.png");
				Thread::Sleep(500);
				DogSeeSmokeHumanEvent(Condition);
				if (fear == 0) {
					pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\smoke.png");
					Thread::Sleep(1500);
					pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\p2.png");
				}
				else {//Если собака залаяла на человека,то он бросает все и уходит 
				
					pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\p2.png");
					
				}
			}
			~Human() { //Деконструктор

			}
			int getHumanPoint() {
				return Condition;
			}
		};
		//////////////////////////////////////////////////////////////////////////////////////////////
		ref class TrainedDog :public Dog
		{
		private:
			int trained;
			int isbark ;
		public:
			
			TrainedDog()//конструктор
			{
				isbark = 0;
				trained = 1;

			}
			void barkset(int isbark1) {
				isbark = isbark1;
			}
			void Bark(int xh) {
				isbark = 1;
				barkEvent();
				
				
			}
			
			void BarkDrow(PictureBox^ pBox, int xd, int yd, String^ ms, int xh) {// Метод,отвечающий за действия в случае когда собака начинает лаять 
				if (isbark == 1) {
					String^ ms1 = "s";
					DogDrow(pBox, x_dogP, y_dogP, ms1, xh);
					barkEvent();
					
				}
				
					isbark = 0;
				
			}
		};
		int humanpointnow;
		int xyz_random(int min, int max) {
			int r= min + rand() % (max - min + 1);
			return r;
		}
		
		
		
		ref class DogOwner:public Human
		{
		private:
			String^ Name;
		public:
			delegate void Lunch(PictureBox^ pBox);//LunchEvent
			event Lunch^ LunchEvent;
			DogOwner(){

			}
			
			void LunchTime(PictureBox^ pBox) {
				LunchEvent(pBox);
			}
			property String^ NameP {
				String^ get() { return Name; }
			}
			void HealingDog(PictureBox^ pBox,int good1) {
				String^ gooddrow = Convert::ToString(good1);
				String^ imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\1Лечение" + gooddrow + ".png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);
				imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\2Лечение" + gooddrow + ".png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);
				imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\3Лечение.png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);
				
			}
			void Healingdog2(PictureBox^ pBox, int good1) {
				String^ gooddrow = Convert::ToString(good1);
				String^ imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\4Лечение" + gooddrow + ".png";
				
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);
				imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\5Лечение" + gooddrow + ".png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);
				imagestr = "C:\\Users\\DynDe\\Desktop\\Рисунки\\6Лечение" + gooddrow + ".png";
				pBox->Image = System::Drawing::Bitmap::FromFile(imagestr);
				Thread::Sleep(500);
			}
		};
		ref class DayNightCycle
		{
		private:
			int Day;
			int daynighttime;
		public:
			delegate void SwapHandler(PictureBox^ pBox);//LunchEvent
			event SwapHandler^ LunchEvent;
		
			DayNightCycle() {
				Day = 1;
				daynighttime = 0;
			}
			property int DayP {
				int get() { return Day; }
			}
			property int daynighttimeP {
				int get() { return daynighttime; }
			}
			void TimePlus(PictureBox^ pBox) {
				daynighttime++;
				
				if (daynighttime == 0) {
					StartDayCycle(pBox);
				}
				if (daynighttime == 4) {
					StartMoonCycle(pBox);
				}
				if (daynighttime==8) {
					daynighttime = 0;
					StartDayCycle(pBox);
				}
			}

			void StartDayCycle(PictureBox^ pBox){
				Day = 1;
				pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\Солнце.png");	
			}
			
			void StartMoonCycle(PictureBox^ pBox) {
				Day = 0;
				pBox->Image = System::Drawing::Bitmap::FromFile("C:\\Users\\DynDe\\Desktop\\Рисунки\\Луна.png");
			}
		};
	void startsimulation() {
			int whileflag =0;
		
			int T_DoogGood = 0;
			int	T_TrainedDog = 0;
			int randsob;
		if (checkBox1->Checked) {
			T_DoogGood = 0;
		}
		
		if (checkBox2->Checked) {
			T_DoogGood = 1;
		}
	
		if (checkBox3->Checked) {
			T_TrainedDog = 1;
		}
		else
		{
			T_TrainedDog = 0;
		}
		
		
		
		
		if (T_TrainedDog == 0) {//Если собака не обучена
			String^ ms = "m";
			DayNightCycle^ objDay = gcnew DayNightCycle();
			DogOwner^ objDogOwner = gcnew DogOwner();
			Dog^ objDog = gcnew Dog();
			
			objDog->DogSetIsGood(T_DoogGood);//Устанавливаем тип собаки	
			
			
			objDogOwner->LunchEvent += gcnew DogOwner::Lunch(objDog, &Dog::foodtime);//Подписка собаки на событие кормежки
			objDog->DogVetEvent += gcnew Dog::VetHandler(objDogOwner, &DogOwner::HealingDog);

			//objDog->DogDrow(pictureBox1, objDog->x_dogP, objDog->y_dogP, ms, 0);//Отрисовка 
			
			
			while (true)
			{
				//отрисовка
				if (objDog->isgoodP==0) {
					objDogOwner->Healingdog2(pictureBox1, objDog->goodP);
					objDog->setisgood(1);
				}
				Human^ objHuman = gcnew Human(0, (xyz_random(0, 3)));//Создаем экз.класса человек,привычка курить определяется случайно(50%)																
				if (objDay->DayP == 1)objDog->barkEvent += gcnew Dog::BarkHandler(objHuman, &Human::HumanHearBark);
																	 
																	 
				//отрисовка 
				objHuman->HumanDrow(pictureBox2, objHuman->Condition);
				objDog->DogDrow(pictureBox1, 0, 0, ms, 0);
				
				
				//Происходит случайное событие-собаку проголодалась 
				if (((objDay->daynighttimeP)==0)||(objDay->daynighttimeP==4)) {
					objDogOwner->LunchTime(pictureBox3);
				}
				
				
				if ((randsob = xyz_random(1, 4)==1)&&(objDay->DayP == 1)) {
						objDog->DogNeedToVet(pictureBox1,objDog->goodP);
						
				}
				
				if ((objDay->DayP==1)) {//Проверка день или ночь
					//objDay->StartDayCycle(pictureBox7);//отрисовка
					objDog->awaketime(pictureBox3);//отрисовка
					if(objDog->isgoodP)objDog->DogPoint(pictureBox1, objDog->x_dogP, objDog->y_dogP, ms, objHuman->Condition);//Собака переместилась в случайное место 
				}
				else {
					//objDay->StartMoonCycle(pictureBox7);
					objDog->sleeptime(pictureBox3);//отрисовка
					//objDog->DogDrow(pictureBox1, 0, 0, ms, 0);
				}
				//подписки для взаимодействия человека и собаки
				//if (objDay->DayP == 1)objHuman->HumanHearBarkEvent+=gcnew Dog::HumanHearHandler(objDog,&Dog::Bark);//Подписка:HumanHearBarkEvent вызовет метод Bark
				//отрисовка
				while (whileflag == 0) {
																				
					//Человек переместился
					objHuman->HumanPoint(pictureBox2,objHuman->Condition);
					
					
					//Методы для отрисовки и более плавной анимации
					if((objDay->DayP==1)&&(objDog->isgoodP))objDog->BarkDrow(pictureBox1, objDog->x_dogP, objDog->y_dogP, ms, objHuman->Condition);
					
					objHuman->HumanDrow(pictureBox2, objHuman->Condition);
					if ((objDay->DayP == 1) && (objDog->isgoodP))objDog->DogDrow(pictureBox1, objDog->x_dogP, objDog->y_dogP, ms, objHuman->Condition);
					if (objHuman->Condition == 3) {//Если человек вышел за экран->перезапустить 
						whileflag = 1;
						objDay->TimePlus(pictureBox7);
					}

				}
				objHuman->HumanDrow(pictureBox2,0);
				
				whileflag = 0;
				
				

			}
		}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		else {//Если собака обучена
			String^ ms = "m";
			DayNightCycle^ objDay = gcnew DayNightCycle();
			DogOwner^ objDogOwner = gcnew DogOwner();
			TrainedDog^ objTDog = gcnew TrainedDog();
			objTDog->DogSetIsGood(T_DoogGood);//Изменяем поле собаки-декоративная или охранник


			objTDog->DogDrow(pictureBox1, objTDog->x_dogP, objTDog->y_dogP, ms, 0);//Отрисовка пустого участка
			
			
			objDogOwner->LunchEvent += gcnew DogOwner::Lunch(objTDog, &TrainedDog::foodtime);//Подписка собаки на кормежку
			objTDog->DogVetEvent += gcnew Dog::VetHandler(objDogOwner, &DogOwner::HealingDog);


			while (true)
			{
				if (objTDog->isgoodP == 0) {
					objDogOwner->Healingdog2(pictureBox1, objTDog->goodP);
					objTDog->setisgood(1);
				}
				Human^ objHuman = gcnew Human(0, (xyz_random(0, 3)));//Создаем экз.класса человек,привычка курить определяется случайно(50%)

				//Отрисовки
				objHuman->HumanDrow(pictureBox2, objHuman->Condition);
				objTDog->DogDrow(pictureBox1, 0, 0, ms, 0);

				
				
				//Происходит случайное событие-собаку проголодалась 
				if (((objDay->daynighttimeP) == 0) || (objDay->daynighttimeP == 4)) {
					objDogOwner->LunchTime(pictureBox3);
				}


				if ((randsob = xyz_random(1, 4) == 1) && (objDay->DayP == 1)) {
					objTDog->DogNeedToVet(pictureBox1, objTDog->goodP);
					
				}
				
				
				
				//Собака переместилась в случайное место 
				if (objDay->DayP == 1) {
					//objDay->StartDayCycle(pictureBox7);
					objTDog->awaketime(pictureBox3);
					if(objTDog->isgoodP)objTDog->DogPoint(pictureBox1, objTDog->x_dogP, objTDog->y_dogP, ms, objHuman->Condition);
				}
				else {
					//objDay->StartMoonCycle(pictureBox7);
					objTDog->DogDrow(pictureBox1, 0, 0, ms, 0);
					objTDog->sleeptime(pictureBox3);//отрисовка
				}
				//Подписки 
				if(objDay->DayP == 1)objHuman->DogSeeSmokeHumanEvent += gcnew Human::DogSeeSmokeHumanHandler(objTDog, &TrainedDog::Bark);//Подписка: Обученная собака реагирует на курение			
				if(objDay->DayP == 1)objTDog->barkEvent += gcnew Dog::BarkHandler(objHuman, &Human::HumanHearBark);//Если собака лает-человек пугается
				
				while (whileflag == 0) {

					//Отрисовка 
					if ((objDay->DayP == 1) && (objTDog->isgoodP))objTDog->DogDrow(pictureBox1, objTDog->x_dogP, objTDog->y_dogP, ms, objHuman->Condition);



					//Методы отрисовки для более четкого отображения симуляции
					objHuman->HumanPoint(pictureBox2, objHuman->Condition);
					if ((objDay->DayP == 1) && (objTDog->isgoodP))objTDog->BarkDrow(pictureBox1, objTDog->x_dogP, objTDog->y_dogP, ms, objHuman->Condition);
					objHuman->HumanDrow(pictureBox2, objHuman->Condition);
					if ((objDay->DayP == 1) && (objTDog->isgoodP))objTDog->DogDrow(pictureBox1, objTDog->x_dogP, objTDog->y_dogP, ms, objHuman->Condition);
					if (objHuman->Condition == 3) {//Если человек вышел за экран->перезапустить 
						whileflag = 1;
						objDay->TimePlus(pictureBox7);
					}

				}
				objHuman->HumanDrow(pictureBox2, 0);

				objTDog->barkset(0);
				
				
				whileflag = 0;
			
			}
		}

		
	}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Thread^ backgroundThread = gcnew Thread(gcnew ThreadStart(this, &MyForm::startsimulation));
		backgroundThread->Start();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
