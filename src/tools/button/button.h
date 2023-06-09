
#include "include.h"
#include "defwin.h"

enum State { normal, hover, click };

class Button {

public:
	HICON icon;
	SIZE iSize = { 16,16 };
	COLORREF cols[3] = { COL_HEAD, COL_HEAD + 0x101010, COL_HEAD + 0x202020 };

	Button() = default;

	Button(RECT _r);
	Button(RECT _r, HICON _i);

	void move(POINT _p);
	void draw(Renderer _renderer);
	bool contains(POINT _p);

	void set_state(Renderer _renderer, INT _state);

protected:
	RECT rect;
	SIZE size;
	INT state = 0;

};