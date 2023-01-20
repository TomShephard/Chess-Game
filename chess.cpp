#include <GL/glut.h>


void createWindow(int argc, char **argv);

int main (int argc, char **argv){

    int loop = 1;
    char ** b = argv;
    
    createWindow(argc, b);
    
    
    while(loop){

        /*Does nish just keeps the window open*/

    }

    return 1;
}

void createWindow(int argc, char **argv){
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Chess");

}
