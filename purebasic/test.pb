ImportC "dsound.lib"
EndImport

ImportC "E:\coffee-trunk\engine\source\extern\gl\pack\opengl32.lib"
EndImport

ImportC "E:\coffee-trunk\engine\source\extern\gl\pack\glu32.lib"
EndImport

ImportC "E:\ksynth-v2\ksynth-v2\player\lib\ksynth.lib"
  Init_KSynth() As "?Init_KSynth@@YAXXZ"
  Exit_KSynth() As "?Exit_KSynth@@YAXXZ"
  Update_KSynth() As "?Update_KSynth@@YA_NXZ"
EndImport

ImportC "E:\ksynth-v2\ksynth-v2\purebasic\lib\music.lib"
EndImport

Init_KSynth()
While(Update_KSynth()>0)
Wend
Exit_KSynth()

; IDE Options = PureBasic 4.60 (Windows - x86)
; CursorPosition = 19
; EnableXP