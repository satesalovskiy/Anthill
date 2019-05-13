#pragma once
//#include "Role.h"
//#include "Field.h"
class CarryStaff : public Role
{
	virtual void Work(Field*field, int i, int j) override
	{
		int k = i - 50;
		int m = j - 50;
		int kk = i + 50;
		int mm = j + 50;
		int q = 1;
		//for ( k; k <kk; k++)
		/*for (int f=0;f<field->GetLoot();f++)
		{
			//for (m; m < mm; m++)
			for (int g = 0; g < field->GetLoot(); g++)
			{ */
		for (int f = 0; f < (i + 50); f++)
		{
			//for (m; m < mm; m++)
			for (int g = 0; g < (j + 50); g++)
			{

				if ((f > 0) && (f < field->GetSize())&&(q<2))
				{
					if ((g > 0) && (g < field->GetSize()))
					{
						if ((field->playGround[f][g] != nullptr) && (field->playGround[f][g]->GetName() == 4))
						{
							field->DecreaseMat();
							field->DecreaseMat();

							field->IncreaseLoot();
							field->IncreaseLoot();
							field->IncreaseLoot();
							//field->IncreaseLoot();
							field->playGround[f][g] = nullptr;
							std::cout << "=========================================================";
							q++;
						}
					}
				}

			}
		}

	}
};