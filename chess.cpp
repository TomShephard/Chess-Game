#include <GL/glut.h>


void createWindow(int argc, char **argv, char* windowName){
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800, 800);
    glutCreateWindow(windowName);

}


int main (int argc, char **argv){

    int loop = 1;
    int a = argc;
    char ** b = argv;
    
    createWindow(a, b, "I love Cum");
    
    
    while(loop){

    
    }

    return 1;
}

