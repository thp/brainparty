// Brain Party
// Copyright (C) 2010 Paul Hudson (http://www.tuxradar.com/brainparty)

// Brain Party is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 3
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#ifndef __NEXTINLINE_H__
#define __NEXTINLINE_H__

#include "Minigame.h"

class BPMiniGame_NextInLine : public BPMiniGame {
public:
	BPMiniGame_NextInLine(BPGame* game);
	~BPMiniGame_NextInLine();
	void OnMouseDown();
	void OnMouseMove();
	void OnMouseUp();
	void ButtonClicked(const char* btn);
	void FlipSign();
	void CheckAnswer();
	void LevelUp();
	void Start();
	int GetWeight();
	void Render();
	void Tick();
	void AnswerChanged();
protected:
	Texture* sfcBackground;
	
	MiniGameStates GameState;
	int TimeStarted;
			
	int Result;
	int NumWrong;
	int NumTries;
	
	int LastStateChange;
	int SuccessTime;
	
	string* CurrentAnswer;
	SpriteFont* sfcCurrentQuestion;
	SpriteFont* sfcCurrentAnswer;
	
	BPList<int> QuestionOrder;
};

#endif