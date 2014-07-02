#pragma once

namespace homeostasis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pcbBackground;
	private: System::Windows::Forms::Button^  btnAddOrg;
	private: System::Windows::Forms::Label^  lblTEST;
	protected: 

	protected: 

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
			this->pcbBackground = (gcnew System::Windows::Forms::PictureBox());
			this->btnAddOrg = (gcnew System::Windows::Forms::Button());
			this->lblTEST = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pcbBackground))->BeginInit();
			this->SuspendLayout();
			// 
			// pcbBackground
			// 
			this->pcbBackground->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pcbBackground->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pcbBackground->Location = System::Drawing::Point(12, 12);
			this->pcbBackground->Name = L"pcbBackground";
			this->pcbBackground->Size = System::Drawing::Size(570, 342);
			this->pcbBackground->TabIndex = 0;
			this->pcbBackground->TabStop = false;
			// 
			// btnAddOrg
			// 
			this->btnAddOrg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnAddOrg->Location = System::Drawing::Point(602, 34);
			this->btnAddOrg->Name = L"btnAddOrg";
			this->btnAddOrg->Size = System::Drawing::Size(111, 53);
			this->btnAddOrg->TabIndex = 1;
			this->btnAddOrg->Text = L"Add Elements";
			this->btnAddOrg->UseVisualStyleBackColor = true;
			this->btnAddOrg->Click += gcnew System::EventHandler(this, &Form1::btnAddOrg_Click);
			// 
			// lblTEST
			// 
			this->lblTEST->AutoSize = true;
			this->lblTEST->Location = System::Drawing::Point(112, 120);
			this->lblTEST->Name = L"lblTEST";
			this->lblTEST->Size = System::Drawing::Size(35, 13);
			this->lblTEST->TabIndex = 2;
			this->lblTEST->Text = L"label1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(729, 366);
			this->Controls->Add(this->lblTEST);
			this->Controls->Add(this->btnAddOrg);
			this->Controls->Add(this->pcbBackground);
			this->MinimumSize = System::Drawing::Size(700, 400);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pcbBackground))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddOrg_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 unsigned short int X;
				 X=X--;
				 lblTEST.text=X;
			 }
	};
}

