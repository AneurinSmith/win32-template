#pragma once
#include "include.h"
#include "wingui.h"
#include "core.h"
#include "tools/bitmap/bitmap.h"

class Window : public defwin<Window> {
friend class Core;

protected:
	void attach_wnd();

public:
	static int sys_height;
	static int sys_frame;
	Window();

	LRESULT init();

	LRESULT HandleMessage(HWND, UINT, WPARAM, LPARAM);
	LRESULT HandleDef(HWND, UINT, WPARAM, LPARAM);
	LRESULT HandleDWM(HWND, UINT, WPARAM, LPARAM, BOOL*);
	LRESULT HandleDarkMode(HWND, UINT, WPARAM, LPARAM);

private:
	ITaskbarList4* task_bar;
	HBITMAP cache_bm;
	Core core;

};

