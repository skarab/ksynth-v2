/* -------------------------------------------------------
				 KSynth-V2  4K intro sample
				 copyright by Skarab/KStorm
-------------------------------------------------------- */

#include <ksynth.h>

unsigned char sample[] = { 0, 55, 146, 0, 0, 0, 1, 1, 0, 35, 251, 96, 2, 0, 0, 0, 0, 1, 45, 38, 195, 0, 0, 0, 0, 0, 0, 13, 255, 0, 0, 35, 15, 229, 19, 153, 23, 132, 0, 120, 126, 10, 0, 0, 255, 0, 85, 199, 255, 10, 0, 2, 0, 0, 2, 0, 0, 165, 0, 0, 4, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 10, 145, 0, 0, 255, 255, 175, 0, 255, 0, 255, 50, 60, 55, 128, 0, 0, 255, 155, 0, 0, 38, 5, 150, 1, 0, 0, 1, 0, 1, 62, 58, 147, 3, 0, 0, 0, 0, 1, 35, 53, 133, 2, 0, 0, 1, 0, 0, 25, 105, 0, 20, 59, 196, 189, 156, 201, 161, 129, 112, 98, 72, 128, 0, 0, 255, 0, 20, 255, 255, 3, 180, 3, 0, 0, 2, 0, 3, 255, 0, 153, 4, 0, 0, 0, 1, 0, 255, 0, 51, 4, 0, 0, 0, 0, 0, 35, 175, 0, 15, 255, 255, 255, 0, 255, 0, 255, 40, 100, 135, 10, 0, 0, 255, 0, 80, 200, 35, 33, 144, 3, 0, 0, 1, 0, 1, 80, 15, 97, 2, 0, 0, 1, 0, 1, 241, 1, 25, 2, 0, 0, 1, 0, 1, 10, 255, 1, 17, 251, 255, 89, 43, 191, 32, 180, 85, 130, 17, 10, 0, 0, 255, 0, 35, 250, 255, 2, 0, 3, 0, 0, 2, 0, 1, 255, 10, 153, 1, 1, 0, 1, 1, 3, 230, 51, 0, 4, 0, 0, 0, 0, 0, 20, 135, 0, 0, 255, 150, 25, 0, 255, 70, 255, 255, 0, 120, 239, 80, 153, 255, 0, 100, 150, 128, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 255, 0, 255, 0, 255, 0, 255, 128, 0, 0, 128, 0, 0, 255, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 255, 0, 255, 0, 255, 0, 255, 128, 0, 0, 128, 0, 0, 255, 0, 0, 0 };
unsigned char pattern[] = { 10, 0, 10, 0, 10, 0, 10, 0, 8, 0, 10, 0, 10, 0, 10, 0, 10, 0, 6, 0, 6, 0, 12, 0, 10, 0, 0, 0, 0, 0, 10, 0, 10, 0, 0, 0, 10, 0, 0, 0, 0, 0, 10, 0, 10, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 10, 0, 10, 0, 10, 0, 10, 0, 0, 0, 10, 0, 10, 0, 10, 0, 0, 0, 0, 10, 10, 10, 10, 0, 0, 0, 10, 0, 0, 0, 10, 0, 0, 0, 10, 0, 0, 0, 10, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
unsigned char mixers[] = { 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2, 127, 2 };
unsigned char poly_channel[] = {0, 0, 0, 0, 0, 0, 1, 1}; 
unsigned int ECART_NOTE = 4120;



void main()
{
	Init_KSynth();

	while(Update_KSynth())
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glLoadIdentity();

		/*

			please insert cool effect here :)

		*/

	}

	Exit_KSynth();
}


/* -------------------------------------------------------
		copyright by Skarab/KStorm in 2005-2006
-------------------------------------------------------- */
