#pragma once
#include <string> 
#include <fstream>
#include <sstream>


namespace ZomBik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for sorgu_Page
	/// </summary>
	public ref class sorgu_Page : public System::Windows::Forms::Form
	{
	public:
		sorgu_Page(void)
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
		~sorgu_Page()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(sorgu_Page::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(42, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(484, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Lütfen aramak istediðininz kelimeyi alttaki boþluða giriniz :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MistyRose;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->Location = System::Drawing::Point(409, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ARA";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &sorgu_Page::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightCyan;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(46, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(357, 28);
			this->textBox1->TabIndex = 2;
			// 
			// sorgu_Page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OldLace;
			this->ClientSize = System::Drawing::Size(572, 172);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"sorgu_Page";
			this->Text = L"Kelime Sorgulama Ekraný";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text == "") {
			MessageBox::Show("Lütfen boþluðu doldurunuz.");
		}
		else {
			sorgulama(toStandardString(textBox1->Text));
		}
	}
			 void sorgulama(string kelime) {//kelime kullanýcýdan alýncak
				 ifstream dosya;
				 bool denet = true;
				 string alinan;
				 dosya.open("soz.txt");
				 while (dosya >> alinan) {
					 if (kelime == alinan) {
						 denet = false;
						 break;
					 }
				 }
				 dosya.close();
				 if (denet) {
					 MessageBox::Show("Arattýðýnýz kelime kelime listesinde bulunamadý.Kelime, kelime listesine eklendi.");//hata mesajý ekrana bulunumadý ve eklendi demesi lazým
					 ofstream dosya;
					 dosya.open("soz.txt", ios::app);
					 dosya << "\n"<<kelime;
				 }
				 else {
					 MessageBox::Show("Arattýðýnýz kelime,kelime listesinde bulunmaktadýr");
				 }
			 }
			 static std::string toStandardString(System::String^ string)
			 {
				 //system stringi std stringe çeviriyor

				 //label1->Text = gcnew String(list->print(0).c_str());

				 /*auto sysText = textBox1->Text;
				 string stdText = toStandardString(sysText);
				 label2->Text = gcnew String(list->print(3).c_str());*/

				 using System::Runtime::InteropServices::Marshal;
				 System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
				 char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
				 std::string returnString(charPointer, string->Length);
				 Marshal::FreeHGlobal(pointer);
				 return returnString;
			 }
	};

}
