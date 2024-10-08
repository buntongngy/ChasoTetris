#include "block.h"

class UBlock : public Block
{
public:
	UBlock()
	{
		id = 8;
		cells[0] = { Position(0, 0), Position(0, 2), Position(1, 0), Position(1, 1), Position(1,2) };
		cells[1] = { Position(0, 0), Position(0, 1), Position(1, 0), Position(2, 0), Position(2,1) };
		cells[2] = { Position(1, 0), Position(1, 1), Position(1, 2), Position(2, 0), Position(2,2) };
		cells[3] = { Position(0, 1), Position(0, 2), Position(1, 2), Position(2, 1), Position(2,2) };
		Move(0, 3);
	}
};

class FBlock : public Block
{
public:
	FBlock()
	{
		id = 9;
		cells[0] = { Position(0, 1), Position(0, 2), Position(1, 1), Position(2, 1), Position(2,2), Position(3,1) };
		cells[1] = { Position(0,0),  Position(0,1),  Position(0,2),  Position(0,3),  Position(1,1), Position(1,3) };
		cells[2] = { Position(0, 1), Position(1, 0), Position(1, 1), Position(2, 1), Position(3,0), Position(3,1) };
		cells[3] = { Position(0, 0), Position(0, 2), Position(1, 0), Position(1, 1), Position(1,2), Position(1,3) };
		Move(0, 3);
	}
};

class DotBlock : public Block
{
public:
	DotBlock()
	{
		id = 10;
		cells[0] = { Position(0,1) };
		Move(0, 5);
	}
};

class CommaBlock : public Block
{
public:
	CommaBlock()
	{
		id = 11;
		cells[0] = { Position(0,1), Position(1,1) };
		cells[1] = { Position(0,0), Position(0,1) };
		Move(0, 5);
	}
};

class BigOBlock : public Block
{
public:
	BigOBlock()
	{
		id = 12;
		cells[0] = { Position(0, 0), Position(0, 1), Position(0,2), Position(0,3), Position(1, 0), Position(1, 1), Position(1,2), Position(1,3),
					 Position(2, 0), Position(2, 1), Position(2,2), Position(2,3), Position(3, 0), Position(3, 1), Position(3,2), Position(3,3) };
		Move(0, 4);
	}
};

class BigLBlock : public Block
{
public:
	BigLBlock() {
		id = 13;
		cells[0] = { Position(0,4), Position(0,5), Position(1,4), Position(1,5), Position(2,0), Position(2,1), Position(2,2), Position(2,3),
					Position(2,4), Position(2,5), Position(3,0), Position(3,1), Position(3,2), Position(3,3), Position(3,4), Position(3,5)};
		cells[1] = { Position(0,0), Position(0,1), Position(1,0), Position(1,1), Position(2,0), Position(2,1), Position(3,0), Position(3,1),
					Position(4,0), Position(4,1), Position(4,2), Position(4,3), Position(5,0), Position(5,1), Position(5,2), Position(5,3)};
		cells[2] = { Position(0,0), Position(0,1), Position(0,2),Position(0,3),Position(0,4), Position(0,5), Position(1,0), Position(1,1),
					Position(1,2), Position(1,3),Position(1,4), Position(1,5), Position(2,0), Position(2,1), Position(3,0), Position(3,1)};
		cells[3] = { Position(0, 0), Position(0, 1), Position(0,2), Position(0,3),Position(1, 0), Position(1,1), Position(1,2), Position(1,3),
					Position(2,2),Position(2, 3),Position(3,2),Position(3,3), Position(4,2), Position(4,3), Position(5,2), Position(5,3)};
		Move(0, 3);

	}
};

class BigJBlock : public Block
{
public:
	BigJBlock()
	{
		id = 14;
		cells[0] = { Position(0,0), Position(0,1), Position(1,0), Position(1,1), Position(2,0), Position(2,1), Position(2,2),Position(2,3), 
					Position(2,4), Position(2,5), Position(3,0), Position(3,1), Position(3,2), Position(3,3), Position(3,4), Position(3,5)};
		cells[1] = { Position(0, 0), Position(0, 1), Position(0,2), Position(0,3),Position(1, 0), Position(1,1), Position(1,2), Position(1,3),
					Position(2,0),Position(2, 1),Position(3,0),Position(3,1), Position(4,0), Position(4,1), Position(5,0), Position(5,1) };	
		cells[2] = { Position(0,0), Position(0,1), Position(0,2),Position(0,3),Position(0,4), Position(0,5), Position(1,0), Position(1,1),
					Position(1,2), Position(1,3),Position(1,4), Position(1,5), Position(2,4), Position(2,5), Position(3,4), Position(3,5)};
		cells[3] = { Position(0,4), Position(0,5), Position(1,4), Position(1,5), Position(2,4), Position(2,5), Position(3,4), Position(3,5),
					Position(4,2), Position(4,3), Position(4,4), Position(4,5), Position(5,2), Position(5,3), Position(5,4), Position(5,5) };
		Move(0, 3);
	}
};

class BigSBlock : public Block
{
public:
	BigSBlock()
	{
		id = 15;
		cells[0] = { Position(0,2), Position(0,3), Position(0,4), Position(0,5), Position(1,2), Position(1,3), Position(1,4),Position(1,5), 
					Position(2,0), Position(2,1), Position(2,2), Position(2,3), Position(3,0), Position(3,1), Position(3,2), Position(3,3)};
		cells[1] = { Position(0,1), Position(0,2), Position(1,1), Position(1,2), Position(2,1), Position(2,2), Position(2,3), Position(2,4),
					Position(3,1), Position(3,2), Position(3,3), Position(3,4), Position(4,3), Position(4,4), Position(5,3), Position(5,4) };
		Move(0, 3);
	}
};

class BigZBlock : public Block
{
public:
	BigZBlock()
	{
		id = 16;
		cells[0] = { Position(0,0), Position(0,1), Position(0,2), Position(0,3), Position(1,0), Position(1,1), Position(1,2),Position(1,3),
					Position(2,2), Position(2,3), Position(2,4), Position(2,5), Position(3,2), Position(3,3), Position(3,4), Position(3,5) };
		
		cells[1] = { Position(0,3), Position(0,4), Position(1,3), Position(1,4), Position(2,1), Position(2,2), Position(2,3), Position(2,4),
					Position(3,1), Position(3,2), Position(3,3), Position(3,4), Position(4,1), Position(4,2), Position(5,1), Position(5,2)};
		Move(0, 3);
	}
};

class BigTBlock : public Block
{
public:
	BigTBlock()
	{
		id = 17;
		cells[0] = { Position(0,2), Position(0,3), Position(1,2), Position(1,3), Position(2,0), Position(2,1), Position(2,2),Position(2,3),
					Position(2,4), Position(2,5), Position(3,0), Position(3,1), Position(3,2), Position(3,3), Position(3,4), Position(3,5) };
		cells[1] = { Position(0,2), Position(0,3), Position(1,2), Position(1,3), Position(2,2), Position(2,3), Position(2,4),Position(2,5),
				Position(3,2), Position(3,3), Position(3,4), Position(3,5), Position(4,2), Position(4,3), Position(5,2), Position(5,3) };
		cells[2] = { Position(0,0), Position(0,1), Position(0,2), Position(0,3), Position(0,4), Position(0,5), Position(1,0),Position(1,1),
				Position(1,2), Position(1,3), Position(1,4), Position(1,5), Position(2,2), Position(2,3), Position(3,2), Position(3,3) };
		cells[3] = { Position(0,2), Position(0,3), Position(1,2), Position(1,3), Position(2,0), Position(2,1), Position(2,2),Position(2,3),
				Position(3,0), Position(3,1), Position(3,2), Position(3,3), Position(4,2), Position(4,3), Position(5,2), Position(5,3) };
		Move(0, 3);
	}
};

class BigIBlock : public Block
{
public:
	BigIBlock()
	{
		id = 18;
		cells[0] = { Position(0,0), Position(0,1), Position(0,2), Position(0,3), Position(0,4), Position(0,5), Position(0,6),Position(0,7),
					Position(1,0), Position(1,1), Position(1,2), Position(1,3), Position(1,4), Position(1,5), Position(1,6),Position(1,7) };

		cells[1] = { Position(0,2), Position(0,3), Position(1,2), Position(1,3), Position(2,2), Position(2,3), Position(3,2), Position(3,3),
					Position(4,2), Position(4,3), Position(5,2), Position(5,3), Position(6,2), Position(6,3), Position(7,2), Position(7,3) };
		Move(0, 3);
	}
};

class PenTBlock : public Block
{
public:
	PenTBlock()
	{
		id = 19;
		cells[0] = { Position(0,2), Position(1,2), Position(2,1), Position(2,2), Position(2,3) };
		cells[1] = { Position(0,2), Position(1,2), Position(1,3), Position(1,4), Position(2,2) };
		cells[2] = { Position(0,1), Position(0,2), Position(0,3), Position(1,2), Position(2,2) };
		cells[3] = { Position(0,3), Position(1,1), Position(1,2), Position(1,3), Position(2,3) };

		Move(0, 3);
	}
};

class PBlock : public Block
{
public:
	PBlock()
	{
		id = 20;
		cells[0] = { Position(0,2), Position(0,3), Position(1,2), Position(1,3), Position(1,4) };
		cells[1] = { Position(0,2), Position(0,3), Position(1,2), Position(1,3), Position(2,2) };
		cells[2] = { Position(0,1), Position(0,2), Position(0,3), Position(1,2), Position(1,3) };
		cells[3] = { Position(0,3), Position(1,2), Position(1,3), Position(2,2), Position(2,3) };

		Move(0, 3);

	}
};

class PenIBlock : public Block
{
public:
	PenIBlock()
	{
		id = 21;
		cells[0] = { Position(1,0), Position(1,1), Position(1,2), Position(1,3), Position(1,4)};
		cells[1] = { Position(0,2), Position(1,2), Position(2,2), Position(3,2), Position(4,2)};
		Move(-1, 3);
	}
};

class PenSBlock : public Block
{
public:
	PenSBlock()
	{
		id = 22;
		cells[0] = { Position(0,2), Position(0,3), Position(1,2), Position(2,1), Position(2,2) };
		cells[1] = { Position(0,0), Position(1,0), Position(1,1), Position(1,2), Position(2,2) };
		Move(0, 4);
	}
};

class PenZBlock : public Block
{
public:
	PenZBlock()
	{
		id = 23;
		cells[0] = { Position(0,1), Position(0,2), Position(1,2), Position(2,2), Position(2,3) };
		cells[1] = { Position(0,3), Position(1,1), Position(1,2), Position(1,3), Position(2,1) };
		Move(0, 4);
	}
};

class PenLBlock : public Block
{
public:
	PenLBlock()
	{
		id = 24;
		cells[0] = { Position(0,2), Position(1,0), Position(1,1), Position(1,2), Position(1,3)};
		cells[1] = { Position(0,1), Position(1,1), Position(2,1), Position(2,2), Position(3,1)};
		cells[2] = { Position(1,0), Position(1,1), Position(1,2), Position(1,3), Position(2,1)};
		cells[3] = { Position(0,1), Position(1, 0), Position(1, 1), Position(2, 1), Position(3, 1) };
		Move(0, 4);
	}
};

class PenJBlock : public Block
{
public:
	PenJBlock()
	{
		id = 25;
		cells[0] = { Position(0,1), Position(1,0), Position(1,1), Position(1,2), Position(1,3) };
		cells[1] = { Position(0,1), Position(1,1), Position(1,2), Position(2,1), Position(3,1) };
		cells[2] = { Position(1,0), Position(1,1), Position(1,2), Position(1,3), Position(2,2) };
		cells[3] = { Position(0,1), Position(1,1), Position(2,0), Position(2,1), Position(3,1) };
		Move(0, 4);
	}
};