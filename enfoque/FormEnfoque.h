#pragma once

namespace enfoque {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Security::Permissions;
	using namespace System::IO;
	using namespace System::Diagnostics;


	/// <summary>
	/// Summary for FormEnfoque
	/// </summary>
	public ref class FormEnfoque : public System::Windows::Forms::Form
	{
	public:
		List<HotKeyCtrl^> listHotKeys;
		FormEnfoque(void)
		{
			InitializeComponent();

			PopulateHotkeys();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormEnfoque()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControlMain;
	private: System::Windows::Forms::TabPage^  tabPageHK;
	private: System::Windows::Forms::TabPage^  tabPageCam;
	private: System::Windows::Forms::TabPage^  tabPageAbout;
	private: System::Windows::Forms::Label^  labelAboutTitle;
	protected: 

	protected: 




	private: System::Windows::Forms::Label^  labelDevelop;

	private: System::Windows::Forms::DataGridView^  dataGridViewHK;









	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::ComboBox^  comboBoxKey;

	private: System::Windows::Forms::CheckBox^  checkBoxWin;

	private: System::Windows::Forms::CheckBox^  checkBoxAlt;
	private: System::Windows::Forms::CheckBox^  checkBoxCtrl;


	private: System::Windows::Forms::CheckBox^  checkBoxShift;
	private: System::Windows::Forms::Button^  buttonSaveHK;


	private: System::Windows::Forms::TextBox^  textBoxProgName;
	private: System::Windows::Forms::Button^  buttonCancelHK;
	private: System::Windows::Forms::Label^  labelUnderDev;
	private: System::Windows::Forms::Button^  buttonDeleteHK;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^  restoreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;


	private: System::ComponentModel::IContainer^  components;




















	protected: 

	private:
		HWND hWnd;
		String^ dirName;
	private: System::Windows::Forms::TabPage^  tabPageCB;
			 String^ fileName;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEnfoque::typeid));
			this->tabControlMain = (gcnew System::Windows::Forms::TabControl());
			this->tabPageHK = (gcnew System::Windows::Forms::TabPage());
			this->buttonDeleteHK = (gcnew System::Windows::Forms::Button());
			this->buttonCancelHK = (gcnew System::Windows::Forms::Button());
			this->textBoxProgName = (gcnew System::Windows::Forms::TextBox());
			this->buttonSaveHK = (gcnew System::Windows::Forms::Button());
			this->comboBoxKey = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxWin = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxAlt = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCtrl = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxShift = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridViewHK = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPageCam = (gcnew System::Windows::Forms::TabPage());
			this->labelUnderDev = (gcnew System::Windows::Forms::Label());
			this->tabPageAbout = (gcnew System::Windows::Forms::TabPage());
			this->labelDevelop = (gcnew System::Windows::Forms::Label());
			this->labelAboutTitle = (gcnew System::Windows::Forms::Label());
			this->notifyIcon = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->restoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPageCB = (gcnew System::Windows::Forms::TabPage());
			this->tabControlMain->SuspendLayout();
			this->tabPageHK->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewHK))->BeginInit();
			this->tabPageCam->SuspendLayout();
			this->tabPageAbout->SuspendLayout();
			this->contextMenuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControlMain
			// 
			this->tabControlMain->Controls->Add(this->tabPageHK);
			this->tabControlMain->Controls->Add(this->tabPageCam);
			this->tabControlMain->Controls->Add(this->tabPageCB);
			this->tabControlMain->Controls->Add(this->tabPageAbout);
			this->tabControlMain->Location = System::Drawing::Point(12, 12);
			this->tabControlMain->Name = L"tabControlMain";
			this->tabControlMain->SelectedIndex = 0;
			this->tabControlMain->Size = System::Drawing::Size(234, 245);
			this->tabControlMain->TabIndex = 0;
			// 
			// tabPageHK
			// 
			this->tabPageHK->Controls->Add(this->buttonDeleteHK);
			this->tabPageHK->Controls->Add(this->buttonCancelHK);
			this->tabPageHK->Controls->Add(this->textBoxProgName);
			this->tabPageHK->Controls->Add(this->buttonSaveHK);
			this->tabPageHK->Controls->Add(this->comboBoxKey);
			this->tabPageHK->Controls->Add(this->checkBoxWin);
			this->tabPageHK->Controls->Add(this->checkBoxAlt);
			this->tabPageHK->Controls->Add(this->checkBoxCtrl);
			this->tabPageHK->Controls->Add(this->checkBoxShift);
			this->tabPageHK->Controls->Add(this->dataGridViewHK);
			this->tabPageHK->Location = System::Drawing::Point(4, 22);
			this->tabPageHK->Name = L"tabPageHK";
			this->tabPageHK->Padding = System::Windows::Forms::Padding(3);
			this->tabPageHK->Size = System::Drawing::Size(226, 219);
			this->tabPageHK->TabIndex = 0;
			this->tabPageHK->Text = L"Hotkeys";
			this->tabPageHK->UseVisualStyleBackColor = true;
			// 
			// buttonDeleteHK
			// 
			this->buttonDeleteHK->Location = System::Drawing::Point(124, 145);
			this->buttonDeleteHK->Name = L"buttonDeleteHK";
			this->buttonDeleteHK->Size = System::Drawing::Size(75, 23);
			this->buttonDeleteHK->TabIndex = 17;
			this->buttonDeleteHK->Text = L"Delete";
			this->buttonDeleteHK->UseVisualStyleBackColor = true;
			this->buttonDeleteHK->Visible = false;
			this->buttonDeleteHK->Click += gcnew System::EventHandler(this, &FormEnfoque::buttonDeleteHK_Click);
			// 
			// buttonCancelHK
			// 
			this->buttonCancelHK->Location = System::Drawing::Point(76, 175);
			this->buttonCancelHK->Name = L"buttonCancelHK";
			this->buttonCancelHK->Size = System::Drawing::Size(75, 23);
			this->buttonCancelHK->TabIndex = 16;
			this->buttonCancelHK->Text = L"Cancel";
			this->buttonCancelHK->UseVisualStyleBackColor = true;
			this->buttonCancelHK->Visible = false;
			this->buttonCancelHK->Click += gcnew System::EventHandler(this, &FormEnfoque::buttonCancelHK_Click);
			// 
			// textBoxProgName
			// 
			this->textBoxProgName->Location = System::Drawing::Point(63, 113);
			this->textBoxProgName->Name = L"textBoxProgName";
			this->textBoxProgName->Size = System::Drawing::Size(100, 20);
			this->textBoxProgName->TabIndex = 15;
			this->textBoxProgName->Text = L"Program Name";
			this->textBoxProgName->Visible = false;
			// 
			// buttonSaveHK
			// 
			this->buttonSaveHK->Location = System::Drawing::Point(28, 146);
			this->buttonSaveHK->Name = L"buttonSaveHK";
			this->buttonSaveHK->Size = System::Drawing::Size(75, 23);
			this->buttonSaveHK->TabIndex = 14;
			this->buttonSaveHK->Text = L"Save";
			this->buttonSaveHK->UseVisualStyleBackColor = true;
			this->buttonSaveHK->Visible = false;
			this->buttonSaveHK->Click += gcnew System::EventHandler(this, &FormEnfoque::buttonSaveHK_Click);
			// 
			// comboBoxKey
			// 
			this->comboBoxKey->FormattingEnabled = true;
			this->comboBoxKey->Items->AddRange(gcnew cli::array< System::Object^  >(48) {L"0", L"1", L"2", L"3", L"4", L"5", L"6", L"7", 
				L"8", L"9", L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", 
				L"T", L"U", L"V", L"W", L"X", L"Y", L"Z", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", L"F12"});
			this->comboBoxKey->Location = System::Drawing::Point(132, 72);
			this->comboBoxKey->Name = L"comboBoxKey";
			this->comboBoxKey->Size = System::Drawing::Size(47, 21);
			this->comboBoxKey->TabIndex = 13;
			this->comboBoxKey->Text = L"Key";
			this->comboBoxKey->Visible = false;
			// 
			// checkBoxWin
			// 
			this->checkBoxWin->AutoSize = true;
			this->checkBoxWin->Location = System::Drawing::Point(72, 85);
			this->checkBoxWin->Name = L"checkBoxWin";
			this->checkBoxWin->Size = System::Drawing::Size(45, 17);
			this->checkBoxWin->TabIndex = 12;
			this->checkBoxWin->Text = L"Win";
			this->checkBoxWin->UseVisualStyleBackColor = true;
			this->checkBoxWin->Visible = false;
			// 
			// checkBoxAlt
			// 
			this->checkBoxAlt->AutoSize = true;
			this->checkBoxAlt->Location = System::Drawing::Point(72, 61);
			this->checkBoxAlt->Name = L"checkBoxAlt";
			this->checkBoxAlt->Size = System::Drawing::Size(38, 17);
			this->checkBoxAlt->TabIndex = 11;
			this->checkBoxAlt->Text = L"Alt";
			this->checkBoxAlt->UseVisualStyleBackColor = true;
			this->checkBoxAlt->Visible = false;
			// 
			// checkBoxCtrl
			// 
			this->checkBoxCtrl->AutoSize = true;
			this->checkBoxCtrl->Location = System::Drawing::Point(18, 85);
			this->checkBoxCtrl->Name = L"checkBoxCtrl";
			this->checkBoxCtrl->Size = System::Drawing::Size(41, 17);
			this->checkBoxCtrl->TabIndex = 10;
			this->checkBoxCtrl->Text = L"Ctrl";
			this->checkBoxCtrl->UseVisualStyleBackColor = true;
			this->checkBoxCtrl->Visible = false;
			// 
			// checkBoxShift
			// 
			this->checkBoxShift->AutoSize = true;
			this->checkBoxShift->Location = System::Drawing::Point(18, 61);
			this->checkBoxShift->Name = L"checkBoxShift";
			this->checkBoxShift->Size = System::Drawing::Size(47, 17);
			this->checkBoxShift->TabIndex = 9;
			this->checkBoxShift->Text = L"Shift";
			this->checkBoxShift->UseVisualStyleBackColor = true;
			this->checkBoxShift->Visible = false;
			// 
			// dataGridViewHK
			// 
			this->dataGridViewHK->AllowUserToResizeColumns = false;
			this->dataGridViewHK->AllowUserToResizeRows = false;
			this->dataGridViewHK->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridViewHK->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridViewHK->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewHK->ColumnHeadersVisible = false;
			this->dataGridViewHK->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->Column1, 
				this->Column2});
			this->dataGridViewHK->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridViewHK->Location = System::Drawing::Point(2, 0);
			this->dataGridViewHK->MultiSelect = false;
			this->dataGridViewHK->Name = L"dataGridViewHK";
			this->dataGridViewHK->RowHeadersVisible = false;
			this->dataGridViewHK->Size = System::Drawing::Size(221, 219);
			this->dataGridViewHK->TabIndex = 8;
			this->dataGridViewHK->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormEnfoque::dataGridViewHK_CellClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Hotkey";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->HeaderText = L"Program";
			this->Column2->Name = L"Column2";
			// 
			// tabPageCam
			// 
			this->tabPageCam->Controls->Add(this->labelUnderDev);
			this->tabPageCam->Location = System::Drawing::Point(4, 22);
			this->tabPageCam->Name = L"tabPageCam";
			this->tabPageCam->Padding = System::Windows::Forms::Padding(3);
			this->tabPageCam->Size = System::Drawing::Size(226, 219);
			this->tabPageCam->TabIndex = 1;
			this->tabPageCam->Text = L"Camera";
			this->tabPageCam->UseVisualStyleBackColor = true;
			// 
			// labelUnderDev
			// 
			this->labelUnderDev->AutoSize = true;
			this->labelUnderDev->Location = System::Drawing::Point(62, 103);
			this->labelUnderDev->Name = L"labelUnderDev";
			this->labelUnderDev->Size = System::Drawing::Size(102, 13);
			this->labelUnderDev->TabIndex = 0;
			this->labelUnderDev->Text = L"Under Development";
			// 
			// tabPageAbout
			// 
			this->tabPageAbout->Controls->Add(this->labelDevelop);
			this->tabPageAbout->Controls->Add(this->labelAboutTitle);
			this->tabPageAbout->Location = System::Drawing::Point(4, 22);
			this->tabPageAbout->Name = L"tabPageAbout";
			this->tabPageAbout->Padding = System::Windows::Forms::Padding(3);
			this->tabPageAbout->Size = System::Drawing::Size(226, 219);
			this->tabPageAbout->TabIndex = 2;
			this->tabPageAbout->Text = L"About";
			this->tabPageAbout->UseVisualStyleBackColor = true;
			// 
			// labelDevelop
			// 
			this->labelDevelop->AutoSize = true;
			this->labelDevelop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6));
			this->labelDevelop->Location = System::Drawing::Point(72, 207);
			this->labelDevelop->Name = L"labelDevelop";
			this->labelDevelop->Size = System::Drawing::Size(151, 9);
			this->labelDevelop->TabIndex = 1;
			this->labelDevelop->Text = L"Developed by Srinath. Licensed under GPL.";
			// 
			// labelAboutTitle
			// 
			this->labelAboutTitle->AutoSize = true;
			this->labelAboutTitle->Location = System::Drawing::Point(38, 64);
			this->labelAboutTitle->Name = L"labelAboutTitle";
			this->labelAboutTitle->Size = System::Drawing::Size(150, 13);
			this->labelAboutTitle->TabIndex = 0;
			this->labelAboutTitle->Text = L"enfoque - get that focus back!";
			// 
			// notifyIcon
			// 
			this->notifyIcon->ContextMenuStrip = this->contextMenuStrip;
			this->notifyIcon->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"notifyIcon.Icon")));
			this->notifyIcon->Text = L"enfoque";
			this->notifyIcon->Visible = true;
			this->notifyIcon->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &FormEnfoque::notifyIcon_MouseDoubleClick);
			// 
			// contextMenuStrip
			// 
			this->contextMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->restoreToolStripMenuItem, 
				this->quitToolStripMenuItem});
			this->contextMenuStrip->Name = L"contextMenuStrip1";
			this->contextMenuStrip->Size = System::Drawing::Size(153, 70);
			// 
			// restoreToolStripMenuItem
			// 
			this->restoreToolStripMenuItem->Name = L"restoreToolStripMenuItem";
			this->restoreToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->restoreToolStripMenuItem->Text = L"Restore";
			this->restoreToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormEnfoque::restoreToolStripMenuItem_Click);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &FormEnfoque::quitToolStripMenuItem_Click);
			// 
			// tabPageCB
			// 
			this->tabPageCB->Location = System::Drawing::Point(4, 22);
			this->tabPageCB->Name = L"tabPageCB";
			this->tabPageCB->Size = System::Drawing::Size(226, 219);
			this->tabPageCB->TabIndex = 3;
			this->tabPageCB->Text = L"Clipboard";
			this->tabPageCB->UseVisualStyleBackColor = true;
			// 
			// FormEnfoque
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(258, 269);
			this->Controls->Add(this->tabControlMain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"FormEnfoque";
			this->Text = L"enfoque";
			this->Closed += gcnew System::EventHandler(this, &FormEnfoque::FormEnfoque_Closed);
			this->Resize += gcnew System::EventHandler(this, &FormEnfoque::FormEnfoque_Resize);
			this->tabControlMain->ResumeLayout(false);
			this->tabPageHK->ResumeLayout(false);
			this->tabPageHK->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewHK))->EndInit();
			this->tabPageCam->ResumeLayout(false);
			this->tabPageCam->PerformLayout();
			this->tabPageAbout->ResumeLayout(false);
			this->tabPageAbout->PerformLayout();
			this->contextMenuStrip->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void PopulateHotkeys(void)
			 {
				 this->hWnd = (HWND)this->Handle.ToPointer();
				 int i;

				 // create dir
				 this->dirName = Environment::GetEnvironmentVariable(L"AppData") + L"\\enfoque";
				 this->fileName = dirName+L"\\hotkeys.dat";
				 if (!Directory::Exists(this->dirName)) {
					 Directory::CreateDirectory(this->dirName);
					 return;
				 }

				 // populate the hotkeylist
				 if (!File::Exists(this->fileName)) {
					 return;
				 }
				 FileStream^ stream = gcnew FileStream(this->fileName, FileMode::Open);
				 BinaryReader^ reader = gcnew BinaryReader(stream);

				 while (true) {
					 if (reader->PeekChar() == -1) {
						 break;
					 }
					 HotKeyCtrl^ hkc = gcnew HotKeyCtrl();
					 hkc->modifierKeys = reader->ReadInt32();
					 hkc->virtualKey = reader->ReadInt32();
					 hkc->comboIndex = reader->ReadInt32();
					 hkc->keyString = reader->ReadString();
					 hkc->progName = reader->ReadString();
					 this->listHotKeys.Add(hkc);
				 }
				 reader->Close();
				 stream->Close();

				 for(i=0; i<this->listHotKeys.Count; i++) {
					 this->dataGridViewHK->Rows->Add();

					 // populate the datagrid
					 this->dataGridViewHK->Rows[i]->Cells[0]->Value = this->listHotKeys[i]->keyString;
					 this->dataGridViewHK->Rows[i]->Cells[1]->Value = this->listHotKeys[i]->progName;

					 // register hotkeys
					 RegisterHotKey (hWnd, i, this->listHotKeys[i]->modifierKeys, this->listHotKeys[i]->virtualKey);
				 }
			 }
			 /* returns 0-index -> if only one found!!
			 * returns -1 -> if not found
			 * returns -2 -> if both fields are found!! */
	private: int FindHKCtrlInList(HotKeyCtrl^ hkc)
			 {
				 int i;
				 int ret = -1;

				 for (i=0;i<this->listHotKeys.Count;i++) {
					 if (!(String::Compare(this->listHotKeys[i]->keyString, hkc->keyString)) ||
						 !(String::Compare(this->listHotKeys[i]->progName, hkc->progName))) {
							 if (ret == -1) {
								 // first find
								 ret = i;
							 } else {
								 // subsequent finds
								 ret = -2;
							 }
					 }
				 }
				 return ret;
			 }
	private: int FindHKCtrlInDataGrid(HotKeyCtrl^ hkc)
			 {
				 int i;

				 for (i=0;i<this->dataGridViewHK->RowCount-1;i++) {
					 if (!(String::Compare(this->dataGridViewHK->Rows[i]->Cells[0]->Value->ToString(), hkc->keyString)) ||
						 !(String::Compare(this->dataGridViewHK->Rows[i]->Cells[1]->Value->ToString(), hkc->progName))) {
							 return i;
					 }
				 }
				 return -1;
			 }
	protected:
		[SecurityPermission(SecurityAction::Demand, Flags=SecurityPermissionFlag::UnmanagedCode)]
		virtual void WndProc(Message% m) override
		{
			int listIndex;
			int i;

			switch (m.Msg)
			{
			case WM_HOTKEY:
				listIndex = (int)m.WParam;

				// lookup by pid
				if (this->listHotKeys[listIndex]->pid) {
					try {
						Process^ proc = Process::GetProcessById(this->listHotKeys[listIndex]->pid);

						if (proc->MainWindowTitle->ToString()->Contains(this->listHotKeys[listIndex]->progName)) {
							// pid lookup matches
							HWND dsrdHwnd = (HWND)proc->MainWindowHandle.ToPointer();
							SetForegroundWindow(dsrdHwnd);
							ShowWindow(dsrdHwnd, SW_MAXIMIZE);
						} else {
							this->listHotKeys[listIndex]->pid = 0;
						}
					} catch (...) {
						// process expired
						this->listHotKeys[listIndex]->pid = 0;
					}
				}

				// lookup all processes
				if (!this->listHotKeys[listIndex]->pid) {
					array<Process^>^ processes = Process::GetProcesses();

					for (i=0; i<processes->Length; i++) {
						if (processes[i]->MainWindowTitle->ToString()->Contains(this->listHotKeys[listIndex]->progName)) {
							HWND dsrdHwnd = (HWND)processes[i]->MainWindowHandle.ToPointer();
							SetForegroundWindow(dsrdHwnd);
							ShowWindow(dsrdHwnd, SW_MAXIMIZE);
							this->listHotKeys[listIndex]->pid = processes[i]->Id;
							break;
						}
					}
				}
				break;
			}
			Form::WndProc(m);
		}
	private: bool CheckSaneValues()
			 {
				 if (!(this->checkBoxShift->Checked ||
					 this->checkBoxAlt->Checked ||
					 this->checkBoxCtrl->Checked ||
					 this->checkBoxWin->Checked)) {
						 MessageBox::Show(L"Please select a Modifier Key!");
						 return false;
				 }
				 if (!this->textBoxProgName->Text) {
					 MessageBox::Show(L"Please enter the Program Title!");
					 return false;
				 }
				 if (this->comboBoxKey->SelectedIndex == -1) {
					 MessageBox::Show(L"Please select a Key!");
					 return false;
				 }

				 return true;
			 }
	private: void FillHotKeyCtrl(HotKeyCtrl^ hkc)
			 {
				 bool flag = false;
				 if (this->checkBoxShift->Checked) {
					 hkc->keyString += L"Shift";
					 hkc->modifierKeys |= MOD_SHIFT;
					 flag = true;
				 }
				 if (this->checkBoxAlt->Checked) {
					 if (flag)
						 hkc->keyString += L"+Alt";
					 else
						 hkc->keyString += L"Alt";
					 hkc->modifierKeys |= MOD_ALT;
					 flag = true;
				 }
				 if (this->checkBoxCtrl->Checked) {
					 if (flag)
						 hkc->keyString += L"+Ctrl";
					 else
						 hkc->keyString += L"Ctrl";
					 hkc->modifierKeys |= MOD_CONTROL;
					 flag = true;
				 }
				 if (this->checkBoxWin->Checked) {
					 if (flag)
						 hkc->keyString += L"+Win";
					 else
						 hkc->keyString += L"Win";
					 hkc->modifierKeys |= MOD_WIN;
				 }
				 hkc->keyString += L"+" + this->comboBoxKey->SelectedItem->ToString();
				 hkc->SetVirtualKeyAndIndex(this->comboBoxKey->SelectedIndex);
				 hkc->progName = this->textBoxProgName->Text;
			 }
	private: void ToggleDataGridAndCheckBoxes()
			 {
				 this->buttonSaveHK->Visible = !this->buttonSaveHK->Visible;
				 this->buttonCancelHK->Visible = !this->buttonCancelHK->Visible;
				 this->buttonDeleteHK->Visible = !this->buttonDeleteHK->Visible;
				 this->checkBoxShift->Visible = !this->checkBoxShift->Visible;
				 this->checkBoxAlt->Visible = !this->checkBoxAlt->Visible;
				 this->checkBoxCtrl->Visible = !this->checkBoxCtrl->Visible;
				 this->checkBoxWin->Visible = !this->checkBoxWin->Visible;
				 this->textBoxProgName->Visible = !this->textBoxProgName->Visible;
				 this->comboBoxKey->Visible = !this->comboBoxKey->Visible;
				 this->dataGridViewHK->Visible = !this->dataGridViewHK->Visible;
			 }
	private: System::Void dataGridViewHK_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 // display
				 ToggleDataGridAndCheckBoxes();

				 int rowIndex = this->dataGridViewHK->SelectedCells[0]->RowIndex;
				 if ((rowIndex == this->dataGridViewHK->Rows->Count-1) || (rowIndex == -1)) {
					 return;
				 }

				 HotKeyCtrl ^hkc = gcnew HotKeyCtrl;
				 hkc->keyString = this->dataGridViewHK->Rows[rowIndex]->Cells[0]->Value->ToString();
				 hkc->progName = this->dataGridViewHK->Rows[rowIndex]->Cells[1]->Value->ToString();

				 int listIndex = FindHKCtrlInDataGrid(hkc);
				 if (listIndex >= 0) {
					 this->checkBoxShift->Checked = (this->listHotKeys[listIndex]->modifierKeys & MOD_SHIFT) != 0;
					 this->checkBoxAlt->Checked = (this->listHotKeys[listIndex]->modifierKeys & MOD_ALT) != 0;
					 this->checkBoxCtrl->Checked = (this->listHotKeys[listIndex]->modifierKeys & MOD_CONTROL) != 0;
					 this->checkBoxWin->Checked = (this->listHotKeys[listIndex]->modifierKeys & MOD_WIN) != 0;
					 this->comboBoxKey->SelectedIndex = this->listHotKeys[listIndex]->comboIndex;
					 this->textBoxProgName->Text = this->listHotKeys[listIndex]->progName;
				 }
			 }
	private: System::Void buttonSaveHK_Click(System::Object^  sender, System::EventArgs^  e) {
				 // check sanity
				 if (!CheckSaneValues()) {
					 return;
				 }

				 // unregister hotkeys
				 // better to unregister and again register so as to prevent holes!
				 for (int i=0; i<this->listHotKeys.Count; i++) {
					 UnregisterHotKey(this->hWnd, i);
				 }

				 // entry to the list
				 HotKeyCtrl^ hkc = gcnew HotKeyCtrl();
				 int listIndex, rowIndex;

				 FillHotKeyCtrl(hkc);

				 listIndex = FindHKCtrlInList(hkc);
				 // check existence
				 if (listIndex >= 0) {
					 // existing entry
					 // update the entry in hotkeylist
					 this->listHotKeys[listIndex]->modifierKeys = hkc->modifierKeys;
					 this->listHotKeys[listIndex]->virtualKey = hkc->virtualKey;
					 this->listHotKeys[listIndex]->keyString = hkc->keyString;
					 this->listHotKeys[listIndex]->comboIndex = hkc->comboIndex;
					 this->listHotKeys[listIndex]->progName = hkc->progName;

					 // update the entry in datagrid
					 rowIndex = FindHKCtrlInDataGrid(hkc);
				 } else if (listIndex == -2) {
					 // two entries found!
					 MessageBox::Show(L"Conflicting hotkeys!");
					 return;
				 } else {
					 // new entry
					 // add to the hotkeylist
					 this->listHotKeys.Add(hkc);

					 // add to the datagrid
					 this->dataGridViewHK->Rows->Add();
					 rowIndex = this->dataGridViewHK->RowCount - 2;
				 }

				 this->dataGridViewHK->Rows[rowIndex]->Cells[0]->Value = hkc->keyString;
				 this->dataGridViewHK->Rows[rowIndex]->Cells[1]->Value = hkc->progName;

				 // register hotkeys
				 for (int i=0; i<this->listHotKeys.Count; i++) {
					 RegisterHotKey (hWnd, i, this->listHotKeys[i]->modifierKeys, this->listHotKeys[i]->virtualKey);
				 }

				 // display
				 ToggleDataGridAndCheckBoxes();
			 }
	private: System::Void buttonCancelHK_Click(System::Object^  sender, System::EventArgs^  e) {
				 // display
				 ToggleDataGridAndCheckBoxes();
			 }
	private: System::Void buttonDeleteHK_Click(System::Object^  sender, System::EventArgs^  e) {
				 // check sanity
				 if (!CheckSaneValues()) {
					 return;
				 }

				 // unregister hotkeys
				 // better to unregister and again register so as to prevent holes!
				 for (int i=0; i<this->listHotKeys.Count; i++) {
					 UnregisterHotKey(this->hWnd, i);
				 }

				 // remove from hotkeylist and datagrid
				 HotKeyCtrl^ hkc = gcnew HotKeyCtrl();
				 int listIndex, rowIndex;

				 FillHotKeyCtrl(hkc);

				 listIndex = FindHKCtrlInList(hkc);
				 // check existence
				 if (listIndex >= 0) {
					 // existing entry
					 this->listHotKeys.RemoveAt(listIndex);

					 rowIndex = FindHKCtrlInDataGrid(hkc);
					 this->dataGridViewHK->Rows->RemoveAt(rowIndex);
				 } else if (listIndex == -2) {
					 // two entries found!
					 MessageBox::Show(L"Conflicting hotkeys!");
					 return;
				 } else if (listIndex == -1) {
					 // entry not found!
					 MessageBox::Show(L"Hotkey not found!");
					 return;
				 }

				 // register hotkeys
				 for (int i=0; i<this->listHotKeys.Count; i++) {
					 RegisterHotKey (hWnd, i, this->listHotKeys[i]->modifierKeys, this->listHotKeys[i]->virtualKey);
				 }

				 // display
				 ToggleDataGridAndCheckBoxes();
			 }
	private: System::Void FormEnfoque_Resize(System::Object^  sender, System::EventArgs^  e) {
				 if (this->WindowState == FormWindowState::Minimized) {
					 this->Hide();
				 }
			 }
	private: System::Void FormEnfoque_Closed(System::Object^  sender, System::EventArgs^  e) {
				 int i;

				 FileStream^ stream = gcnew FileStream(this->fileName, FileMode::Create);
				 BinaryWriter^ writer = gcnew BinaryWriter(stream);

				 for (i=0; i<this->listHotKeys.Count; i++) {
					 writer->Write(this->listHotKeys[i]->modifierKeys);
					 writer->Write(this->listHotKeys[i]->virtualKey);
					 writer->Write(this->listHotKeys[i]->comboIndex);
					 writer->Write(this->listHotKeys[i]->keyString);
					 writer->Write(this->listHotKeys[i]->progName);
				 }
				 writer->Close();
				 stream->Close();
			 }
	private: System::Void notifyIcon_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->Show();
				 this->WindowState = FormWindowState::Normal;
			 }
	private: System::Void restoreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Show();
				 this->WindowState = FormWindowState::Normal;
			 }
	private: System::Void quitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	};
}