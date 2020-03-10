#include "node.h"
#pragma once

#include <fstream>
#include <sstream>
#include <string>
#include <conio.h>
#include <clocale>
#include <ctime>
#include <iostream>
namespace ZomBik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for game_Page3
	/// </summary>
	public ref class game_Page3 : public System::Windows::Forms::Form
	{
	public:
		int second = 0;
		int minute = 0;
		clock_t start;
		bool flag = true;
		double duration, duration2;
		double total;
		agac* _agac;
		int tahmin = 0, tahmin2 = 0;
		string* ss;
		string* s;
		string* atama;
		string* atama2;
		int count = 0;

		game_Page3(void)
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
		~game_Page3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  _L;
	protected:
	private: System::Windows::Forms::Label^  _V;
	private: System::Windows::Forms::Label^  _GG;
	private: System::Windows::Forms::Label^  _R;
	private: System::Windows::Forms::Label^  _C;
	private: System::Windows::Forms::Label^  _K;
	private: System::Windows::Forms::Label^  _UU;
	private: System::Windows::Forms::Label^  _O;
	private: System::Windows::Forms::Label^  _P;
	private: System::Windows::Forms::Label^  _G;
	private: System::Windows::Forms::Label^  _B;
	private: System::Windows::Forms::Label^  _J;
	private: System::Windows::Forms::Label^  _T;
	private: System::Windows::Forms::Label^  _II;
	private: System::Windows::Forms::Label^  _U;
	private: System::Windows::Forms::Label^  _E;
	private: System::Windows::Forms::Label^  _F;
	private: System::Windows::Forms::Label^  _OO;
	private: System::Windows::Forms::Label^  _N;
	private: System::Windows::Forms::Label^  _Z;
	private: System::Windows::Forms::Label^  _A;
	private: System::Windows::Forms::Label^  _I;
	private: System::Windows::Forms::Label^  _Y;
	private: System::Windows::Forms::Label^  _M;
	private: System::Windows::Forms::Label^  _SS;
	private: System::Windows::Forms::Label^  _H;
	private: System::Windows::Forms::Label^  _S;
	private: System::Windows::Forms::Label^  _D;
	private: System::Windows::Forms::Label^  _CC;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  bitti;
	private: System::Windows::Forms::Label^  timer;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Timer^  timer1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(game_Page3::typeid));
			this->_L = (gcnew System::Windows::Forms::Label());
			this->_V = (gcnew System::Windows::Forms::Label());
			this->_GG = (gcnew System::Windows::Forms::Label());
			this->_R = (gcnew System::Windows::Forms::Label());
			this->_C = (gcnew System::Windows::Forms::Label());
			this->_K = (gcnew System::Windows::Forms::Label());
			this->_UU = (gcnew System::Windows::Forms::Label());
			this->_O = (gcnew System::Windows::Forms::Label());
			this->_P = (gcnew System::Windows::Forms::Label());
			this->_G = (gcnew System::Windows::Forms::Label());
			this->_B = (gcnew System::Windows::Forms::Label());
			this->_J = (gcnew System::Windows::Forms::Label());
			this->_T = (gcnew System::Windows::Forms::Label());
			this->_II = (gcnew System::Windows::Forms::Label());
			this->_U = (gcnew System::Windows::Forms::Label());
			this->_E = (gcnew System::Windows::Forms::Label());
			this->_F = (gcnew System::Windows::Forms::Label());
			this->_OO = (gcnew System::Windows::Forms::Label());
			this->_N = (gcnew System::Windows::Forms::Label());
			this->_Z = (gcnew System::Windows::Forms::Label());
			this->_A = (gcnew System::Windows::Forms::Label());
			this->_I = (gcnew System::Windows::Forms::Label());
			this->_Y = (gcnew System::Windows::Forms::Label());
			this->_M = (gcnew System::Windows::Forms::Label());
			this->_SS = (gcnew System::Windows::Forms::Label());
			this->_H = (gcnew System::Windows::Forms::Label());
			this->_S = (gcnew System::Windows::Forms::Label());
			this->_D = (gcnew System::Windows::Forms::Label());
			this->_CC = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bitti = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menu = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// _L
			// 
			this->_L->AutoSize = true;
			this->_L->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_L->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_L->Location = System::Drawing::Point(543, 413);
			this->_L->Name = L"_L";
			this->_L->Size = System::Drawing::Size(39, 42);
			this->_L->TabIndex = 124;
			this->_L->Text = L"L";
			// 
			// _V
			// 
			this->_V->AutoSize = true;
			this->_V->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_V->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_V->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_V->Location = System::Drawing::Point(559, 520);
			this->_V->Name = L"_V";
			this->_V->Size = System::Drawing::Size(43, 42);
			this->_V->TabIndex = 123;
			this->_V->Text = L"V";
			// 
			// _GG
			// 
			this->_GG->AutoSize = true;
			this->_GG->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_GG->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_GG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_GG->Location = System::Drawing::Point(541, 358);
			this->_GG->Name = L"_GG";
			this->_GG->Size = System::Drawing::Size(47, 42);
			this->_GG->TabIndex = 122;
			this->_GG->Text = L"Ð";
			// 
			// _R
			// 
			this->_R->AutoSize = true;
			this->_R->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_R->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_R->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_R->Location = System::Drawing::Point(543, 466);
			this->_R->Name = L"_R";
			this->_R->Size = System::Drawing::Size(45, 42);
			this->_R->TabIndex = 121;
			this->_R->Text = L"R";
			// 
			// _C
			// 
			this->_C->AutoSize = true;
			this->_C->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_C->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_C->Location = System::Drawing::Point(543, 302);
			this->_C->Name = L"_C";
			this->_C->Size = System::Drawing::Size(45, 42);
			this->_C->TabIndex = 120;
			this->_C->Text = L"C";
			// 
			// _K
			// 
			this->_K->AutoSize = true;
			this->_K->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_K->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_K->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_K->Location = System::Drawing::Point(483, 413);
			this->_K->Name = L"_K";
			this->_K->Size = System::Drawing::Size(43, 42);
			this->_K->TabIndex = 119;
			this->_K->Text = L"K";
			// 
			// _UU
			// 
			this->_UU->AutoSize = true;
			this->_UU->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_UU->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_UU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_UU->Location = System::Drawing::Point(498, 520);
			this->_UU->Name = L"_UU";
			this->_UU->Size = System::Drawing::Size(45, 42);
			this->_UU->TabIndex = 118;
			this->_UU->Text = L"Ü";
			// 
			// _O
			// 
			this->_O->AutoSize = true;
			this->_O->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_O->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_O->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_O->Location = System::Drawing::Point(716, 413);
			this->_O->Name = L"_O";
			this->_O->Size = System::Drawing::Size(47, 42);
			this->_O->TabIndex = 117;
			this->_O->Text = L"O";
			// 
			// _P
			// 
			this->_P->AutoSize = true;
			this->_P->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_P->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_P->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_P->Location = System::Drawing::Point(483, 466);
			this->_P->Name = L"_P";
			this->_P->Size = System::Drawing::Size(43, 42);
			this->_P->TabIndex = 116;
			this->_P->Text = L"P";
			// 
			// _G
			// 
			this->_G->AutoSize = true;
			this->_G->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_G->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_G->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_G->Location = System::Drawing::Point(483, 358);
			this->_G->Name = L"_G";
			this->_G->Size = System::Drawing::Size(47, 42);
			this->_G->TabIndex = 115;
			this->_G->Text = L"G";
			// 
			// _B
			// 
			this->_B->AutoSize = true;
			this->_B->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_B->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_B->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_B->Location = System::Drawing::Point(483, 302);
			this->_B->Name = L"_B";
			this->_B->Size = System::Drawing::Size(43, 42);
			this->_B->TabIndex = 114;
			this->_B->Text = L"B";
			// 
			// _J
			// 
			this->_J->AutoSize = true;
			this->_J->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_J->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_J->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_J->Location = System::Drawing::Point(424, 413);
			this->_J->Name = L"_J";
			this->_J->Size = System::Drawing::Size(37, 42);
			this->_J->TabIndex = 125;
			this->_J->Text = L"J";
			// 
			// _T
			// 
			this->_T->AutoSize = true;
			this->_T->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_T->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_T->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_T->Location = System::Drawing::Point(716, 466);
			this->_T->Name = L"_T";
			this->_T->Size = System::Drawing::Size(41, 42);
			this->_T->TabIndex = 105;
			this->_T->Text = L"T";
			// 
			// _II
			// 
			this->_II->AutoSize = true;
			this->_II->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_II->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_II->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_II->Location = System::Drawing::Point(716, 358);
			this->_II->Name = L"_II";
			this->_II->Size = System::Drawing::Size(47, 42);
			this->_II->TabIndex = 97;
			this->_II->Text = L"Ý  ";
			// 
			// _U
			// 
			this->_U->AutoSize = true;
			this->_U->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_U->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_U->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_U->Location = System::Drawing::Point(434, 520);
			this->_U->Name = L"_U";
			this->_U->Size = System::Drawing::Size(45, 42);
			this->_U->TabIndex = 98;
			this->_U->Text = L"U";
			// 
			// _E
			// 
			this->_E->AutoSize = true;
			this->_E->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_E->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_E->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_E->Location = System::Drawing::Point(716, 302);
			this->_E->Name = L"_E";
			this->_E->Size = System::Drawing::Size(43, 42);
			this->_E->TabIndex = 99;
			this->_E->Text = L"E";
			// 
			// _F
			// 
			this->_F->AutoSize = true;
			this->_F->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_F->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_F->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_F->Location = System::Drawing::Point(424, 358);
			this->_F->Name = L"_F";
			this->_F->Size = System::Drawing::Size(41, 42);
			this->_F->TabIndex = 100;
			this->_F->Text = L"F";
			// 
			// _OO
			// 
			this->_OO->AutoSize = true;
			this->_OO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_OO->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_OO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_OO->Location = System::Drawing::Point(424, 466);
			this->_OO->Name = L"_OO";
			this->_OO->Size = System::Drawing::Size(47, 42);
			this->_OO->TabIndex = 101;
			this->_OO->Text = L"Ö";
			// 
			// _N
			// 
			this->_N->AutoSize = true;
			this->_N->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_N->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_N->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_N->Location = System::Drawing::Point(654, 413);
			this->_N->Name = L"_N";
			this->_N->Size = System::Drawing::Size(45, 42);
			this->_N->TabIndex = 102;
			this->_N->Text = L"N";
			// 
			// _Z
			// 
			this->_Z->AutoSize = true;
			this->_Z->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_Z->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_Z->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_Z->Location = System::Drawing::Point(696, 520);
			this->_Z->Name = L"_Z";
			this->_Z->Size = System::Drawing::Size(41, 42);
			this->_Z->TabIndex = 103;
			this->_Z->Text = L"Z";
			// 
			// _A
			// 
			this->_A->AutoSize = true;
			this->_A->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_A->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_A->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_A->Location = System::Drawing::Point(422, 302);
			this->_A->Name = L"_A";
			this->_A->Size = System::Drawing::Size(43, 42);
			this->_A->TabIndex = 112;
			this->_A->Text = L"A";
			// 
			// _I
			// 
			this->_I->AutoSize = true;
			this->_I->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_I->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_I->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_I->Location = System::Drawing::Point(652, 358);
			this->_I->Name = L"_I";
			this->_I->Size = System::Drawing::Size(47, 42);
			this->_I->TabIndex = 104;
			this->_I->Text = L"I  ";
			// 
			// _Y
			// 
			this->_Y->AutoSize = true;
			this->_Y->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_Y->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_Y->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_Y->Location = System::Drawing::Point(627, 520);
			this->_Y->Name = L"_Y";
			this->_Y->Size = System::Drawing::Size(43, 42);
			this->_Y->TabIndex = 113;
			this->_Y->Text = L"Y";
			// 
			// _M
			// 
			this->_M->AutoSize = true;
			this->_M->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_M->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_M->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_M->Location = System::Drawing::Point(597, 413);
			this->_M->Name = L"_M";
			this->_M->Size = System::Drawing::Size(49, 42);
			this->_M->TabIndex = 106;
			this->_M->Text = L"M";
			// 
			// _SS
			// 
			this->_SS->AutoSize = true;
			this->_SS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_SS->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_SS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_SS->Location = System::Drawing::Point(654, 466);
			this->_SS->Name = L"_SS";
			this->_SS->Size = System::Drawing::Size(43, 42);
			this->_SS->TabIndex = 107;
			this->_SS->Text = L"Þ";
			// 
			// _H
			// 
			this->_H->AutoSize = true;
			this->_H->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_H->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_H->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_H->Location = System::Drawing::Point(597, 358);
			this->_H->Name = L"_H";
			this->_H->Size = System::Drawing::Size(45, 42);
			this->_H->TabIndex = 108;
			this->_H->Text = L"H";
			// 
			// _S
			// 
			this->_S->AutoSize = true;
			this->_S->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_S->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_S->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_S->Location = System::Drawing::Point(599, 466);
			this->_S->Name = L"_S";
			this->_S->Size = System::Drawing::Size(43, 42);
			this->_S->TabIndex = 109;
			this->_S->Text = L"S";
			// 
			// _D
			// 
			this->_D->AutoSize = true;
			this->_D->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_D->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_D->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_D->Location = System::Drawing::Point(652, 302);
			this->_D->Name = L"_D";
			this->_D->Size = System::Drawing::Size(45, 42);
			this->_D->TabIndex = 110;
			this->_D->Text = L"D";
			// 
			// _CC
			// 
			this->_CC->AutoSize = true;
			this->_CC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->_CC->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->_CC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->_CC->Location = System::Drawing::Point(597, 302);
			this->_CC->Name = L"_CC";
			this->_CC->Size = System::Drawing::Size(45, 42);
			this->_CC->TabIndex = 111;
			this->_CC->Text = L"Ç";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label4->Location = System::Drawing::Point(435, 206);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 25);
			this->label4->TabIndex = 96;
			this->label4->Text = L"Ýþlem süresi(ms) :";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MistyRose;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button1->Location = System::Drawing::Point(435, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(313, 36);
			this->button1->TabIndex = 95;
			this->button1->Text = L"Kelime ver";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &game_Page3::button1_Click);
			// 
			// bitti
			// 
			this->bitti->BackColor = System::Drawing::Color::MistyRose;
			this->bitti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->bitti->Location = System::Drawing::Point(614, 619);
			this->bitti->Name = L"bitti";
			this->bitti->Size = System::Drawing::Size(145, 40);
			this->bitti->TabIndex = 94;
			this->bitti->Text = L"Bitti";
			this->bitti->UseVisualStyleBackColor = false;
			this->bitti->Click += gcnew System::EventHandler(this, &game_Page3::bitti_Click);
			// 
			// timer
			// 
			this->timer->AutoSize = true;
			this->timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->timer->Location = System::Drawing::Point(502, 181);
			this->timer->Name = L"timer";
			this->timer->Size = System::Drawing::Size(72, 25);
			this->timer->TabIndex = 93;
			this->timer->Text = L"00 : 00";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label3->Location = System::Drawing::Point(435, 181);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 25);
			this->label3->TabIndex = 92;
			this->label3->Text = L"Sayaç : ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label31->Location = System::Drawing::Point(317, 24);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(98, 50);
			this->label31->TabIndex = 91;
			this->label31->Text = L"Ortak harf\r\nsayýsý:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label30->Location = System::Drawing::Point(22, 49);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(228, 25);
			this->label30->TabIndex = 90;
			this->label30->Text = L"Tahmin edilen kelimeler :";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label27->Location = System::Drawing::Point(625, 206);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(45, 25);
			this->label27->TabIndex = 89;
			this->label27->Text = L"000";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label24->Location = System::Drawing::Point(430, 143);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(71, 25);
			this->label24->TabIndex = 88;
			this->label24->Text = L"Ýpucu :";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MistyRose;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->button2->Location = System::Drawing::Point(587, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 31);
			this->button2->TabIndex = 87;
			this->button2->Text = L"Tamam";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &game_Page3::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::LightCyan;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->textBox1->Location = System::Drawing::Point(512, 140);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(65, 30);
			this->textBox1->TabIndex = 86;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label2->Location = System::Drawing::Point(227, 619);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 25);
			this->label2->TabIndex = 85;
			this->label2->Text = L"000000";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->label1->Location = System::Drawing::Point(22, 619);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 25);
			this->label1->TabIndex = 84;
			this->label1->Text = L"Kalan kelime sayýsý :";
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::LightCyan;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 29;
			this->listBox2->Location = System::Drawing::Point(322, 90);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(62, 497);
			this->listBox2->TabIndex = 83;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::LightCyan;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 29;
			this->listBox1->Location = System::Drawing::Point(26, 90);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(290, 495);
			this->listBox1->TabIndex = 82;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &game_Page3::timer1_Tick);
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::Color::MistyRose;
			this->menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(162)));
			this->menu->Location = System::Drawing::Point(452, 620);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(142, 39);
			this->menu->TabIndex = 81;
			this->menu->Text = L"Ana Menü";
			this->menu->UseVisualStyleBackColor = false;
			this->menu->Click += gcnew System::EventHandler(this, &game_Page3::menu_Click);
			// 
			// game_Page3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::OldLace;
			this->ClientSize = System::Drawing::Size(788, 675);
			this->Controls->Add(this->_L);
			this->Controls->Add(this->_V);
			this->Controls->Add(this->_GG);
			this->Controls->Add(this->_R);
			this->Controls->Add(this->_C);
			this->Controls->Add(this->_K);
			this->Controls->Add(this->_UU);
			this->Controls->Add(this->_O);
			this->Controls->Add(this->_P);
			this->Controls->Add(this->_G);
			this->Controls->Add(this->_B);
			this->Controls->Add(this->_J);
			this->Controls->Add(this->_T);
			this->Controls->Add(this->_II);
			this->Controls->Add(this->_U);
			this->Controls->Add(this->_E);
			this->Controls->Add(this->_F);
			this->Controls->Add(this->_OO);
			this->Controls->Add(this->_N);
			this->Controls->Add(this->_Z);
			this->Controls->Add(this->_A);
			this->Controls->Add(this->_I);
			this->Controls->Add(this->_Y);
			this->Controls->Add(this->_M);
			this->Controls->Add(this->_SS);
			this->Controls->Add(this->_H);
			this->Controls->Add(this->_S);
			this->Controls->Add(this->_D);
			this->Controls->Add(this->_CC);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bitti);
			this->Controls->Add(this->timer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"game_Page3";
			this->Text = L"Kartezyen Çarpým";
			this->Load += gcnew System::EventHandler(this, &game_Page3::game_Page3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bitti_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show(
			gcnew String(minute.ToString()) + ":" + gcnew String(second.ToString()) + " dakikada ," + gcnew String(total.ToString()) + "ms iþlem hýzý ile aradýðýnýz " + gcnew String(_agac->kelime.c_str()) +
			" kelimesini buldunuz." + "Menüye dönmek için Evet'a basýnýz.", "Zom-Bik",
			MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk)
			== System::Windows::Forms::DialogResult::Yes) {
			Application::Restart();
		}
	}
private: System::Void menu_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Ana menüye dönmek isediðinize eminmisiniz?", "Zom-Bik",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::Yes) {
		Application::Restart();
	}
}
private: System::Void game_Page3_Load(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = true;
	_agac = new agac();
	s = new string();
	ss = new string();
	atama = new string();
	atama2 = new string();
	_agac->ekle();
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
		 void sorgulama(string kelime) {//kelime kullanýcýdan alýncak
			 ifstream dosya;
			 bool denet = true;
			 string alinan;
			 string dizim[] = { "araba","etene","ikili","uçucu" };
			 dosya.open("soz.txt");
			 while (dosya >> alinan) {
				 if (kelime == alinan) {

					 break;
					 denet = false;
				 }
			 }
			 dosya.close();
			 if (denet) {
				 for (int i = 0; i < 4; i++) {
					 if (kelime == dizim[i]) {
						 break;
						 denet = false;
					 }
				 }
			 }
			 if (denet) {
				 //cout << "kelime bulunamadý ve eklendi";//hata mesajý ekrana bulunumadý ve eklendi demesi lazým
				 ofstream dosya;
				 dosya.open("soz.txt", ios::app);
				 dosya << kelime;
			 }
		 }
		 void colors(string dizi, bool isGreen) {
			 char word;
			 for (int i = 0; i < dizi.length(); i++) {
				 word = dizi[i];
				 switch (word)
				 {
				 case 'a':
					 if (isGreen) {
						 _A->BackColor = BackColor.Green;
					 }
					 else {
						 _A->BackColor = BackColor.Red;
					 }break;
				 case 'b':
					 if (isGreen) {
						 _B->BackColor = BackColor.Green;
					 }
					 else {
						 _B->BackColor = BackColor.Red;
					 }break;
				 case 'c':
					 if (isGreen) {
						 _C->BackColor = BackColor.Green;
					 }
					 else {
						 _C->BackColor = BackColor.Red;
					 }break;
				 case 'ç':
					 if (isGreen) {
						 _CC->BackColor = BackColor.Green;
					 }
					 else {
						 _CC->BackColor = BackColor.Red;
					 }break;
				 case 'd':
					 if (isGreen) {
						 _D->BackColor = BackColor.Green;
					 }
					 else {
						 _D->BackColor = BackColor.Red;
					 }break;
				 case 'e':
					 if (isGreen) {
						 _E->BackColor = BackColor.Green;
					 }
					 else {
						 _E->BackColor = BackColor.Red;
					 }break;
				 case 'f':
					 if (isGreen) {
						 _F->BackColor = BackColor.Green;
					 }
					 else {
						 _F->BackColor = BackColor.Red;
					 }break;
				 case 'g':
					 if (isGreen) {
						 _G->BackColor = BackColor.Green;
					 }
					 else {
						 _G->BackColor = BackColor.Red;
					 }break;
				 case 'h':
					 if (isGreen) {
						 _H->BackColor = BackColor.Green;
					 }
					 else {
						 _H->BackColor = BackColor.Red;
					 }break;
				 case 'ý':
					 if (isGreen) {
						 _I->BackColor = BackColor.Green;
					 }
					 else {
						 _I->BackColor = BackColor.Red;
					 }break;
				 case 'i':
					 if (isGreen) {
						 _II->BackColor = BackColor.Green;
					 }
					 else {
						 _II->BackColor = BackColor.Red;
					 }break;
				 case 'ð':
					 if (isGreen) {
						 _GG->BackColor = BackColor.Green;
					 }
					 else {
						 _GG->BackColor = BackColor.Red;
					 }break;
				 case 'j':
					 if (isGreen) {
						 _J->BackColor = BackColor.Green;
					 }
					 else {
						 _J->BackColor = BackColor.Red;
					 }break;
				 case 'k':
					 if (isGreen) {
						 _K->BackColor = BackColor.Green;
					 }
					 else {
						 _K->BackColor = BackColor.Red;
					 }break;
				 case 'l':
					 if (isGreen) {
						 _L->BackColor = BackColor.Green;
					 }
					 else {
						 _L->BackColor = BackColor.Red;
					 }break;
				 case 'm':
					 if (isGreen) {
						 _M->BackColor = BackColor.Green;
					 }
					 else {
						 _M->BackColor = BackColor.Red;
					 }break;
				 case 'n':
					 if (isGreen) {
						 _N->BackColor = BackColor.Green;
					 }
					 else {
						 _N->BackColor = BackColor.Red;
					 }break;
				 case 'o':
					 if (isGreen) {
						 _O->BackColor = BackColor.Green;
					 }
					 else {
						 _O->BackColor = BackColor.Red;
					 }break;
				 case 'ö':
					 if (isGreen) {
						 _OO->BackColor = BackColor.Green;
					 }
					 else {
						 _OO->BackColor = BackColor.Red;
					 }break;
				 case 'p':
					 if (isGreen) {
						 _P->BackColor = BackColor.Green;
					 }
					 else {
						 _P->BackColor = BackColor.Red;
					 }break;
				 case 'r':
					 if (isGreen) {
						 _R->BackColor = BackColor.Green;
					 }
					 else {
						 _R->BackColor = BackColor.Red;
					 }break;
				 case 's':
					 if (isGreen) {
						 _S->BackColor = BackColor.Green;
					 }
					 else {
						 _S->BackColor = BackColor.Red;
					 }break;
				 case 'þ':
					 if (isGreen) {
						 _SS->BackColor = BackColor.Green;
					 }
					 else {
						 _SS->BackColor = BackColor.Red;
					 }break;
				 case 't':
					 if (isGreen) {
						 _T->BackColor = BackColor.Green;
					 }
					 else {
						 _T->BackColor = BackColor.Red;
					 }break;
				 case 'u':
					 if (isGreen) {
						 _U->BackColor = BackColor.Green;
					 }
					 else {
						 _U->BackColor = BackColor.Red;
					 }break;
				 case 'ü':
					 if (isGreen) {
						 _UU->BackColor = BackColor.Green;
					 }
					 else {
						 _UU->BackColor = BackColor.Red;
					 }break;
				 case 'v':
					 if (isGreen) {
						 _V->BackColor = BackColor.Green;
					 }
					 else {
						 _V->BackColor = BackColor.Red;
					 }break;
				 case 'y':
					 if (isGreen) {
						 _Y->BackColor = BackColor.Green;
					 }
					 else {
						 _Y->BackColor = BackColor.Red;
					 }break;
				 case 'z':
					 if (isGreen) {
						 _Z->BackColor = BackColor.Green;
					 }
					 else {
						 _Z->BackColor = BackColor.Red;
					 }break;
				 default:
					 break;
				 }
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	start = clock();
		atama2->assign("");
		_agac->gezinme(_agac->kok);
		for (int i = 0; _agac->silinecek->kelimeler[i] != '\0'; i++) {
			if (_agac->silinecek->kelimeler[i] == ' ') {
				if (*atama != "" && *atama2 != "") {
					atama2->append(" ");
					atama2->append(atama->c_str());
					atama->assign("");
				}
				else if (*atama != "" && *atama2 == "") {
					atama2->append(atama->c_str());
					atama->assign("");
				}
				else {
					atama->assign("");
				}
				continue;
			}
			string degisken;
			degisken += _agac->silinecek->kelimeler[i];
			atama->append(degisken);
			if (*atama == _agac->kelime) {
				atama->assign("");
			}
			else if (_agac->silinecek->kelimeler[i + 1] == '\0') {
				atama2->append(atama->c_str());
				atama->assign("");
				break;
			}
		}
		_agac->silinecek->kelimeler.assign(atama2->c_str());
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;
	cout << count + 1 << ". " << _agac->kelime << "  " << _agac->total << " <" << duration << ">" << " :";//buradaki duration süre ,count adým sayýsýný,a.kelime ise tahmini veriyor a.total ise toplam bulunnan kelimeyi ikbal bunlarý arayüzddeki yerine koycaz kutucuklarýna cout yerine
	listBox1->Items->Add((count + 1) + "." + gcnew String(_agac->kelime.c_str()));
	label2->Text = gcnew String(_agac->total.ToString());
	label27->Text = gcnew String((duration + duration2).ToString());
	total = total + duration + duration2;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "") {
		MessageBox::Show("Lütfen istenilen boþluðu doldurunuz");
	}
	else {

		tahmin2 = stoi(toStandardString(textBox1->Text));
		listBox2->Items->Add(tahmin2);
		_agac->total = 0;
		//cin >> tahmin2; // burda cin yerine tahmin2 yi alcak
		start = clock();
		cout << endl;//cout kalkkýcak
		_agac->kelime_analiz2(_agac->kelime, tahmin2);
		if (tahmin2 != 0) _agac->mastermind2(_agac->kok, _agac->kelime, tahmin2);

		//colors(_agac->silinecek->harf, false);
		_agac->kelime = "";
		count++;
		colors(_agac->kesin, true);
		colors(_agac->kesiny, false);
		duration2 = (clock() - start) / (double)CLOCKS_PER_SEC;

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
};
}
