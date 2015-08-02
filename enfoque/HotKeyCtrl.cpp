#include "HotKeyCtrl.h"

using namespace enfoque;

HotKeyCtrl::HotKeyCtrl()
{
	this->modifierKey = 0;
	this->virtualKey = 0;
	this->progName = L"";
}

HotKeyCtrl::SetVirtualKey(int listIndex)
{
	if (listIndex < 10) {
		this->virtualKey = 0x30 + listIndex;
	} else if (listIndex < 36) {
		this->virtualKey = 0x41 + (listIndex-10);
	} else {
		this->virtualKey = 0x70 + (listIndex-36);
	}
}