#pragma once
#include "node.h"
#include <fstream>
#include <sstream>
#include <string>
#include <conio.h>
#include <clocale>
#include <ctime>
#include <iostream>
#include <time.h>


namespace ZomBik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for game_PC_Page2
	/// </summary>
	public ref class game_PC_Page2 : public System::Windows::Forms::Form
	{
	public:
		int count = 0;
		int second = 0;
		int minute = 0;
		int random = 0;
		string* tutulan;
		string* verilen;
		int sozluk_boyutu = 0, tahmin = 0;
		double duration;
		double total;
		clock_t start;
		game_PC_Page2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~game_PC_Page2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected:
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  timer;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Button^  tamam;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  menu;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(game_PC_Page2::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tamam = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &game_PC_Page2::timer1_Tick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(593, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 25);
			this->label4->TabIndex = 153;
			this->label4->Text = L"Ýþlem süresi(ms) :";
			// 
			// timer
			// 
			this->timer->AutoSize = true;
			this->timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->timer->Location = System::Drawing::Point(687, 159);
			this->timer->Name = L"timer";
			this->timer->Size = System::Drawing::Size(72, 25);
			this->timer->TabIndex = 152;
			this->timer->Text = L"00 : 00";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(593, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 25);
			this->label3->TabIndex = 151;
			this->label3->Text = L"Sayaç : ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label31->Location = System::Drawing::Point(331, 20);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(98, 50);
			this->label31->TabIndex = 150;
			this->label31->Text = L"Ortak harf\r\nsayýsý:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label30->Location = System::Drawing::Point(26, 45);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(228, 25);
			this->label30->TabIndex = 149;
			this->label30->Text = L"Tahmin edilen kelimeler :";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label27->Location = System::Drawing::Point(778, 184);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(45, 25);
			this->label27->TabIndex = 148;
			this->label27->Text = L"000";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label24->Location = System::Drawing::Point(421, 76);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(137, 25);
			this->label24->TabIndex = 147;
			this->label24->Text = L"Arana kelime :";
			// 
			// tamam
			// 
			this->tamam->BackColor = System::Drawing::Color::MistyRose;
			this->tamam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->tamam->Location = System::Drawing::Point(426, 159);
			this->tamam->Name = L"tamam";
			this->tamam->Size = System::Drawing::Size(161, 50);
			this->tamam->TabIndex = 146;
			this->tamam->Text = L"Tamam";
			this->tamam->UseVisualStyleBackColor = false;
			this->tamam->Click += gcnew System::EventHandler(this, &game_PC_Page2::tamam_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightCyan;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(426, 112);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(397, 30);
			this->textBox1->TabIndex = 145;
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::LightCyan;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 29;
			this->listBox2->Location = System::Drawing::Point(327, 73);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(62, 497);
			this->listBox2->TabIndex = 144;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::LightCyan;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(31, 73);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(290, 495);
			this->listBox1->TabIndex = 143;
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::Color::MistyRose;
			this->menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->menu->Location = System::Drawing::Point(681, 527);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(142, 39);
			this->menu->TabIndex = 142;
			this->menu->Text = L"Ana Menü";
			this->menu->UseVisualStyleBackColor = false;
			this->menu->Click += gcnew System::EventHandler(this, &game_PC_Page2::menu_Click);
			// 
			// game_PC_Page2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OldLace;
			this->ClientSize = System::Drawing::Size(850, 582);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->timer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->tamam);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"game_PC_Page2";
			this->Text = L"Bilgisayar ile Kartezyen Çarpým";
			this->Load += gcnew System::EventHandler(this, &game_PC_Page2::game_PC_Page2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tamam_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "") {
			MessageBox::Show("Lütfen istenilen boþluðu doldurunuz");
		}
		else {
			count++;
			cout << "tahmininiz :";
			*verilen = toStandardString(textBox1->Text);
			cout << *verilen << endl;
			start = clock();
			string bir = *verilen;
			string iki = *tutulan;
			if (*verilen == *tutulan) {
				cout << "tebrikler doðru cevap!";
				if (MessageBox::Show("Tebrikler tahmininiz doðru.Tahmin ettiðiniz kelime :" + gcnew String(verilen->c_str()) +
					", \n " + gcnew String(minute.ToString()) + ":" + gcnew String(second.ToString()) + " dakika içinde ,"
					+ gcnew String(total.ToString()) + " saniye iþlem süresi içersinde tahmin ettiniz. \n Menüye dönmek için Evet'e Basýnýz.", "Zom-Bik",
					MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk)
					== System::Windows::Forms::DialogResult::Yes) {
					Application::Restart();
				}
			}
			for (int i = 0; bir[i] != '\0'; i++) {
				for (int j = 0; iki[j] != '\0'; j++) {
					if (iki[j] == bir[i]) {
						tahmin++;
						
					}
				}
			}
			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
			label27->Text = duration.ToString();
			total = total + duration;
			listBox1->Items->Add(count + "." + textBox1->Text);
			listBox2->Items->Add(tahmin.ToString());
			cout << "ipucu : " << tahmin << " <" << duration << ">" << endl << endl;
			tahmin = 0;
		}

	}
private: System::Void menu_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Menüye dönmek istediðinize eminmisniz?", "Zom-Bik",
		MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk)
		== System::Windows::Forms::DialogResult::Yes) {
		Application::Restart();
	}
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	second++;
	if (second > 59) {
		minute++;
		second = 0;
	}
	timer->Text = "0" + minute + " : " + gcnew String(to_string(second).c_str());
}
private: System::Void game_PC_Page2_Load(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = true;
	string s;
	string ss;
	tutulan = new string();
	verilen = new string();
	ifstream dosya;
	dosya.open("soz.txt");
	while (dosya >> s) {
		sozluk_boyutu++;
	}
	dosya.close();
	srand(time(NULL));
	random = 1 + rand() % (sozluk_boyutu - 1);
	sozluk_boyutu = 0;
	dosya.open("soz.txt");
	while (dosya >> ss) {
		sozluk_boyutu++;
		if (sozluk_boyutu == random) {
			break;
		}
	}
	*tutulan = ss;
	cout << *tutulan << endl;
}
		 static std::string toStandardString(System::String^ string)
		 {
			 using System::Runtime::InteropServices::Marshal;
			 System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			 char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			 std::string returnString(charPointer, string->Length);
			 Marshal::FreeHGlobal(pointer);
			 return returnString;
		 }
};
}
