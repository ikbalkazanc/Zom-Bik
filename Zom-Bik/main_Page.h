#pragma once
#include "how_Page.h"
#include "game_Page.h"
#include "sorgu_Page.h"
#include "game_Page3.h"
#include "game_PC_Page.h"
#include "game_PC_Page2.h"

namespace ZomBik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main_Page
	/// </summary>
	public ref class main_Page : public System::Windows::Forms::Form
	{
	public:
		main_Page(void)
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
		~main_Page()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButton2;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  exit;

	private: System::Windows::Forms::Button^  how;

	private: System::Windows::Forms::Button^  oyna;
	private: System::Windows::Forms::Button^  oner;
	private: System::Windows::Forms::Button^  sorgula;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(main_Page::typeid));
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->how = (gcnew System::Windows::Forms::Button());
			this->oyna = (gcnew System::Windows::Forms::Button());
			this->oner = (gcnew System::Windows::Forms::Button());
			this->sorgula = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->radioButton2->Location = System::Drawing::Point(29, 28);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(147, 22);
			this->radioButton2->TabIndex = 20;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Kartezyen Çarpým";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->radioButton1->Location = System::Drawing::Point(29, 55);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(130, 22);
			this->radioButton1->TabIndex = 19;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Normal Çarpým";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(285, 193);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(299, 669);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"v1.0";
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::MistyRose;
			this->exit->FlatAppearance->BorderSize = 0;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->exit->Location = System::Drawing::Point(53, 609);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(230, 51);
			this->exit->TabIndex = 16;
			this->exit->Text = L"Çýkýþ";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &main_Page::button3_Click);
			// 
			// how
			// 
			this->how->BackColor = System::Drawing::Color::MistyRose;
			this->how->FlatAppearance->BorderSize = 0;
			this->how->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->how->Location = System::Drawing::Point(53, 428);
			this->how->Name = L"how";
			this->how->Size = System::Drawing::Size(230, 54);
			this->how->TabIndex = 15;
			this->how->Text = L"Nasýl Oynanýr\?";
			this->how->UseVisualStyleBackColor = false;
			this->how->Click += gcnew System::EventHandler(this, &main_Page::button2_Click);
			// 
			// oyna
			// 
			this->oyna->BackColor = System::Drawing::Color::MistyRose;
			this->oyna->FlatAppearance->BorderSize = 0;
			this->oyna->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->oyna->Location = System::Drawing::Point(53, 368);
			this->oyna->Name = L"oyna";
			this->oyna->Size = System::Drawing::Size(230, 54);
			this->oyna->TabIndex = 14;
			this->oyna->Text = L"Oyna";
			this->oyna->UseVisualStyleBackColor = false;
			this->oyna->Click += gcnew System::EventHandler(this, &main_Page::button1_Click);
			// 
			// oner
			// 
			this->oner->BackColor = System::Drawing::Color::MistyRose;
			this->oner->FlatAppearance->BorderSize = 0;
			this->oner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->oner->Location = System::Drawing::Point(53, 546);
			this->oner->Name = L"oner";
			this->oner->Size = System::Drawing::Size(230, 57);
			this->oner->TabIndex = 21;
			this->oner->Text = L"Kelime Öner";
			this->oner->UseVisualStyleBackColor = false;
			this->oner->Click += gcnew System::EventHandler(this, &main_Page::oner_Click);
			// 
			// sorgula
			// 
			this->sorgula->BackColor = System::Drawing::Color::MistyRose;
			this->sorgula->FlatAppearance->BorderSize = 0;
			this->sorgula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->sorgula->Location = System::Drawing::Point(53, 488);
			this->sorgula->Name = L"sorgula";
			this->sorgula->Size = System::Drawing::Size(230, 52);
			this->sorgula->TabIndex = 22;
			this->sorgula->Text = L"Kelime Sorgula";
			this->sorgula->UseVisualStyleBackColor = false;
			this->sorgula->Click += gcnew System::EventHandler(this, &main_Page::sorgula_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->checkBox1->Location = System::Drawing::Point(29, 92);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(141, 22);
			this->checkBox1->TabIndex = 23;
			this->checkBox1->Text = L"Bilgisayar - Ýnsan";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->AccessibleDescription = L"";
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->groupBox1->Location = System::Drawing::Point(53, 226);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(230, 130);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Þeçenekler";
			// 
			// main_Page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OldLace;
			this->ClientSize = System::Drawing::Size(329, 684);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->sorgula);
			this->Controls->Add(this->oner);
			this->Controls->Add(this->oyna);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->how);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"main_Page";
			this->ShowInTaskbar = false;
			this->Text = L"Zom-Bik";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!checkBox1->Checked) {
			if (radioButton1->Checked) {
				game_Page games;
				this->Hide();
				games.ShowDialog();
			}
			else if (radioButton2->Checked) {
				game_Page3 games3;
				this->Hide();
				games3.ShowDialog();
			}
			else {
				MessageBox::Show("Lütfen bir oyun þeçeneði þeçiniz", "Zom-Bik",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			if (radioButton1->Checked) {
				game_PC_Page normal;
				this->Hide();
				normal.ShowDialog();
			}
			else if (radioButton2->Checked) {
				game_PC_Page2 kartezyen;
				this->Hide();
				kartezyen.ShowDialog();
			}
			else {
				MessageBox::Show("Lütfen bir oyun þeçeneði þeçiniz", "Zom-Bik",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		how_Page how;
		how.ShowDialog();
		
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Çýkmak isediðinize eminmisiniz?", "Zom-Bik",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question)
			== System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
	private: System::Void sorgula_Click(System::Object^  sender, System::EventArgs^  e) {
	sorgu_Page sorgu;
	sorgu.ShowDialog();
}
	private: System::Void oner_Click(System::Object^  sender, System::EventArgs^  e) {
	ifstream dosya;
	dosya.open("soz.txt");
	string oner[5];
	for (int i = 0; i < 5; i++) {
		oner[i] = randWord(dosya);
	}
	MessageBox::Show("Önerilen kelilmeler :  " + gcnew String(oner[0].c_str()) + " ," +
		gcnew String(oner[1].c_str()) + " ," + gcnew String(oner[2].c_str()) + " ," 
		+ gcnew String(oner[3].c_str()) + " ," + gcnew String(oner[4].c_str()), "Zom-Bik",
		MessageBoxButtons::OK, MessageBoxIcon::Information);
}
    static string randWord(ifstream& fileName) {
			 if (!fileName.is_open()) {
				 return "0";
			 }
			 int count = 0;
			 string temp;
			 while (!fileName.eof()) {
				 fileName >> temp;
				 //cout << temp << endl;
				 count++;
			 }

			 //cout << endl << endl << count << endl;
			 fileName.clear();
			 fileName.seekg(0, ios::beg);

			 int b = time(0) % count;
			 for (int i = 0; i < b; i++) {
				 fileName >> temp;
			 }

			 return temp;
		 }

};
}
