OBJ = main.c window.c
sdl:
	gcc $(OBJ) -o output/play -I include -L lib -l SDL2-2.0.0