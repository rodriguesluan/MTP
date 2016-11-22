#pragma once

namespace projGU1 {

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
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::TextBox^  txbNome;
	private: System::Windows::Forms::CheckBox^  chkNome;
	private: System::Windows::Forms::CheckBox^  chkIdade;






	private: System::Windows::Forms::Label^  lblMensagem;
	private: System::Windows::Forms::Button^  btnExecutar;



	private: System::Windows::Forms::GroupBox^  grpCores;
	private: System::Windows::Forms::RadioButton^  rdbPreto;
	private: System::Windows::Forms::RadioButton^  rdbMarrom;



	private: System::Windows::Forms::RadioButton^  rdbBranco;



	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ComboBox^  cmbComidas;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->txbNome = (gcnew System::Windows::Forms::TextBox());
			this->chkNome = (gcnew System::Windows::Forms::CheckBox());
			this->chkIdade = (gcnew System::Windows::Forms::CheckBox());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->btnExecutar = (gcnew System::Windows::Forms::Button());
			this->grpCores = (gcnew System::Windows::Forms::GroupBox());
			this->rdbPreto = (gcnew System::Windows::Forms::RadioButton());
			this->rdbMarrom = (gcnew System::Windows::Forms::RadioButton());
			this->rdbBranco = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cmbComidas = (gcnew System::Windows::Forms::ComboBox());
			this->grpCores->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// txbNome
			// 
			this->txbNome->Cursor = System::Windows::Forms::Cursors::No;
			this->txbNome->HideSelection = false;
			this->txbNome->Location = System::Drawing::Point(32, 56);
			this->txbNome->Name = L"txbNome";
			this->txbNome->Size = System::Drawing::Size(349, 20);
			this->txbNome->TabIndex = 1;
			// 
			// chkNome
			// 
			this->chkNome->AutoSize = true;
			this->chkNome->Location = System::Drawing::Point(34, 91);
			this->chkNome->Name = L"chkNome";
			this->chkNome->Size = System::Drawing::Size(54, 17);
			this->chkNome->TabIndex = 2;
			this->chkNome->Text = L"Nome";
			this->chkNome->UseVisualStyleBackColor = true;
			// 
			// chkIdade
			// 
			this->chkIdade->AutoSize = true;
			this->chkIdade->Location = System::Drawing::Point(33, 124);
			this->chkIdade->Name = L"chkIdade";
			this->chkIdade->Size = System::Drawing::Size(53, 17);
			this->chkIdade->TabIndex = 3;
			this->chkIdade->Text = L"Idade";
			this->chkIdade->UseVisualStyleBackColor = true;
			// 
			// lblMensagem
			// 
			this->lblMensagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMensagem->Location = System::Drawing::Point(32, 13);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(523, 40);
			this->lblMensagem->TabIndex = 4;
			this->lblMensagem->Text = L"Dogão";
			this->lblMensagem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnExecutar
			// 
			this->btnExecutar->Location = System::Drawing::Point(32, 254);
			this->btnExecutar->Name = L"btnExecutar";
			this->btnExecutar->Size = System::Drawing::Size(75, 23);
			this->btnExecutar->TabIndex = 5;
			this->btnExecutar->Text = L"Executar";
			this->btnExecutar->UseVisualStyleBackColor = true;
			this->btnExecutar->Click += gcnew System::EventHandler(this, &Form1::btnExecutar_Click);
			// 
			// grpCores
			// 
			this->grpCores->Controls->Add(this->rdbPreto);
			this->grpCores->Controls->Add(this->rdbMarrom);
			this->grpCores->Controls->Add(this->rdbBranco);
			this->grpCores->Location = System::Drawing::Point(181, 91);
			this->grpCores->Name = L"grpCores";
			this->grpCores->Size = System::Drawing::Size(200, 135);
			this->grpCores->TabIndex = 6;
			this->grpCores->TabStop = false;
			this->grpCores->Text = L"cores";
			// 
			// rdbPreto
			// 
			this->rdbPreto->AutoSize = true;
			this->rdbPreto->Location = System::Drawing::Point(40, 100);
			this->rdbPreto->Name = L"rdbPreto";
			this->rdbPreto->Size = System::Drawing::Size(49, 17);
			this->rdbPreto->TabIndex = 2;
			this->rdbPreto->Text = L"preto";
			this->rdbPreto->UseVisualStyleBackColor = true;
			// 
			// rdbMarrom
			// 
			this->rdbMarrom->AutoSize = true;
			this->rdbMarrom->Location = System::Drawing::Point(40, 60);
			this->rdbMarrom->Name = L"rdbMarrom";
			this->rdbMarrom->Size = System::Drawing::Size(60, 17);
			this->rdbMarrom->TabIndex = 1;
			this->rdbMarrom->TabStop = true;
			this->rdbMarrom->Text = L"Marrom";
			this->rdbMarrom->UseVisualStyleBackColor = true;
			// 
			// rdbBranco
			// 
			this->rdbBranco->AutoSize = true;
			this->rdbBranco->Location = System::Drawing::Point(40, 20);
			this->rdbBranco->Name = L"rdbBranco";
			this->rdbBranco->Size = System::Drawing::Size(58, 17);
			this->rdbBranco->TabIndex = 0;
			this->rdbBranco->TabStop = true;
			this->rdbBranco->Text = L"branco";
			this->rdbBranco->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(405, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 244);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// cmbComidas
			// 
			this->cmbComidas->FormattingEnabled = true;
			this->cmbComidas->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"ração", L"fruta ", L"osso"});
			this->cmbComidas->Location = System::Drawing::Point(32, 183);
			this->cmbComidas->Name = L"cmbComidas";
			this->cmbComidas->Size = System::Drawing::Size(143, 21);
			this->cmbComidas->TabIndex = 8;
			this->cmbComidas->Text = L"Selecione Uma Comida";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 391);
			this->Controls->Add(this->cmbComidas);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->grpCores);
			this->Controls->Add(this->btnExecutar);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->chkIdade);
			this->Controls->Add(this->chkNome);
			this->Controls->Add(this->txbNome);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"DOG";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grpCores->ResumeLayout(false);
			this->grpCores->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 lblMensagem->Text = "Meu rato,";
				 if(chkNome->Checked)
					 lblMensagem->Text = lblMensagem->Text + "monstro,";
				 if(chkIdade->Checked)
				 lblMensagem->Text = lblMensagem->Text + "2 anos,";
				 lblMensagem->Text = lblMensagem->Text + "gosta de" + cmbComidas->SelectedItem->ToString() = ",";
				 lblMensagem->Text = lblMensagem->Text + txbUsuario->Text+ ".";
				 if(rbdBranco->Checked)
					 lblMensagem->ForeColor = System::Drawing::Color::Darkred;
				 if(rbdMarrom->Checked)
					 lblMensagem->ForeColor = System::Drawing::Color::Blue;
				 if(rbdPreto->Checked)
					 lblMensagem->ForeColor = System::Drawing::Color::Coral;
				
			 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				cmbComidas->SelectedIndex = 0;
		 }
private: System::Void btnExecutar_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

