#pragma once

namespace Proyecto {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreditosForm
	/// </summary>
	public ref class CreditosForm : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ FondoCreditos = gcnew Bitmap("creditos.png");
	public:
		CreditosForm(void)
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
		~CreditosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
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
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &CreditosForm::timer1_Tick);
			// 
			// CreditosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 661);
			this->Name = L"CreditosForm";
			this->Text = L"CreditosForm";
			this->Load += gcnew System::EventHandler(this, &CreditosForm::CreditosForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CreditosForm_Load(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		BufferedGraphicsContext^ Espacio = BufferedGraphicsManager::Current;
		BufferedGraphics^ Buffer = Espacio->Allocate(g, this->ClientRectangle);
		Buffer->Graphics->DrawImage(FondoCreditos, 0, 0, (int)Buffer->Graphics->VisibleClipBounds.Width, (int)Buffer->Graphics->VisibleClipBounds.Height);
		Buffer->Render(g);
		delete Buffer;
		delete Espacio;
		delete g;
	}
	};
}
