/* -------------------------------------------------------
					KSynth-V2  4K Player
				 copyright by Skarab/KStorm
-------------------------------------------------------- */

#ifndef _KSYNTH_H_
#define _KSYNTH_H_


#include <windows.h>
#include <gl.h>
#include <dsound.h>
#include <glu.h>


/*
	Basic maths/mem decl
*/

typedef unsigned int size_t;
extern "C"
{
  int __cdecl		abs(int);
  double __cdecl	cos(double);
  double __cdecl	fabs(double);
  double __cdecl	sin(double);
  double __cdecl	asin(double);
  double __cdecl	sqrt(double);
  double __cdecl	pow(double,double);
  void * __cdecl	memset( void *dest, int c, size_t count );
  void * __cdecl	memcpy( void *dest, const void *src, size_t count );
}


/* 
	Extern data exported by the tracker
*/

extern unsigned char sample[];
extern unsigned char pattern[];
extern unsigned char mixers[];
extern unsigned char poly_channel[];
extern unsigned int  ECART_NOTE;


/*
	Player functions
	
	  - init	: Initialisation of DSound / Synth and creation of the opengl's window
				   ( 800x600 - 16bits - fullscreen, Stencil & Accum ready to be used )

      - exit	: close the window / synth and release DSound

	  - update	: update the synth and swap buffers
				  (return false if music end or ESC pressed)

		nfo: Time stores the time since beginning of the app (in seconds).
		      updated in the update.
*/

extern float	Time;

void Init_KSynth();	
void Exit_KSynth();
bool Update_KSynth();


/*
    Some maybe usefull function...
*/

float Bezier(float a1, float a2, float a3, float a4, float t);		// basic bezier calc
unsigned int Brand(float t, unsigned int max);						// random func based on t/max




#endif

/* -------------------------------------------------------
		copyright by Skarab/KStorm in 2005-2006
-------------------------------------------------------- */