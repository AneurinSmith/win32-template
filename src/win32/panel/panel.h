
#pragma once
#include "defwin.h"

class Panel : public defwin {

public:
	Panel();
	BOOL init();

protected:
	LRESULT HandleMessage(HWND wnd, UINT msg, WPARAM wpm, LPARAM lpm);

};
