#pragma once
class Field
{
public:
	int lines[4];
	int choices[1];
	Field();
	~Field();
	void 
		ShowField();
	bool IsGameEnd();
	void EraseLines();
};

