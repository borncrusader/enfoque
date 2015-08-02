#pragma once

namespace enfoque {
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class HotKeyCtrl
	{
	public:
		int modifierKeys;
		int virtualKey;
		String^ keyString;
		String^ progName;
		int comboIndex;
		int pid;

		HotKeyCtrl(void)
		{
			this->modifierKeys = 0;
			this->virtualKey = 0;
			this->comboIndex = 0;
			this->pid = 0;
			this->keyString = L"";
			this->progName = L"";
		}
		void SetVirtualKeyAndIndex(int listIndex)
		{
			this->comboIndex = listIndex;
			if (listIndex < 10) {
				this->virtualKey = 0x30 + listIndex;
			} else if (listIndex < 36) {
				this->virtualKey = 0x41 + (listIndex-10);
			} else {
				this->virtualKey = 0x70 + (listIndex-36);
			}
		}
	};	
}