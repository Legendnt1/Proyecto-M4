#pragma once
#include"MyForm.h"
#include"CreditosForm.h"
#include"OrdenParcialForm.h"
#include"DiagramaHasseForm.h"
namespace Proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ FondoMenu = gcnew Bitmap("menu.png");
	public:
		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ btnInicio;
	private: System::Windows::Forms::Button^ btnOrdenParcial;
	private: System::Windows::Forms::Button^ btnDiagramaHasse;
	private: System::Windows::Forms::Button^ btnCreditos;
	private: System::ComponentModel::IContainer^ components;

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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnInicio = (gcnew System::Windows::Forms::Button());
			this->btnOrdenParcial = (gcnew System::Windows::Forms::Button());
			this->btnDiagramaHasse = (gcnew System::Windows::Forms::Button());
			this->btnCreditos = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MenuForm::timer1_Tick);
			// 
			// btnInicio
			// 
			this->btnInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInicio->Location = System::Drawing::Point(137, 340);
			this->btnInicio->Name = L"btnInicio";
			this->btnInicio->Size = System::Drawing::Size(179, 40);
			this->btnInicio->TabIndex = 0;
			this->btnInicio->Text = L"Inicio";
			this->btnInicio->UseVisualStyleBackColor = true;
			this->btnInicio->Click += gcnew System::EventHandler(this, &MenuForm::btnInicio_Click);
			// 
			// btnOrdenParcial
			// 
			this->btnOrdenParcial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnOrdenParcial->Location = System::Drawing::Point(77, 432);
			this->btnOrdenParcial->Name = L"btnOrdenParcial";
			this->btnOrdenParcial->Size = System::Drawing::Size(296, 46);
			this->btnOrdenParcial->TabIndex = 1;
			this->btnOrdenParcial->Text = L"Información de Orden Parcial";
			this->btnOrdenParcial->UseVisualStyleBackColor = true;
			this->btnOrdenParcial->Click += gcnew System::EventHandler(this, &MenuForm::btnOrdenParcial_Click);
			// 
			// btnDiagramaHasse
			// 
			this->btnDiagramaHasse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnDiagramaHasse->Location = System::Drawing::Point(50, 484);
			this->btnDiagramaHasse->Name = L"btnDiagramaHasse";
			this->btnDiagramaHasse->Size = System::Drawing::Size(354, 46);
			this->btnDiagramaHasse->TabIndex = 2;
			this->btnDiagramaHasse->Text = L"Información de Diagramas de Hasse";
			this->btnDiagramaHasse->UseVisualStyleBackColor = true;
			this->btnDiagramaHasse->Click += gcnew System::EventHandler(this, &MenuForm::btnDiagramaHasse_Click);
			// 
			// btnCreditos
			// 
			this->btnCreditos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreditos->Location = System::Drawing::Point(137, 386);
			this->btnCreditos->Name = L"btnCreditos";
			this->btnCreditos->Size = System::Drawing::Size(179, 40);
			this->btnCreditos->TabIndex = 3;
			this->btnCreditos->Text = L"Créditos";
			this->btnCreditos->UseVisualStyleBackColor = true;
			this->btnCreditos->Click += gcnew System::EventHandler(this, &MenuForm::btnCreditos_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Controls->Add(this->btnCreditos);
			this->Controls->Add(this->btnDiagramaHasse);
			this->Controls->Add(this->btnOrdenParcial);
			this->Controls->Add(this->btnInicio);
			this->Name = L"MenuForm";
			this->Text = L"MenuForm";
			this->Load += gcnew System::EventHandler(this, &MenuForm::MenuForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MenuForm_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		BufferedGraphicsContext^ Espacio = BufferedGraphicsManager::Current;
		BufferedGraphics^ Buffer = Espacio->Allocate(g, this->ClientRectangle);
		Buffer->Graphics->DrawImage(FondoMenu, 0, 0, (int)Buffer->Graphics->VisibleClipBounds.Width, (int)Buffer->Graphics->VisibleClipBounds.Height);
		Buffer->Render(g);
		delete Buffer;
		delete Espacio;
		delete g;
	}
	private: System::Void btnInicio_Click(System::Object^ sender, System::EventArgs^ e) {
		Proyecto::MyForm^ inicioForm = gcnew Proyecto::MyForm();
		this->Visible = false;
		inicioForm->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btnCreditos_Click(System::Object^ sender, System::EventArgs^ e) {
		Proyecto::CreditosForm^ creditosForm = gcnew Proyecto::CreditosForm();
		this->Visible = false;
		creditosForm->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btnOrdenParcial_Click(System::Object^ sender, System::EventArgs^ e) {
		Proyecto::OrdenParcialForm^ ordenParcialForm = gcnew Proyecto::OrdenParcialForm();
		this->Visible = false;
		ordenParcialForm->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btnDiagramaHasse_Click(System::Object^ sender, System::EventArgs^ e) {
		Proyecto::DiagramaHasseForm^ diagramaHasseForm = gcnew Proyecto::DiagramaHasseForm();
		this->Visible = false;
		diagramaHasseForm->ShowDialog();
		this->Visible = true;
	}
};
}
