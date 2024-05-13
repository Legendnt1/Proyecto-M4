#pragma once
#include"Relacion.h"
#include"Funciones.h"
//librerias
#include <fstream>
#include <cliext/algorithm>

namespace Proyecto {

	using namespace System;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		int contador = 0;
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::NumericUpDown^ nudCantidad;
	private: System::Windows::Forms::Label^ lblNumeroElementos;
	private: System::Windows::Forms::Label^ lblConjuntoA;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Label^ lblRelacionS;
	private: System::Windows::Forms::Label^ lblS;
	private: System::Windows::Forms::TextBox^ txtRelacionS;
	private: System::Windows::Forms::Label^ lblMatrizS;
	private: System::Windows::Forms::TextBox^ txt_i1;
	private: System::Windows::Forms::TextBox^ txt_i2;
	private: System::Windows::Forms::TextBox^ txt_i3;
	private: System::Windows::Forms::TextBox^ txt_i4;
	private: System::Windows::Forms::TextBox^ txt_i5;
	private: System::Windows::Forms::TextBox^ txt_i6;
	private: System::Windows::Forms::TextBox^ txt_i7;
	private: System::Windows::Forms::TextBox^ txt_j1;
	private: System::Windows::Forms::TextBox^ txt_j2;
	private: System::Windows::Forms::TextBox^ txt_j3;
	private: System::Windows::Forms::TextBox^ txt_j4;
	private: System::Windows::Forms::TextBox^ txt_j5;
	private: System::Windows::Forms::TextBox^ txt_j6;
	private: System::Windows::Forms::TextBox^ txt_j7;
	private: System::Windows::Forms::TextBox^ txt_i1j7;
	private: System::Windows::Forms::TextBox^ txt_i1j6;
	private: System::Windows::Forms::TextBox^ txt_i1j5;
	private: System::Windows::Forms::TextBox^ txt_i1j4;
	private: System::Windows::Forms::TextBox^ txt_i1j3;
	private: System::Windows::Forms::TextBox^ txt_i1j2;
	private: System::Windows::Forms::TextBox^ txt_i1j1;
	private: System::Windows::Forms::TextBox^ txt_i3j7;
	private: System::Windows::Forms::TextBox^ txt_i3j6;
	private: System::Windows::Forms::TextBox^ txt_i3j5;
	private: System::Windows::Forms::TextBox^ txt_i3j4;
	private: System::Windows::Forms::TextBox^ txt_i3j3;
	private: System::Windows::Forms::TextBox^ txt_i3j2;
	private: System::Windows::Forms::TextBox^ txt_i3j1;
	private: System::Windows::Forms::TextBox^ txt_i2j7;
	private: System::Windows::Forms::TextBox^ txt_i2j6;
	private: System::Windows::Forms::TextBox^ txt_i2j5;
	private: System::Windows::Forms::TextBox^ txt_i2j4;
	private: System::Windows::Forms::TextBox^ txt_i2j3;
	private: System::Windows::Forms::TextBox^ txt_i2j2;
	private: System::Windows::Forms::TextBox^ txt_i2j1;
	private: System::Windows::Forms::TextBox^ txt_i7j7;
	private: System::Windows::Forms::TextBox^ txt_i7j6;
	private: System::Windows::Forms::TextBox^ txt_i7j5;
	private: System::Windows::Forms::TextBox^ txt_i7j4;
	private: System::Windows::Forms::TextBox^ txt_i7j3;
	private: System::Windows::Forms::TextBox^ txt_i7j2;
	private: System::Windows::Forms::TextBox^ txt_i7j1;
	private: System::Windows::Forms::TextBox^ txt_i6j7;
	private: System::Windows::Forms::TextBox^ txt_i6j6;
	private: System::Windows::Forms::TextBox^ txt_i6j5;
	private: System::Windows::Forms::TextBox^ txt_i6j4;
	private: System::Windows::Forms::TextBox^ txt_i6j3;
	private: System::Windows::Forms::TextBox^ txt_i6j2;
	private: System::Windows::Forms::TextBox^ txt_i6j1;
	private: System::Windows::Forms::TextBox^ txt_i5j7;
	private: System::Windows::Forms::TextBox^ txt_i5j6;
	private: System::Windows::Forms::TextBox^ txt_i5j5;
	private: System::Windows::Forms::TextBox^ txt_i5j4;
	private: System::Windows::Forms::TextBox^ txt_i5j3;
	private: System::Windows::Forms::TextBox^ txt_i5j2;
	private: System::Windows::Forms::TextBox^ txt_i5j1;
	private: System::Windows::Forms::TextBox^ txt_i4j7;
	private: System::Windows::Forms::TextBox^ txt_i4j6;
	private: System::Windows::Forms::TextBox^ txt_i4j5;
	private: System::Windows::Forms::TextBox^ txt_i4j4;
	private: System::Windows::Forms::TextBox^ txt_i4j3;
	private: System::Windows::Forms::TextBox^ txt_i4j2;
	private: System::Windows::Forms::TextBox^ txt_i4j1;
	private: System::Windows::Forms::Label^ lblDiagramaHasse;
	private: System::Windows::Forms::Label^ lblReflexivo;
	private: System::Windows::Forms::Label^ lblTransitivo;
	private: System::Windows::Forms::Button^ btnCalcular;
	private: System::Windows::Forms::Label^ lblAntisimetrico;
	private: System::Windows::Forms::Label^ lblOrdenParcial;
	private: System::Windows::Forms::TextBox^ txtReflexivo;
	private: System::Windows::Forms::TextBox^ txtTranstivo;
	private: System::Windows::Forms::TextBox^ txtOrdenParcial;
	private: System::Windows::Forms::TextBox^ txtAntisimetrico;
	private: System::Windows::Forms::Button^ btnGenerar;
	private: System::Windows::Forms::Label^ lblGenerarElementos;
	private: System::Windows::Forms::Label^ lblIngresarElementos;
	private: System::Windows::Forms::Label^ lblElementoRepetido;
	private: System::Windows::Forms::ComboBox^ cbxElementos;
	private: System::Windows::Forms::Label^ lblA;
	private: System::Windows::Forms::TextBox^ txtA;
    private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnGenerarHasse;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->nudCantidad = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblNumeroElementos = (gcnew System::Windows::Forms::Label());
			this->lblConjuntoA = (gcnew System::Windows::Forms::Label());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->lblRelacionS = (gcnew System::Windows::Forms::Label());
			this->lblS = (gcnew System::Windows::Forms::Label());
			this->txtRelacionS = (gcnew System::Windows::Forms::TextBox());
			this->lblMatrizS = (gcnew System::Windows::Forms::Label());
			this->txt_i1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i6 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i7 = (gcnew System::Windows::Forms::TextBox());
			this->txt_j1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_j2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_j3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_j4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_j5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_j6 = (gcnew System::Windows::Forms::TextBox());
			this->txt_j7 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i1j7 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i1j6 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i1j5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i1j4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i1j3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i1j2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i1j1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i3j7 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i3j6 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i3j5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i3j4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i3j3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i3j2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i3j1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i2j7 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i2j6 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i2j5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i2j4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i2j3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i2j2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i2j1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i7j7 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i7j6 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i7j5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i7j4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i7j3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i7j2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i7j1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i6j7 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i6j6 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i6j5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i6j4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i6j3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i6j2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i6j1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i5j7 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i5j6 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i5j5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i5j4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i5j3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i5j2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i5j1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i4j7 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i4j6 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i4j5 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i4j4 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i4j3 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i4j2 = (gcnew System::Windows::Forms::TextBox());
			this->txt_i4j1 = (gcnew System::Windows::Forms::TextBox());
			this->lblDiagramaHasse = (gcnew System::Windows::Forms::Label());
			this->lblReflexivo = (gcnew System::Windows::Forms::Label());
			this->lblTransitivo = (gcnew System::Windows::Forms::Label());
			this->btnCalcular = (gcnew System::Windows::Forms::Button());
			this->lblAntisimetrico = (gcnew System::Windows::Forms::Label());
			this->lblOrdenParcial = (gcnew System::Windows::Forms::Label());
			this->txtReflexivo = (gcnew System::Windows::Forms::TextBox());
			this->txtTranstivo = (gcnew System::Windows::Forms::TextBox());
			this->txtOrdenParcial = (gcnew System::Windows::Forms::TextBox());
			this->txtAntisimetrico = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->lblGenerarElementos = (gcnew System::Windows::Forms::Label());
			this->lblIngresarElementos = (gcnew System::Windows::Forms::Label());
			this->lblElementoRepetido = (gcnew System::Windows::Forms::Label());
			this->cbxElementos = (gcnew System::Windows::Forms::ComboBox());
			this->lblA = (gcnew System::Windows::Forms::Label());
			this->txtA = (gcnew System::Windows::Forms::TextBox());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnGenerarHasse = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCantidad))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->BackColor = System::Drawing::Color::Transparent;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->ForeColor = System::Drawing::Color::Black;
			this->lblTitulo->Location = System::Drawing::Point(402, 9);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(312, 55);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"Orden Parcial";
			// 
			// nudCantidad
			// 
			this->nudCantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudCantidad->Location = System::Drawing::Point(270, 150);
			this->nudCantidad->Name = L"nudCantidad";
			this->nudCantidad->Size = System::Drawing::Size(120, 26);
			this->nudCantidad->TabIndex = 1;
			this->nudCantidad->ValueChanged += gcnew System::EventHandler(this, &MyForm::nudCantidad_ValueChanged);
			// 
			// lblNumeroElementos
			// 
			this->lblNumeroElementos->AutoSize = true;
			this->lblNumeroElementos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNumeroElementos->ForeColor = System::Drawing::Color::Transparent;
			this->lblNumeroElementos->Location = System::Drawing::Point(73, 151);
			this->lblNumeroElementos->Name = L"lblNumeroElementos";
			this->lblNumeroElementos->Size = System::Drawing::Size(191, 22);
			this->lblNumeroElementos->TabIndex = 2;
			this->lblNumeroElementos->Text = L"Numero de elementos:";
			// 
			// lblConjuntoA
			// 
			this->lblConjuntoA->AutoSize = true;
			this->lblConjuntoA->BackColor = System::Drawing::Color::Transparent;
			this->lblConjuntoA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblConjuntoA->ForeColor = System::Drawing::Color::Black;
			this->lblConjuntoA->Location = System::Drawing::Point(125, 70);
			this->lblConjuntoA->Name = L"lblConjuntoA";
			this->lblConjuntoA->Size = System::Drawing::Size(261, 55);
			this->lblConjuntoA->TabIndex = 3;
			this->lblConjuntoA->Text = L"Conjunto A";
			// 
			// btnAgregar
			// 
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Location = System::Drawing::Point(253, 215);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(75, 34);
			this->btnAgregar->TabIndex = 6;
			this->btnAgregar->Text = L"Agregar";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &MyForm::btnAgregar_Click);
			// 
			// lblRelacionS
			// 
			this->lblRelacionS->AutoSize = true;
			this->lblRelacionS->BackColor = System::Drawing::Color::Transparent;
			this->lblRelacionS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRelacionS->ForeColor = System::Drawing::Color::Black;
			this->lblRelacionS->Location = System::Drawing::Point(745, 70);
			this->lblRelacionS->Name = L"lblRelacionS";
			this->lblRelacionS->Size = System::Drawing::Size(240, 55);
			this->lblRelacionS->TabIndex = 7;
			this->lblRelacionS->Text = L"Relación S";
			// 
			// lblS
			// 
			this->lblS->AutoSize = true;
			this->lblS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblS->ForeColor = System::Drawing::Color::Transparent;
			this->lblS->Location = System::Drawing::Point(689, 168);
			this->lblS->Name = L"lblS";
			this->lblS->Size = System::Drawing::Size(26, 22);
			this->lblS->TabIndex = 10;
			this->lblS->Text = L"S:";
			// 
			// txtRelacionS
			// 
			this->txtRelacionS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRelacionS->Location = System::Drawing::Point(721, 126);
			this->txtRelacionS->Multiline = true;
			this->txtRelacionS->Name = L"txtRelacionS";
			this->txtRelacionS->ReadOnly = true;
			this->txtRelacionS->Size = System::Drawing::Size(339, 103);
			this->txtRelacionS->TabIndex = 11;
			// 
			// lblMatrizS
			// 
			this->lblMatrizS->AutoSize = true;
			this->lblMatrizS->BackColor = System::Drawing::Color::Transparent;
			this->lblMatrizS->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMatrizS->ForeColor = System::Drawing::Color::Black;
			this->lblMatrizS->Location = System::Drawing::Point(155, 333);
			this->lblMatrizS->Name = L"lblMatrizS";
			this->lblMatrizS->Size = System::Drawing::Size(203, 55);
			this->lblMatrizS->TabIndex = 12;
			this->lblMatrizS->Text = L"Matriz S";
			// 
			// txt_i1
			// 
			this->txt_i1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i1->Location = System::Drawing::Point(114, 433);
			this->txt_i1->Name = L"txt_i1";
			this->txt_i1->ReadOnly = true;
			this->txt_i1->Size = System::Drawing::Size(28, 26);
			this->txt_i1->TabIndex = 13;
			// 
			// txt_i2
			// 
			this->txt_i2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i2->Location = System::Drawing::Point(114, 465);
			this->txt_i2->Name = L"txt_i2";
			this->txt_i2->ReadOnly = true;
			this->txt_i2->Size = System::Drawing::Size(28, 26);
			this->txt_i2->TabIndex = 14;
			// 
			// txt_i3
			// 
			this->txt_i3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i3->Location = System::Drawing::Point(114, 497);
			this->txt_i3->Name = L"txt_i3";
			this->txt_i3->ReadOnly = true;
			this->txt_i3->Size = System::Drawing::Size(28, 26);
			this->txt_i3->TabIndex = 15;
			// 
			// txt_i4
			// 
			this->txt_i4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i4->Location = System::Drawing::Point(114, 529);
			this->txt_i4->Name = L"txt_i4";
			this->txt_i4->ReadOnly = true;
			this->txt_i4->Size = System::Drawing::Size(28, 26);
			this->txt_i4->TabIndex = 16;
			// 
			// txt_i5
			// 
			this->txt_i5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i5->Location = System::Drawing::Point(114, 561);
			this->txt_i5->Name = L"txt_i5";
			this->txt_i5->ReadOnly = true;
			this->txt_i5->Size = System::Drawing::Size(28, 26);
			this->txt_i5->TabIndex = 17;
			this->txt_i5->Visible = false;
			// 
			// txt_i6
			// 
			this->txt_i6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i6->Location = System::Drawing::Point(114, 593);
			this->txt_i6->Name = L"txt_i6";
			this->txt_i6->ReadOnly = true;
			this->txt_i6->Size = System::Drawing::Size(28, 26);
			this->txt_i6->TabIndex = 18;
			this->txt_i6->Visible = false;
			// 
			// txt_i7
			// 
			this->txt_i7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i7->Location = System::Drawing::Point(114, 625);
			this->txt_i7->Name = L"txt_i7";
			this->txt_i7->ReadOnly = true;
			this->txt_i7->Size = System::Drawing::Size(28, 26);
			this->txt_i7->TabIndex = 19;
			this->txt_i7->Visible = false;
			// 
			// txt_j1
			// 
			this->txt_j1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_j1->Location = System::Drawing::Point(148, 401);
			this->txt_j1->Name = L"txt_j1";
			this->txt_j1->ReadOnly = true;
			this->txt_j1->Size = System::Drawing::Size(28, 26);
			this->txt_j1->TabIndex = 20;
			// 
			// txt_j2
			// 
			this->txt_j2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_j2->Location = System::Drawing::Point(182, 401);
			this->txt_j2->Name = L"txt_j2";
			this->txt_j2->ReadOnly = true;
			this->txt_j2->Size = System::Drawing::Size(28, 26);
			this->txt_j2->TabIndex = 21;
			// 
			// txt_j3
			// 
			this->txt_j3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_j3->Location = System::Drawing::Point(216, 401);
			this->txt_j3->Name = L"txt_j3";
			this->txt_j3->ReadOnly = true;
			this->txt_j3->Size = System::Drawing::Size(28, 26);
			this->txt_j3->TabIndex = 22;
			// 
			// txt_j4
			// 
			this->txt_j4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_j4->Location = System::Drawing::Point(250, 401);
			this->txt_j4->Name = L"txt_j4";
			this->txt_j4->ReadOnly = true;
			this->txt_j4->Size = System::Drawing::Size(28, 26);
			this->txt_j4->TabIndex = 23;
			// 
			// txt_j5
			// 
			this->txt_j5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_j5->Location = System::Drawing::Point(284, 401);
			this->txt_j5->Name = L"txt_j5";
			this->txt_j5->ReadOnly = true;
			this->txt_j5->Size = System::Drawing::Size(28, 26);
			this->txt_j5->TabIndex = 24;
			this->txt_j5->Visible = false;
			// 
			// txt_j6
			// 
			this->txt_j6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_j6->Location = System::Drawing::Point(318, 401);
			this->txt_j6->Name = L"txt_j6";
			this->txt_j6->ReadOnly = true;
			this->txt_j6->Size = System::Drawing::Size(28, 26);
			this->txt_j6->TabIndex = 25;
			this->txt_j6->Visible = false;
			// 
			// txt_j7
			// 
			this->txt_j7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_j7->Location = System::Drawing::Point(351, 401);
			this->txt_j7->Name = L"txt_j7";
			this->txt_j7->ReadOnly = true;
			this->txt_j7->Size = System::Drawing::Size(28, 26);
			this->txt_j7->TabIndex = 26;
			this->txt_j7->Visible = false;
			// 
			// txt_i1j7
			// 
			this->txt_i1j7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i1j7->Location = System::Drawing::Point(351, 433);
			this->txt_i1j7->Name = L"txt_i1j7";
			this->txt_i1j7->ReadOnly = true;
			this->txt_i1j7->Size = System::Drawing::Size(28, 26);
			this->txt_i1j7->TabIndex = 33;
			this->txt_i1j7->Visible = false;
			// 
			// txt_i1j6
			// 
			this->txt_i1j6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i1j6->Location = System::Drawing::Point(317, 433);
			this->txt_i1j6->Name = L"txt_i1j6";
			this->txt_i1j6->ReadOnly = true;
			this->txt_i1j6->Size = System::Drawing::Size(28, 26);
			this->txt_i1j6->TabIndex = 32;
			this->txt_i1j6->Visible = false;
			// 
			// txt_i1j5
			// 
			this->txt_i1j5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i1j5->Location = System::Drawing::Point(284, 433);
			this->txt_i1j5->Name = L"txt_i1j5";
			this->txt_i1j5->ReadOnly = true;
			this->txt_i1j5->Size = System::Drawing::Size(28, 26);
			this->txt_i1j5->TabIndex = 31;
			this->txt_i1j5->Visible = false;
			// 
			// txt_i1j4
			// 
			this->txt_i1j4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i1j4->Location = System::Drawing::Point(250, 433);
			this->txt_i1j4->Name = L"txt_i1j4";
			this->txt_i1j4->ReadOnly = true;
			this->txt_i1j4->Size = System::Drawing::Size(28, 26);
			this->txt_i1j4->TabIndex = 30;
			// 
			// txt_i1j3
			// 
			this->txt_i1j3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i1j3->Location = System::Drawing::Point(216, 433);
			this->txt_i1j3->Name = L"txt_i1j3";
			this->txt_i1j3->ReadOnly = true;
			this->txt_i1j3->Size = System::Drawing::Size(28, 26);
			this->txt_i1j3->TabIndex = 29;
			// 
			// txt_i1j2
			// 
			this->txt_i1j2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i1j2->Location = System::Drawing::Point(182, 433);
			this->txt_i1j2->Name = L"txt_i1j2";
			this->txt_i1j2->ReadOnly = true;
			this->txt_i1j2->Size = System::Drawing::Size(28, 26);
			this->txt_i1j2->TabIndex = 28;
			// 
			// txt_i1j1
			// 
			this->txt_i1j1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i1j1->Location = System::Drawing::Point(148, 433);
			this->txt_i1j1->Name = L"txt_i1j1";
			this->txt_i1j1->ReadOnly = true;
			this->txt_i1j1->Size = System::Drawing::Size(28, 26);
			this->txt_i1j1->TabIndex = 27;
			// 
			// txt_i3j7
			// 
			this->txt_i3j7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i3j7->Location = System::Drawing::Point(351, 497);
			this->txt_i3j7->Name = L"txt_i3j7";
			this->txt_i3j7->ReadOnly = true;
			this->txt_i3j7->Size = System::Drawing::Size(28, 26);
			this->txt_i3j7->TabIndex = 47;
			this->txt_i3j7->Visible = false;
			// 
			// txt_i3j6
			// 
			this->txt_i3j6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i3j6->Location = System::Drawing::Point(317, 497);
			this->txt_i3j6->Name = L"txt_i3j6";
			this->txt_i3j6->ReadOnly = true;
			this->txt_i3j6->Size = System::Drawing::Size(28, 26);
			this->txt_i3j6->TabIndex = 46;
			this->txt_i3j6->Visible = false;
			// 
			// txt_i3j5
			// 
			this->txt_i3j5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i3j5->Location = System::Drawing::Point(283, 497);
			this->txt_i3j5->Name = L"txt_i3j5";
			this->txt_i3j5->ReadOnly = true;
			this->txt_i3j5->Size = System::Drawing::Size(28, 26);
			this->txt_i3j5->TabIndex = 45;
			this->txt_i3j5->Visible = false;
			// 
			// txt_i3j4
			// 
			this->txt_i3j4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i3j4->Location = System::Drawing::Point(250, 497);
			this->txt_i3j4->Name = L"txt_i3j4";
			this->txt_i3j4->ReadOnly = true;
			this->txt_i3j4->Size = System::Drawing::Size(28, 26);
			this->txt_i3j4->TabIndex = 44;
			// 
			// txt_i3j3
			// 
			this->txt_i3j3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i3j3->Location = System::Drawing::Point(216, 497);
			this->txt_i3j3->Name = L"txt_i3j3";
			this->txt_i3j3->ReadOnly = true;
			this->txt_i3j3->Size = System::Drawing::Size(28, 26);
			this->txt_i3j3->TabIndex = 43;
			// 
			// txt_i3j2
			// 
			this->txt_i3j2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i3j2->Location = System::Drawing::Point(182, 497);
			this->txt_i3j2->Name = L"txt_i3j2";
			this->txt_i3j2->ReadOnly = true;
			this->txt_i3j2->Size = System::Drawing::Size(28, 26);
			this->txt_i3j2->TabIndex = 42;
			// 
			// txt_i3j1
			// 
			this->txt_i3j1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i3j1->Location = System::Drawing::Point(148, 497);
			this->txt_i3j1->Name = L"txt_i3j1";
			this->txt_i3j1->ReadOnly = true;
			this->txt_i3j1->Size = System::Drawing::Size(28, 26);
			this->txt_i3j1->TabIndex = 41;
			// 
			// txt_i2j7
			// 
			this->txt_i2j7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i2j7->Location = System::Drawing::Point(351, 465);
			this->txt_i2j7->Name = L"txt_i2j7";
			this->txt_i2j7->ReadOnly = true;
			this->txt_i2j7->Size = System::Drawing::Size(28, 26);
			this->txt_i2j7->TabIndex = 40;
			this->txt_i2j7->Visible = false;
			// 
			// txt_i2j6
			// 
			this->txt_i2j6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i2j6->Location = System::Drawing::Point(317, 465);
			this->txt_i2j6->Name = L"txt_i2j6";
			this->txt_i2j6->ReadOnly = true;
			this->txt_i2j6->Size = System::Drawing::Size(28, 26);
			this->txt_i2j6->TabIndex = 39;
			this->txt_i2j6->Visible = false;
			// 
			// txt_i2j5
			// 
			this->txt_i2j5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i2j5->Location = System::Drawing::Point(284, 465);
			this->txt_i2j5->Name = L"txt_i2j5";
			this->txt_i2j5->ReadOnly = true;
			this->txt_i2j5->Size = System::Drawing::Size(28, 26);
			this->txt_i2j5->TabIndex = 38;
			this->txt_i2j5->Visible = false;
			// 
			// txt_i2j4
			// 
			this->txt_i2j4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i2j4->Location = System::Drawing::Point(250, 465);
			this->txt_i2j4->Name = L"txt_i2j4";
			this->txt_i2j4->ReadOnly = true;
			this->txt_i2j4->Size = System::Drawing::Size(28, 26);
			this->txt_i2j4->TabIndex = 37;
			// 
			// txt_i2j3
			// 
			this->txt_i2j3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i2j3->Location = System::Drawing::Point(216, 465);
			this->txt_i2j3->Name = L"txt_i2j3";
			this->txt_i2j3->ReadOnly = true;
			this->txt_i2j3->Size = System::Drawing::Size(28, 26);
			this->txt_i2j3->TabIndex = 36;
			// 
			// txt_i2j2
			// 
			this->txt_i2j2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i2j2->Location = System::Drawing::Point(182, 465);
			this->txt_i2j2->Name = L"txt_i2j2";
			this->txt_i2j2->ReadOnly = true;
			this->txt_i2j2->Size = System::Drawing::Size(28, 26);
			this->txt_i2j2->TabIndex = 35;
			// 
			// txt_i2j1
			// 
			this->txt_i2j1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i2j1->Location = System::Drawing::Point(148, 465);
			this->txt_i2j1->Name = L"txt_i2j1";
			this->txt_i2j1->ReadOnly = true;
			this->txt_i2j1->Size = System::Drawing::Size(28, 26);
			this->txt_i2j1->TabIndex = 34;
			// 
			// txt_i7j7
			// 
			this->txt_i7j7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i7j7->Location = System::Drawing::Point(351, 623);
			this->txt_i7j7->Name = L"txt_i7j7";
			this->txt_i7j7->ReadOnly = true;
			this->txt_i7j7->Size = System::Drawing::Size(28, 26);
			this->txt_i7j7->TabIndex = 75;
			this->txt_i7j7->Visible = false;
			// 
			// txt_i7j6
			// 
			this->txt_i7j6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i7j6->Location = System::Drawing::Point(317, 625);
			this->txt_i7j6->Name = L"txt_i7j6";
			this->txt_i7j6->ReadOnly = true;
			this->txt_i7j6->Size = System::Drawing::Size(28, 26);
			this->txt_i7j6->TabIndex = 74;
			this->txt_i7j6->Visible = false;
			// 
			// txt_i7j5
			// 
			this->txt_i7j5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i7j5->Location = System::Drawing::Point(284, 625);
			this->txt_i7j5->Name = L"txt_i7j5";
			this->txt_i7j5->ReadOnly = true;
			this->txt_i7j5->Size = System::Drawing::Size(28, 26);
			this->txt_i7j5->TabIndex = 73;
			this->txt_i7j5->Visible = false;
			// 
			// txt_i7j4
			// 
			this->txt_i7j4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i7j4->Location = System::Drawing::Point(249, 623);
			this->txt_i7j4->Name = L"txt_i7j4";
			this->txt_i7j4->ReadOnly = true;
			this->txt_i7j4->Size = System::Drawing::Size(28, 26);
			this->txt_i7j4->TabIndex = 72;
			this->txt_i7j4->Visible = false;
			// 
			// txt_i7j3
			// 
			this->txt_i7j3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i7j3->Location = System::Drawing::Point(216, 623);
			this->txt_i7j3->Name = L"txt_i7j3";
			this->txt_i7j3->ReadOnly = true;
			this->txt_i7j3->Size = System::Drawing::Size(28, 26);
			this->txt_i7j3->TabIndex = 71;
			this->txt_i7j3->Visible = false;
			// 
			// txt_i7j2
			// 
			this->txt_i7j2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i7j2->Location = System::Drawing::Point(182, 625);
			this->txt_i7j2->Name = L"txt_i7j2";
			this->txt_i7j2->ReadOnly = true;
			this->txt_i7j2->Size = System::Drawing::Size(28, 26);
			this->txt_i7j2->TabIndex = 70;
			this->txt_i7j2->Visible = false;
			// 
			// txt_i7j1
			// 
			this->txt_i7j1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i7j1->Location = System::Drawing::Point(147, 625);
			this->txt_i7j1->Name = L"txt_i7j1";
			this->txt_i7j1->ReadOnly = true;
			this->txt_i7j1->Size = System::Drawing::Size(28, 26);
			this->txt_i7j1->TabIndex = 69;
			this->txt_i7j1->Visible = false;
			// 
			// txt_i6j7
			// 
			this->txt_i6j7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i6j7->Location = System::Drawing::Point(351, 593);
			this->txt_i6j7->Name = L"txt_i6j7";
			this->txt_i6j7->ReadOnly = true;
			this->txt_i6j7->Size = System::Drawing::Size(28, 26);
			this->txt_i6j7->TabIndex = 68;
			this->txt_i6j7->Visible = false;
			// 
			// txt_i6j6
			// 
			this->txt_i6j6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i6j6->Location = System::Drawing::Point(318, 593);
			this->txt_i6j6->Name = L"txt_i6j6";
			this->txt_i6j6->ReadOnly = true;
			this->txt_i6j6->Size = System::Drawing::Size(28, 26);
			this->txt_i6j6->TabIndex = 67;
			this->txt_i6j6->Visible = false;
			// 
			// txt_i6j5
			// 
			this->txt_i6j5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i6j5->Location = System::Drawing::Point(283, 593);
			this->txt_i6j5->Name = L"txt_i6j5";
			this->txt_i6j5->ReadOnly = true;
			this->txt_i6j5->Size = System::Drawing::Size(28, 26);
			this->txt_i6j5->TabIndex = 66;
			this->txt_i6j5->Visible = false;
			// 
			// txt_i6j4
			// 
			this->txt_i6j4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i6j4->Location = System::Drawing::Point(249, 593);
			this->txt_i6j4->Name = L"txt_i6j4";
			this->txt_i6j4->ReadOnly = true;
			this->txt_i6j4->Size = System::Drawing::Size(28, 26);
			this->txt_i6j4->TabIndex = 65;
			this->txt_i6j4->Visible = false;
			// 
			// txt_i6j3
			// 
			this->txt_i6j3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i6j3->Location = System::Drawing::Point(215, 593);
			this->txt_i6j3->Name = L"txt_i6j3";
			this->txt_i6j3->ReadOnly = true;
			this->txt_i6j3->Size = System::Drawing::Size(28, 26);
			this->txt_i6j3->TabIndex = 64;
			this->txt_i6j3->Visible = false;
			// 
			// txt_i6j2
			// 
			this->txt_i6j2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i6j2->Location = System::Drawing::Point(181, 593);
			this->txt_i6j2->Name = L"txt_i6j2";
			this->txt_i6j2->ReadOnly = true;
			this->txt_i6j2->Size = System::Drawing::Size(28, 26);
			this->txt_i6j2->TabIndex = 63;
			this->txt_i6j2->Visible = false;
			// 
			// txt_i6j1
			// 
			this->txt_i6j1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i6j1->Location = System::Drawing::Point(147, 593);
			this->txt_i6j1->Name = L"txt_i6j1";
			this->txt_i6j1->ReadOnly = true;
			this->txt_i6j1->Size = System::Drawing::Size(28, 26);
			this->txt_i6j1->TabIndex = 62;
			this->txt_i6j1->Visible = false;
			// 
			// txt_i5j7
			// 
			this->txt_i5j7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i5j7->Location = System::Drawing::Point(351, 561);
			this->txt_i5j7->Name = L"txt_i5j7";
			this->txt_i5j7->ReadOnly = true;
			this->txt_i5j7->Size = System::Drawing::Size(28, 26);
			this->txt_i5j7->TabIndex = 61;
			this->txt_i5j7->Visible = false;
			// 
			// txt_i5j6
			// 
			this->txt_i5j6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i5j6->Location = System::Drawing::Point(318, 561);
			this->txt_i5j6->Name = L"txt_i5j6";
			this->txt_i5j6->ReadOnly = true;
			this->txt_i5j6->Size = System::Drawing::Size(28, 26);
			this->txt_i5j6->TabIndex = 60;
			this->txt_i5j6->Visible = false;
			// 
			// txt_i5j5
			// 
			this->txt_i5j5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i5j5->Location = System::Drawing::Point(283, 561);
			this->txt_i5j5->Name = L"txt_i5j5";
			this->txt_i5j5->ReadOnly = true;
			this->txt_i5j5->Size = System::Drawing::Size(28, 26);
			this->txt_i5j5->TabIndex = 59;
			this->txt_i5j5->Visible = false;
			// 
			// txt_i5j4
			// 
			this->txt_i5j4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i5j4->Location = System::Drawing::Point(249, 561);
			this->txt_i5j4->Name = L"txt_i5j4";
			this->txt_i5j4->ReadOnly = true;
			this->txt_i5j4->Size = System::Drawing::Size(28, 26);
			this->txt_i5j4->TabIndex = 58;
			this->txt_i5j4->Visible = false;
			// 
			// txt_i5j3
			// 
			this->txt_i5j3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i5j3->Location = System::Drawing::Point(216, 561);
			this->txt_i5j3->Name = L"txt_i5j3";
			this->txt_i5j3->ReadOnly = true;
			this->txt_i5j3->Size = System::Drawing::Size(28, 26);
			this->txt_i5j3->TabIndex = 57;
			this->txt_i5j3->Visible = false;
			// 
			// txt_i5j2
			// 
			this->txt_i5j2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i5j2->Location = System::Drawing::Point(182, 561);
			this->txt_i5j2->Name = L"txt_i5j2";
			this->txt_i5j2->ReadOnly = true;
			this->txt_i5j2->Size = System::Drawing::Size(28, 26);
			this->txt_i5j2->TabIndex = 56;
			this->txt_i5j2->Visible = false;
			// 
			// txt_i5j1
			// 
			this->txt_i5j1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i5j1->Location = System::Drawing::Point(148, 561);
			this->txt_i5j1->Name = L"txt_i5j1";
			this->txt_i5j1->ReadOnly = true;
			this->txt_i5j1->Size = System::Drawing::Size(28, 26);
			this->txt_i5j1->TabIndex = 55;
			this->txt_i5j1->Visible = false;
			// 
			// txt_i4j7
			// 
			this->txt_i4j7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i4j7->Location = System::Drawing::Point(351, 529);
			this->txt_i4j7->Name = L"txt_i4j7";
			this->txt_i4j7->ReadOnly = true;
			this->txt_i4j7->Size = System::Drawing::Size(28, 26);
			this->txt_i4j7->TabIndex = 54;
			this->txt_i4j7->Visible = false;
			// 
			// txt_i4j6
			// 
			this->txt_i4j6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i4j6->Location = System::Drawing::Point(317, 529);
			this->txt_i4j6->Name = L"txt_i4j6";
			this->txt_i4j6->ReadOnly = true;
			this->txt_i4j6->Size = System::Drawing::Size(28, 26);
			this->txt_i4j6->TabIndex = 53;
			this->txt_i4j6->Visible = false;
			// 
			// txt_i4j5
			// 
			this->txt_i4j5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i4j5->Location = System::Drawing::Point(283, 529);
			this->txt_i4j5->Name = L"txt_i4j5";
			this->txt_i4j5->ReadOnly = true;
			this->txt_i4j5->Size = System::Drawing::Size(28, 26);
			this->txt_i4j5->TabIndex = 52;
			this->txt_i4j5->Visible = false;
			// 
			// txt_i4j4
			// 
			this->txt_i4j4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i4j4->Location = System::Drawing::Point(250, 529);
			this->txt_i4j4->Name = L"txt_i4j4";
			this->txt_i4j4->ReadOnly = true;
			this->txt_i4j4->Size = System::Drawing::Size(28, 26);
			this->txt_i4j4->TabIndex = 51;
			// 
			// txt_i4j3
			// 
			this->txt_i4j3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i4j3->Location = System::Drawing::Point(216, 531);
			this->txt_i4j3->Name = L"txt_i4j3";
			this->txt_i4j3->ReadOnly = true;
			this->txt_i4j3->Size = System::Drawing::Size(28, 26);
			this->txt_i4j3->TabIndex = 50;
			// 
			// txt_i4j2
			// 
			this->txt_i4j2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i4j2->Location = System::Drawing::Point(182, 529);
			this->txt_i4j2->Name = L"txt_i4j2";
			this->txt_i4j2->ReadOnly = true;
			this->txt_i4j2->Size = System::Drawing::Size(28, 26);
			this->txt_i4j2->TabIndex = 49;
			// 
			// txt_i4j1
			// 
			this->txt_i4j1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_i4j1->Location = System::Drawing::Point(148, 529);
			this->txt_i4j1->Name = L"txt_i4j1";
			this->txt_i4j1->ReadOnly = true;
			this->txt_i4j1->Size = System::Drawing::Size(28, 26);
			this->txt_i4j1->TabIndex = 48;
			// 
			// lblDiagramaHasse
			// 
			this->lblDiagramaHasse->AutoSize = true;
			this->lblDiagramaHasse->BackColor = System::Drawing::Color::Transparent;
			this->lblDiagramaHasse->Font = (gcnew System::Drawing::Font(L"Times New Roman", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDiagramaHasse->ForeColor = System::Drawing::Color::Black;
			this->lblDiagramaHasse->Location = System::Drawing::Point(647, 333);
			this->lblDiagramaHasse->Name = L"lblDiagramaHasse";
			this->lblDiagramaHasse->Size = System::Drawing::Size(422, 55);
			this->lblDiagramaHasse->TabIndex = 77;
			this->lblDiagramaHasse->Text = L"Diagrama de Hasse";
			// 
			// lblReflexivo
			// 
			this->lblReflexivo->AutoSize = true;
			this->lblReflexivo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblReflexivo->ForeColor = System::Drawing::Color::Transparent;
			this->lblReflexivo->Location = System::Drawing::Point(644, 251);
			this->lblReflexivo->Name = L"lblReflexivo";
			this->lblReflexivo->Size = System::Drawing::Size(91, 22);
			this->lblReflexivo->TabIndex = 78;
			this->lblReflexivo->Text = L"Reflexivo:";
			// 
			// lblTransitivo
			// 
			this->lblTransitivo->AutoSize = true;
			this->lblTransitivo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTransitivo->ForeColor = System::Drawing::Color::Transparent;
			this->lblTransitivo->Location = System::Drawing::Point(637, 282);
			this->lblTransitivo->Name = L"lblTransitivo";
			this->lblTransitivo->Size = System::Drawing::Size(98, 22);
			this->lblTransitivo->TabIndex = 79;
			this->lblTransitivo->Text = L"Transitivo:";
			// 
			// btnCalcular
			// 
			this->btnCalcular->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCalcular->Location = System::Drawing::Point(573, 163);
			this->btnCalcular->Name = L"btnCalcular";
			this->btnCalcular->Size = System::Drawing::Size(95, 33);
			this->btnCalcular->TabIndex = 80;
			this->btnCalcular->Text = L"Calcular";
			this->btnCalcular->UseVisualStyleBackColor = true;
			this->btnCalcular->Click += gcnew System::EventHandler(this, &MyForm::btnCalcular_Click);
			// 
			// lblAntisimetrico
			// 
			this->lblAntisimetrico->AutoSize = true;
			this->lblAntisimetrico->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAntisimetrico->ForeColor = System::Drawing::Color::Transparent;
			this->lblAntisimetrico->Location = System::Drawing::Point(904, 252);
			this->lblAntisimetrico->Name = L"lblAntisimetrico";
			this->lblAntisimetrico->Size = System::Drawing::Size(124, 22);
			this->lblAntisimetrico->TabIndex = 81;
			this->lblAntisimetrico->Text = L"Antisimétrico:";
			// 
			// lblOrdenParcial
			// 
			this->lblOrdenParcial->AutoSize = true;
			this->lblOrdenParcial->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOrdenParcial->ForeColor = System::Drawing::Color::Transparent;
			this->lblOrdenParcial->Location = System::Drawing::Point(869, 285);
			this->lblOrdenParcial->Name = L"lblOrdenParcial";
			this->lblOrdenParcial->Size = System::Drawing::Size(159, 22);
			this->lblOrdenParcial->TabIndex = 82;
			this->lblOrdenParcial->Text = L"De Orden Parcial:";
			// 
			// txtReflexivo
			// 
			this->txtReflexivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtReflexivo->Location = System::Drawing::Point(741, 251);
			this->txtReflexivo->Name = L"txtReflexivo";
			this->txtReflexivo->ReadOnly = true;
			this->txtReflexivo->Size = System::Drawing::Size(35, 22);
			this->txtReflexivo->TabIndex = 83;
			// 
			// txtTranstivo
			// 
			this->txtTranstivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTranstivo->Location = System::Drawing::Point(741, 282);
			this->txtTranstivo->Name = L"txtTranstivo";
			this->txtTranstivo->ReadOnly = true;
			this->txtTranstivo->Size = System::Drawing::Size(35, 22);
			this->txtTranstivo->TabIndex = 84;
			// 
			// txtOrdenParcial
			// 
			this->txtOrdenParcial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtOrdenParcial->Location = System::Drawing::Point(1034, 285);
			this->txtOrdenParcial->Name = L"txtOrdenParcial";
			this->txtOrdenParcial->ReadOnly = true;
			this->txtOrdenParcial->Size = System::Drawing::Size(35, 22);
			this->txtOrdenParcial->TabIndex = 86;
			// 
			// txtAntisimetrico
			// 
			this->txtAntisimetrico->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtAntisimetrico->Location = System::Drawing::Point(1034, 254);
			this->txtAntisimetrico->Name = L"txtAntisimetrico";
			this->txtAntisimetrico->ReadOnly = true;
			this->txtAntisimetrico->Size = System::Drawing::Size(35, 22);
			this->txtAntisimetrico->TabIndex = 85;
			// 
			// btnGenerar
			// 
			this->btnGenerar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerar->Location = System::Drawing::Point(119, 216);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(82, 32);
			this->btnGenerar->TabIndex = 87;
			this->btnGenerar->Text = L"Generar";
			this->btnGenerar->UseVisualStyleBackColor = true;
			this->btnGenerar->Click += gcnew System::EventHandler(this, &MyForm::btnGenerar_Click);
			// 
			// lblGenerarElementos
			// 
			this->lblGenerarElementos->AutoSize = true;
			this->lblGenerarElementos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGenerarElementos->ForeColor = System::Drawing::Color::Transparent;
			this->lblGenerarElementos->Location = System::Drawing::Point(73, 186);
			this->lblGenerarElementos->Name = L"lblGenerarElementos";
			this->lblGenerarElementos->Size = System::Drawing::Size(165, 22);
			this->lblGenerarElementos->TabIndex = 4;
			this->lblGenerarElementos->Text = L"Generar elementos";
			// 
			// lblIngresarElementos
			// 
			this->lblIngresarElementos->AutoSize = true;
			this->lblIngresarElementos->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblIngresarElementos->ForeColor = System::Drawing::Color::Transparent;
			this->lblIngresarElementos->Location = System::Drawing::Point(249, 186);
			this->lblIngresarElementos->Name = L"lblIngresarElementos";
			this->lblIngresarElementos->Size = System::Drawing::Size(166, 22);
			this->lblIngresarElementos->TabIndex = 88;
			this->lblIngresarElementos->Text = L"Ingresar elementos";
			// 
			// lblElementoRepetido
			// 
			this->lblElementoRepetido->AutoSize = true;
			this->lblElementoRepetido->BackColor = System::Drawing::Color::Transparent;
			this->lblElementoRepetido->Enabled = false;
			this->lblElementoRepetido->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblElementoRepetido->ForeColor = System::Drawing::Color::Black;
			this->lblElementoRepetido->Location = System::Drawing::Point(267, 260);
			this->lblElementoRepetido->Name = L"lblElementoRepetido";
			this->lblElementoRepetido->Size = System::Drawing::Size(136, 19);
			this->lblElementoRepetido->TabIndex = 89;
			this->lblElementoRepetido->Text = L"Elemento Repetitido!";
			this->lblElementoRepetido->Visible = false;
			// 
			// cbxElementos
			// 
			this->cbxElementos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbxElementos->FormattingEnabled = true;
			this->cbxElementos->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->cbxElementos->Location = System::Drawing::Point(334, 219);
			this->cbxElementos->Name = L"cbxElementos";
			this->cbxElementos->Size = System::Drawing::Size(81, 28);
			this->cbxElementos->TabIndex = 90;
			// 
			// lblA
			// 
			this->lblA->AutoSize = true;
			this->lblA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblA->ForeColor = System::Drawing::Color::Transparent;
			this->lblA->Location = System::Drawing::Point(73, 290);
			this->lblA->Name = L"lblA";
			this->lblA->Size = System::Drawing::Size(28, 22);
			this->lblA->TabIndex = 91;
			this->lblA->Text = L"A:";
			// 
			// txtA
			// 
			this->txtA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtA->Location = System::Drawing::Point(107, 290);
			this->txtA->Name = L"txtA";
			this->txtA->ReadOnly = true;
			this->txtA->Size = System::Drawing::Size(322, 26);
			this->txtA->TabIndex = 92;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->Location = System::Drawing::Point(1037, 611);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(135, 38);
			this->btnLimpiar->TabIndex = 93;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiar_Click);
			// 
			// btnGenerarHasse
			// 
			this->btnGenerarHasse->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerarHasse->Location = System::Drawing::Point(768, 475);
			this->btnGenerarHasse->Name = L"btnGenerarHasse";
			this->btnGenerarHasse->Size = System::Drawing::Size(161, 80);
			this->btnGenerarHasse->TabIndex = 94;
			this->btnGenerarHasse->Text = L"Generar Diagrama de Hasse";
			this->btnGenerarHasse->UseVisualStyleBackColor = true;
			this->btnGenerarHasse->Click += gcnew System::EventHandler(this, &MyForm::btnGenerarHasse_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->btnGenerarHasse);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->txtA);
			this->Controls->Add(this->lblA);
			this->Controls->Add(this->cbxElementos);
			this->Controls->Add(this->lblElementoRepetido);
			this->Controls->Add(this->lblIngresarElementos);
			this->Controls->Add(this->btnGenerar);
			this->Controls->Add(this->txtOrdenParcial);
			this->Controls->Add(this->txtAntisimetrico);
			this->Controls->Add(this->txtTranstivo);
			this->Controls->Add(this->txtReflexivo);
			this->Controls->Add(this->lblOrdenParcial);
			this->Controls->Add(this->lblAntisimetrico);
			this->Controls->Add(this->btnCalcular);
			this->Controls->Add(this->lblTransitivo);
			this->Controls->Add(this->lblReflexivo);
			this->Controls->Add(this->lblDiagramaHasse);
			this->Controls->Add(this->txt_i7j7);
			this->Controls->Add(this->txt_i7j6);
			this->Controls->Add(this->txt_i7j5);
			this->Controls->Add(this->txt_i7j4);
			this->Controls->Add(this->txt_i7j3);
			this->Controls->Add(this->txt_i7j2);
			this->Controls->Add(this->txt_i7j1);
			this->Controls->Add(this->txt_i6j7);
			this->Controls->Add(this->txt_i6j6);
			this->Controls->Add(this->txt_i6j5);
			this->Controls->Add(this->txt_i6j4);
			this->Controls->Add(this->txt_i6j3);
			this->Controls->Add(this->txt_i6j2);
			this->Controls->Add(this->txt_i6j1);
			this->Controls->Add(this->txt_i5j7);
			this->Controls->Add(this->txt_i5j6);
			this->Controls->Add(this->txt_i5j5);
			this->Controls->Add(this->txt_i5j4);
			this->Controls->Add(this->txt_i5j3);
			this->Controls->Add(this->txt_i5j2);
			this->Controls->Add(this->txt_i5j1);
			this->Controls->Add(this->txt_i4j7);
			this->Controls->Add(this->txt_i4j6);
			this->Controls->Add(this->txt_i4j5);
			this->Controls->Add(this->txt_i4j4);
			this->Controls->Add(this->txt_i4j3);
			this->Controls->Add(this->txt_i4j2);
			this->Controls->Add(this->txt_i4j1);
			this->Controls->Add(this->txt_i3j7);
			this->Controls->Add(this->txt_i3j6);
			this->Controls->Add(this->txt_i3j5);
			this->Controls->Add(this->txt_i3j4);
			this->Controls->Add(this->txt_i3j3);
			this->Controls->Add(this->txt_i3j2);
			this->Controls->Add(this->txt_i3j1);
			this->Controls->Add(this->txt_i2j7);
			this->Controls->Add(this->txt_i2j6);
			this->Controls->Add(this->txt_i2j5);
			this->Controls->Add(this->txt_i2j4);
			this->Controls->Add(this->txt_i2j3);
			this->Controls->Add(this->txt_i2j2);
			this->Controls->Add(this->txt_i2j1);
			this->Controls->Add(this->txt_i1j7);
			this->Controls->Add(this->txt_i1j6);
			this->Controls->Add(this->txt_i1j5);
			this->Controls->Add(this->txt_i1j4);
			this->Controls->Add(this->txt_i1j3);
			this->Controls->Add(this->txt_i1j2);
			this->Controls->Add(this->txt_i1j1);
			this->Controls->Add(this->txt_j7);
			this->Controls->Add(this->txt_j6);
			this->Controls->Add(this->txt_j5);
			this->Controls->Add(this->txt_j4);
			this->Controls->Add(this->txt_j3);
			this->Controls->Add(this->txt_j2);
			this->Controls->Add(this->txt_j1);
			this->Controls->Add(this->txt_i7);
			this->Controls->Add(this->txt_i6);
			this->Controls->Add(this->txt_i5);
			this->Controls->Add(this->txt_i4);
			this->Controls->Add(this->txt_i3);
			this->Controls->Add(this->txt_i2);
			this->Controls->Add(this->txt_i1);
			this->Controls->Add(this->lblMatrizS);
			this->Controls->Add(this->txtRelacionS);
			this->Controls->Add(this->lblS);
			this->Controls->Add(this->lblRelacionS);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->lblGenerarElementos);
			this->Controls->Add(this->lblConjuntoA);
			this->Controls->Add(this->lblNumeroElementos);
			this->Controls->Add(this->nudCantidad);
			this->Controls->Add(this->lblTitulo);
			this->ForeColor = System::Drawing::Color::Black;
			this->Name = L"MyForm";
			this->Text = L"Proyecto";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCantidad))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Relacion* R;
	Relacion* paresDesiguales;
	Par* par;
	int* conjuntoA = NULL, n;

	private: System::Void nudCantidad_ValueChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		nudCantidad->Minimum = 4;
		nudCantidad->Maximum = 7;
		n = System::Convert::ToInt32(this->nudCantidad->Value);
		conjuntoA = new int[n];
	}

	private: System::Void btnGenerar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Random r;
		int elemento;
		while (contador < n)
		{
			elemento = r.Next(1, 13);
			bool repetido = false;
			if (contador == 0)
			{
				conjuntoA[contador] = elemento;
			}
			else
			{
				for (int i = 0; i < contador; i++)
				{
					if (elemento == conjuntoA[i])
					{
						repetido = true;
						break;
					}
				}
			}
			if (repetido == false)
			{
				conjuntoA[contador] = elemento;
				contador++;
			}
		}

		StringBuilder^ sb = gcnew StringBuilder();
		ordernarConjunto(conjuntoA, n);
		sb->Append("{");
		for (int i = 0; i < n; i++)
		{
			elemento = conjuntoA[i];
			sb->Append(elemento);
			if (i < n - 1)
			{
				sb->Append(" , ");
			}
		}
		sb->Append("}");
		txtA->Text = sb->ToString();
	}

	private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		lblElementoRepetido->Visible = false;

		String^ numeroSeleccionado = cbxElementos->Text;
		int elementoSeleccionado = System::Convert::ToInt32(numeroSeleccionado);
		bool repetido = false;

		for (size_t i = 0; i < contador; i++)
		{
			if (elementoSeleccionado == conjuntoA[i])
			{
				repetido = true; 
				break;
			}
		}

		if (repetido == false && contador < n)
		{
			conjuntoA[contador] = elementoSeleccionado;
			contador++;
		}
		else
		{
			lblElementoRepetido->Visible = true;
		}

		StringBuilder^ sb = gcnew StringBuilder();

		if (contador == n)
		{
			ordernarConjunto(conjuntoA, n);
		}

		sb->Append("{");
		for (int i = 0; i < n; i++)
		{
			int elemento = conjuntoA[i];
			if (elemento > 0)
			{
				sb->Append(elemento);

				if (i < n-1)
				{
					sb->Append(" , ");
				}
			}
		}
		sb->Append("}");
		txtA->Text = sb->ToString();
	}

	private: System::Void btnCalcular_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		R = new Relacion();
		generarRelacion(R, par, conjuntoA, n);

		StringBuilder^ sb = gcnew StringBuilder();
		sb->Append("{ ");
		System::String^ textoPar;
		for (int i = 0; i < R->getN(); i++)
		{
			par = R->returnPar(i);
			textoPar = gcnew System::String(par->mostrarPar().c_str());
			if (i == R->getN() - 1)
			{
				sb->Append(textoPar);
			}
			else
			{
				sb->Append(textoPar);
				sb->Append(" , ");
			}
		}
		sb->Append(" }");
		txtRelacionS->Text = sb->ToString();

		if (determinarReflexividad(R,par,conjuntoA,n) == true)
		{
			txtReflexivo->Text = "Si";
		}
		else if (determinarReflexividad(R, par, conjuntoA, n) == false)
		{
			txtReflexivo->Text = "No";
		}
		if (determinarAntisimetria(R, par, conjuntoA, n) == true)
		{
			txtAntisimetrico->Text = "Si";
		}
		else if (determinarAntisimetria(R, par, conjuntoA, n) == false)
		{
			txtAntisimetrico->Text = "No";
		}
		if (determinarTransitividad(R, par, conjuntoA, n) == true)
		{
			txtTranstivo->Text = "Si";
		}
		else if (determinarTransitividad(R, par, conjuntoA, n) == false)
		{
			txtTranstivo->Text = "No";
		}
		if (determinarOrdenParcial(R, par, conjuntoA, n) == true)
		{
			txtOrdenParcial->Text = "Si";
		}
		else if (determinarOrdenParcial(R, par, conjuntoA, n) == false)
		{
			txtOrdenParcial->Text = "No";
		}

		String^ numero;
		paresDesiguales = new Relacion();
		Par* parDesigual;
		for (int i = 0; i < R->getN(); i++)
		{
			par = R->returnPar(i);
			if (par->getX() != par->getY())
			{			
				paresDesiguales->agregarPar(par);
			}
		}

		//dibujado de la matriz
		if (n >= 4)
		{
			txt_i5->Visible = false;
			txt_j5->Visible = false;
			txt_i6->Visible = false;
			txt_j6->Visible = false;
			txt_i7->Visible = false;
			txt_j7->Visible = false;

			txt_i5j1->Visible = false;
			txt_i5j2->Visible = false;
			txt_i5j3->Visible = false;
			txt_i5j4->Visible = false;
			txt_i5j5->Visible = false;

			txt_i1j5->Visible = false;
			txt_i2j5->Visible = false;
			txt_i3j5->Visible = false;
			txt_i4j5->Visible = false;


			txt_i6j1->Visible = false;
			txt_i6j2->Visible = false;
			txt_i6j3->Visible = false;
			txt_i6j4->Visible = false;
			txt_i6j5->Visible = false;
			txt_i6j6->Visible = false;

			txt_i1j6->Visible = false;
			txt_i2j6->Visible = false;
			txt_i3j6->Visible = false;
			txt_i4j6->Visible = false;
			txt_i5j6->Visible = false;


			txt_i7j1->Visible = false;
			txt_i7j2->Visible = false;
			txt_i7j3->Visible = false;
			txt_i7j4->Visible = false;
			txt_i7j5->Visible = false;
			txt_i7j6->Visible = false;
			txt_i7j7->Visible = false;

			txt_i1j7->Visible = false;
			txt_i2j7->Visible = false;
			txt_i3j7->Visible = false;
			txt_i4j7->Visible = false;
			txt_i5j7->Visible = false;
			txt_i6j7->Visible = false;

			numero = System::Convert::ToString(conjuntoA[0]);
			txt_i1->Text = numero;
			txt_j1->Text = numero;
			numero = System::Convert::ToString(conjuntoA[1]);
			txt_i2->Text = numero;
			txt_j2->Text = numero;
			numero = System::Convert::ToString(conjuntoA[2]);
			txt_i3->Text = numero;
			txt_j3->Text = numero;
			numero = System::Convert::ToString(conjuntoA[3]);
			txt_i4->Text = numero;
			txt_j4->Text = numero;
			txt_i1j1->Text = "1";
			txt_i1j2->Text = "0";
			txt_i1j3->Text = "0";
			txt_i1j4->Text = "0";

			txt_i2j1->Text = "0";
			txt_i2j2->Text = "1";
			txt_i2j3->Text = "0";
			txt_i2j4->Text = "0";

			txt_i3j1->Text = "0";
			txt_i3j2->Text = "0";
			txt_i3j3->Text = "1";
			txt_i3j4->Text = "0";

			txt_i4j1->Text = "0";
			txt_i4j2->Text = "0";
			txt_i4j3->Text = "0";
			txt_i4j4->Text = "1";

			if (paresDesiguales->getN() != 0)
			{
				for (int k = 0; k < paresDesiguales->getN(); k++)
				{
					parDesigual = paresDesiguales->returnPar(k);
					// i1
					if (conjuntoA[0] == parDesigual->getX() && conjuntoA[1] == parDesigual->getY())
					{
						txt_i1j2->Text = "1";
					}

					if (conjuntoA[0] == parDesigual->getX() && conjuntoA[2] == parDesigual->getY())
					{
						txt_i1j3->Text = "1";
					}

					if (conjuntoA[0] == parDesigual->getX() && conjuntoA[3] == parDesigual->getY())
					{
						txt_i1j4->Text = "1";
					}

					// i2
					if (conjuntoA[1] == parDesigual->getX() && conjuntoA[0] == parDesigual->getY())
					{
						txt_i2j1->Text = "1";
					}
					if (conjuntoA[1] == parDesigual->getX() && conjuntoA[2] == parDesigual->getY())
					{
						txt_i2j3->Text = "1";
					}
					if (conjuntoA[1] == parDesigual->getX() && conjuntoA[3] == parDesigual->getY())
					{
						txt_i2j4->Text = "1";
					}
					// i3
					if (conjuntoA[2] == parDesigual->getX() && conjuntoA[0] == parDesigual->getY())
					{
						txt_i3j1->Text = "1";
					}
					if (conjuntoA[2] == parDesigual->getX() && conjuntoA[1] == parDesigual->getY())
					{
						txt_i3j2->Text = "1";
					}
					if (conjuntoA[2] == parDesigual->getX() && conjuntoA[3] == parDesigual->getY())
					{
						txt_i3j4->Text = "1";
					}
					// i4
					if (conjuntoA[3] == parDesigual->getX() && conjuntoA[0] == parDesigual->getY())
					{
						txt_i4j1->Text = "1";
					}
					if (conjuntoA[3] == parDesigual->getX() && conjuntoA[1] == parDesigual->getY())
					{
						txt_i4j2->Text = "1";
					}
					if (conjuntoA[3] == parDesigual->getX() && conjuntoA[2] == parDesigual->getY())
					{
						txt_i4j3->Text = "1";
					}
				}
			}
		}
		if (n >= 5)
		{
			txt_i6->Visible = false;
			txt_j6->Visible = false;
			txt_i7->Visible = false;
			txt_j7->Visible = false;

			txt_i6j1->Visible = false;
			txt_i6j2->Visible = false;
			txt_i6j3->Visible = false;
			txt_i6j4->Visible = false;
			txt_i6j5->Visible = false;
			txt_i6j6->Visible = false;

			txt_i1j6->Visible = false;
			txt_i2j6->Visible = false;
			txt_i3j6->Visible = false;
			txt_i4j6->Visible = false;
			txt_i5j6->Visible = false;


			txt_i7j1->Visible = false;
			txt_i7j2->Visible = false;
			txt_i7j3->Visible = false;
			txt_i7j4->Visible = false;
			txt_i7j5->Visible = false;
			txt_i7j6->Visible = false;
			txt_i7j7->Visible = false;

			txt_i1j7->Visible = false;
			txt_i2j7->Visible = false;
			txt_i3j7->Visible = false;
			txt_i4j7->Visible = false;
			txt_i5j7->Visible = false;
			txt_i6j7->Visible = false;

			txt_i5->Visible = true;
			txt_j5->Visible = true;
			txt_i5j1->Visible = true;
			txt_i5j2->Visible = true;
			txt_i5j3->Visible = true;
			txt_i5j4->Visible = true;
			txt_i5j5->Visible = true;

			txt_i1j5->Visible = true;
			txt_i2j5->Visible = true;
			txt_i3j5->Visible = true;
			txt_i4j5->Visible = true;

			numero = System::Convert::ToString(conjuntoA[4]);
			txt_i5->Text = numero;
			txt_j5->Text = numero;

			txt_i1j5->Text = "0";
			txt_i2j5->Text = "0";
			txt_i3j5->Text = "0";
			txt_i4j5->Text = "0";

			txt_i5j1->Text = "0";
			txt_i5j2->Text = "0";
			txt_i5j3->Text = "0";
			txt_i5j4->Text = "0";
			txt_i5j5->Text = "1";
			if (paresDesiguales->getN() != 0)
			{
				for (int k = 0; k < paresDesiguales->getN(); k++)
				{
					parDesigual = paresDesiguales->returnPar(k);
					// i1-4 j5
					if (conjuntoA[0] == parDesigual->getX() && conjuntoA[4] == parDesigual->getY())
					{
						txt_i1j5->Text = "1";
					}
					if (conjuntoA[1] == parDesigual->getX() && conjuntoA[4] == parDesigual->getY())
					{
						txt_i2j5->Text = "1";
					}
					if (conjuntoA[2] == parDesigual->getX() && conjuntoA[4] == parDesigual->getY())
					{
						txt_i3j5->Text = "1";
					}
					if (conjuntoA[3] == parDesigual->getX() && conjuntoA[4] == parDesigual->getY())
					{
						txt_i4j5->Text = "1";
					}
					// i5j--
					if (conjuntoA[4] == parDesigual->getX() && conjuntoA[0] == parDesigual->getY())
					{
						txt_i5j1->Text = "1";
					}
					if (conjuntoA[4] == parDesigual->getX() && conjuntoA[1] == parDesigual->getY())
					{
						txt_i5j2->Text = "1";
					}
					if (conjuntoA[4] == parDesigual->getX() && conjuntoA[2] == parDesigual->getY())
					{
						txt_i5j3->Text = "1";
					}
					if (conjuntoA[4] == parDesigual->getX() && conjuntoA[3] == parDesigual->getY())
					{
						txt_i5j4->Text = "1";
					}
				}
			}
		}
		if (n >= 6)
		{
			txt_i7->Visible = false;
			txt_j7->Visible = false;

			txt_i7j1->Visible = false;
			txt_i7j2->Visible = false;
			txt_i7j3->Visible = false;
			txt_i7j4->Visible = false;
			txt_i7j5->Visible = false;
			txt_i7j6->Visible = false;
			txt_i7j7->Visible = false;

			txt_i1j7->Visible = false;
			txt_i2j7->Visible = false;
			txt_i3j7->Visible = false;
			txt_i4j7->Visible = false;
			txt_i5j7->Visible = false;
			txt_i6j7->Visible = false;

			txt_i6->Visible = true;
			txt_j6->Visible = true;
			txt_i6j1->Visible = true;
			txt_i6j2->Visible = true;
			txt_i6j3->Visible = true;
			txt_i6j4->Visible = true;
			txt_i6j5->Visible = true;
			txt_i6j6->Visible = true;

			txt_i1j6->Visible = true;
			txt_i2j6->Visible = true;
			txt_i3j6->Visible = true;
			txt_i4j6->Visible = true;
			txt_i5j6->Visible = true;

			numero = System::Convert::ToString(conjuntoA[5]);
			txt_i6->Text = numero;
			txt_j6->Text = numero;

			txt_i1j6->Text = "0";
			txt_i2j6->Text = "0";
			txt_i3j6->Text = "0";
			txt_i4j6->Text = "0";
			txt_i5j6->Text = "0";

			txt_i6j1->Text = "0";
			txt_i6j2->Text = "0";
			txt_i6j3->Text = "0";
			txt_i6j4->Text = "0";
			txt_i6j5->Text = "0";
			txt_i6j6->Text = "1";

			if (paresDesiguales->getN() != 0)
			{
				for (int k = 0; k < paresDesiguales->getN(); k++)
				{
					parDesigual = paresDesiguales->returnPar(k);
					// i1-5 j6
					if (conjuntoA[0] == parDesigual->getX() && conjuntoA[5] == parDesigual->getY())
					{
						txt_i1j6->Text = "1";
					}
					if (conjuntoA[1] == parDesigual->getX() && conjuntoA[5] == parDesigual->getY())
					{
						txt_i2j6->Text = "1";
					}
					if (conjuntoA[2] == parDesigual->getX() && conjuntoA[5] == parDesigual->getY())
					{
						txt_i3j6->Text = "1";
					}
					if (conjuntoA[3] == parDesigual->getX() && conjuntoA[5] == parDesigual->getY())
					{
						txt_i4j6->Text = "1";
					}
					if (conjuntoA[4] == parDesigual->getX() && conjuntoA[5] == parDesigual->getY())
					{
						txt_i5j6->Text = "1";
					}
					// i6j--
					if (conjuntoA[5] == parDesigual->getX() && conjuntoA[0] == parDesigual->getY())
					{
						txt_i6j1->Text = "1";
					}
					if (conjuntoA[5] == parDesigual->getX() && conjuntoA[1] == parDesigual->getY())
					{
						txt_i6j2->Text = "1";
					}
					if (conjuntoA[5] == parDesigual->getX() && conjuntoA[2] == parDesigual->getY())
					{
						txt_i6j3->Text = "1";
					}
					if (conjuntoA[5] == parDesigual->getX() && conjuntoA[3] == parDesigual->getY())
					{
						txt_i6j4->Text = "1";
					}
					if (conjuntoA[5] == parDesigual->getX() && conjuntoA[4] == parDesigual->getY())
					{
						txt_i6j5->Text = "1";
					}
				}
			}
		}
		if (n >= 7)
		{
			txt_i7->Visible = true;
			txt_j7->Visible = true;
			txt_i7j1->Visible = true;
			txt_i7j2->Visible = true;
			txt_i7j3->Visible = true;
			txt_i7j4->Visible = true;
			txt_i7j5->Visible = true;
			txt_i7j6->Visible = true;
			txt_i7j7->Visible = true;

			txt_i1j7->Visible = true;
			txt_i2j7->Visible = true;
			txt_i3j7->Visible = true;
			txt_i4j7->Visible = true;
			txt_i5j7->Visible = true;
			txt_i6j7->Visible = true;

			numero = System::Convert::ToString(conjuntoA[6]);
			txt_i7->Text = numero;
			txt_j7->Text = numero;

			txt_i1j7->Text = "0";
			txt_i2j7->Text = "0";
			txt_i3j7->Text = "0";
			txt_i4j7->Text = "0";
			txt_i5j7->Text = "0";
			txt_i6j7->Text = "0";

			txt_i7j1->Text = "0";
			txt_i7j2->Text = "0";
			txt_i7j3->Text = "0";
			txt_i7j4->Text = "0";
			txt_i7j5->Text = "0";
			txt_i7j6->Text = "0";
			txt_i7j7->Text = "1";

			if (paresDesiguales->getN() != 0)
			{
				for (int k = 0; k < paresDesiguales->getN(); k++)
				{
					parDesigual = paresDesiguales->returnPar(k);
					// i1-6 j7
					if (conjuntoA[0] == parDesigual->getX() && conjuntoA[6] == parDesigual->getY())
					{
						txt_i1j7->Text = "1";
					}
					if (conjuntoA[1] == parDesigual->getX() && conjuntoA[6] == parDesigual->getY())
					{
						txt_i2j7->Text = "1";
					}
					if (conjuntoA[2] == parDesigual->getX() && conjuntoA[6] == parDesigual->getY())
					{
						txt_i3j7->Text = "1";
					}
					if (conjuntoA[3] == parDesigual->getX() && conjuntoA[6] == parDesigual->getY())
					{
						txt_i4j7->Text = "1";
					}
					if (conjuntoA[4] == parDesigual->getX() && conjuntoA[6] == parDesigual->getY())
					{
						txt_i5j7->Text = "1";
					}
					if (conjuntoA[5] == parDesigual->getX() && conjuntoA[6] == parDesigual->getY())
					{
						txt_i6j7->Text = "1";
					}
					// i7j--
					if (conjuntoA[6] == parDesigual->getX() && conjuntoA[0] == parDesigual->getY())
					{
						txt_i7j1->Text = "1";
					}
					if (conjuntoA[6] == parDesigual->getX() && conjuntoA[1] == parDesigual->getY())
					{
						txt_i7j2->Text = "1";
					}
					if (conjuntoA[6] == parDesigual->getX() && conjuntoA[2] == parDesigual->getY())
					{
						txt_i7j3->Text = "1";
					}
					if (conjuntoA[6] == parDesigual->getX() && conjuntoA[3] == parDesigual->getY())
					{
						txt_i7j4->Text = "1";
					}
					if (conjuntoA[6] == parDesigual->getX() && conjuntoA[4] == parDesigual->getY())
					{
						txt_i7j5->Text = "1";
					}
					if (conjuntoA[6] == parDesigual->getX() && conjuntoA[5] == parDesigual->getY())
					{
						txt_i7j6->Text = "1";
					}
				}
			}
		}
	}


	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->nudCantidad->Value = 4;
		contador = 0;
		conjuntoA = NULL;
		R = new Relacion();
		//pcbDiagramaHasse->Visible = false;
		//pcbDiagramaHasse->Image = Image::FromFile("menu.png");
		nudCantidad->Text = "";
		cbxElementos->Text = "";
		txtA->Text = "";
		txtRelacionS->Text = "";
		txtReflexivo->Text = "";
		txtAntisimetrico->Text = "";
		txtOrdenParcial->Text = "";
		txtTranstivo->Text = "";
		txt_i1->Text = "";
		txt_i2->Text = "";
		txt_i3->Text = "";
		txt_i4->Text = "";
		txt_i5->Text = "";
		txt_i6->Text = "";
		txt_i7->Text = "";
		txt_j1->Text = "";
		txt_j2->Text = "";
		txt_j3->Text = "";
		txt_j4->Text = "";
		txt_j5->Text = "";
		txt_j6->Text = "";
		txt_j7->Text = "";

		txt_i1j1->Text = "";
		txt_i1j2->Text = "";
		txt_i1j3->Text = "";
		txt_i1j4->Text = "";
		txt_i1j5->Text = "";
		txt_i1j6->Text = "";
		txt_i1j7->Text = "";

		txt_i2j1->Text = "";
		txt_i2j2->Text = "";
		txt_i2j3->Text = "";
		txt_i2j4->Text = "";
		txt_i2j5->Text = "";
		txt_i2j6->Text = "";
		txt_i2j7->Text = "";

		txt_i3j1->Text = "";
		txt_i3j2->Text = "";
		txt_i3j3->Text = "";
		txt_i3j4->Text = "";
		txt_i3j5->Text = "";
		txt_i3j6->Text = "";
		txt_i3j7->Text = "";

		txt_i4j1->Text = "";
		txt_i4j2->Text = "";
		txt_i4j3->Text = "";
		txt_i4j4->Text = "";
		txt_i4j5->Text = "";
		txt_i4j6->Text = "";
		txt_i4j7->Text = "";

		txt_i5j1->Text = "";
		txt_i5j2->Text = "";
		txt_i5j3->Text = "";
		txt_i5j4->Text = "";
		txt_i5j5->Text = "";
		txt_i5j6->Text = "";
		txt_i5j7->Text = "";

		txt_i6j1->Text = "";
		txt_i6j2->Text = "";
		txt_i6j3->Text = "";
		txt_i6j4->Text = "";
		txt_i6j5->Text = "";
		txt_i6j6->Text = "";
		txt_i6j7->Text = "";

		txt_i7j1->Text = "";
		txt_i7j2->Text = "";
		txt_i7j3->Text = "";
		txt_i7j4->Text = "";
		txt_i7j5->Text = "";
		txt_i7j6->Text = "";
		txt_i7j7->Text = "";

		txt_i5->Visible = false;
		txt_j5->Visible = false;
		txt_i6->Visible = false;
		txt_j6->Visible = false;
		txt_i7->Visible = false;
		txt_j7->Visible = false;

		txt_i5j1->Visible = false;
		txt_i5j2->Visible = false;
		txt_i5j3->Visible = false;
		txt_i5j4->Visible = false;
		txt_i5j5->Visible = false;

		txt_i1j5->Visible = false;
		txt_i2j5->Visible = false;
		txt_i3j5->Visible = false;
		txt_i4j5->Visible = false;


		txt_i6j1->Visible = false;
		txt_i6j2->Visible = false;
		txt_i6j3->Visible = false;
		txt_i6j4->Visible = false;
		txt_i6j5->Visible = false;
		txt_i6j6->Visible = false;

		txt_i1j6->Visible = false;
		txt_i2j6->Visible = false;
		txt_i3j6->Visible = false;
		txt_i4j6->Visible = false;
		txt_i5j6->Visible = false;


		txt_i7j1->Visible = false;
		txt_i7j2->Visible = false;
		txt_i7j3->Visible = false;
		txt_i7j4->Visible = false;
		txt_i7j5->Visible = false;
		txt_i7j6->Visible = false;
		txt_i7j7->Visible = false;

		txt_i1j7->Visible = false;
		txt_i2j7->Visible = false;
		txt_i3j7->Visible = false;
		txt_i4j7->Visible = false;
		txt_i5j7->Visible = false;
		txt_i6j7->Visible = false;
	}
	


	private: System::Void btnGenerarHasse_Click(System::Object^ sender, System::EventArgs^ e) {
		// Crear el contenido del archivo DOT
		int* NumerosSinConexion = new int[n];
		int contadorSinConexion;
		int contadorEliminar;
		std::ofstream dotFile("hasse.dot");
		dotFile << "digraph G {" << std::endl;
		dotFile << "rankdir=BT;" << std::endl; // Mostrar el diagrama de arriba hacia abajo


		if (paresDesiguales->getN() > 0)
		{
			if (determinarTransitividad(paresDesiguales, par, conjuntoA, n) == true)
			{
				for (int i = 0; i < paresDesiguales->getN(); i++)
				{
					par = paresDesiguales->returnPar(i);

					for (int j = 0; j < paresDesiguales->getN(); j++)
					{
						if (i != j && par->getY() == paresDesiguales->returnPar(j)->getX())
						{
							for (int k = 0; k < paresDesiguales->getN(); k++)
							{
								if (par->getX() == paresDesiguales->returnPar(k)->getX()
									&& paresDesiguales->returnPar(j)->getY() == paresDesiguales->returnPar(k)->getY())
								{
									paresDesiguales->returnPar(k)->setX(-1);
								}
							}
						}
					}
				}
			}


			for (int i = 0; i < paresDesiguales->getN(); i++)
			{
				par = paresDesiguales->returnPar(i);
				if (par->getX() != -1)
				{
					dotFile << to_string(par->getX()) + " -> " + to_string(par->getY()) + " [arrowhead=none]" + ";" << std::endl;
				}
			}

			for (int i = 0; i < n; i++)
			{
				contadorSinConexion = 0;
				for (int j = 0; j < paresDesiguales->getN(); j++)
				{
					par = paresDesiguales->returnPar(j);
					if (conjuntoA[i] != par->getX() && conjuntoA[j] != par->getY())
					{
						contadorSinConexion++;
					}
					if (contadorSinConexion == paresDesiguales->getN())
					{
						dotFile << to_string(conjuntoA[i]) + ";" << std::endl;
					}
				}

			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				dotFile << to_string(conjuntoA[i]) + ";" << std::endl;
			}
		}
		dotFile << "}" << std::endl;
		dotFile.close();

		// Ejecutar el comando dot para generar el archivo PNG
		Process^ process = gcnew Process();
		process->StartInfo->FileName = "C:\\Program Files\\Graphviz\\bin\\dot.exe";
		process->StartInfo->Arguments = "-Tpng -O hasse.dot"; // Generar una imagen PNG
		process->Start();
		process->WaitForExit();

		// Abrir el archivo PNG resultante
		Process::Start("hasse.dot.png");
		//pcbDiagramaHasse->Image = Image::FromFile("hasse.dot.png");
		//pcbDiagramaHasse->Visible = true;
	}

};

}
