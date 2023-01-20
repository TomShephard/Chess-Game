/*A chess game created by Tom Shephard*/
/*with more than a little help from ChatGPT*/

#include <GL/glut.h>
#include <SOIL/SOIL.h>

GLuint texture;

void createWindow(int argc, char **argv);

int main (int argc, char **argv){

    char ** b = argv;
    
    createWindow(argc, b);
    
    
    

    return 1;
}

void display(void);
void createWindow(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Chess");
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}


void display() {
    glEnable(GL_TEXTURE_2D);
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);
    int width, height;
    unsigned char* image = SOIL_load_image("images/Board.jpg", &width, &height, 0, SOIL_LOAD_RGBA);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
    SOIL_free_image_data(image);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glBindTexture(GL_TEXTURE_2D, texture);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0, 0.0);
    glVertex3f(-1.0, -1.0, 0.0);
    glTexCoord2f(1.0, 0.0);
    glVertex3f(1.0, -1.0, 0.0);
    glTexCoord2f(1.0, 1.0);
    glVertex3f(1.0, 1.0, 0.0);
    glTexCoord2f(0.0, 1.0);
    glVertex3f(-1.0, 1.0, 0.0);
    glEnd();
    glutSwapBuffers();
}


