#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
void star_3(void)
{
    float theta;
    glColor3f (1,0,0);
    glBegin(GL_POLYGON);
    for(int i = 0; i<360; i++)
    {
        theta = i*3.142/180.0;
        glVertex3f(25*cos(theta)+22.5, 25*sin(theta), 0);
    }

    //Base
    glEnd();
    glColor3f (.501,.501,.501);
    glBegin(GL_POLYGON);
    glVertex3d(-95,-95,0);
    glVertex3d(-65,-30,0);
    glVertex3d(115,-30,0);
    glVertex3d(85,-95,0);
    glEnd();
    //left
    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(-55,-40,0);
    glVertex3d(-55,20,0);
    glVertex3d(-50,20,0);
    glVertex3d(-50,-40,0);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(-50,15,0);
    glVertex3d(-50,20,0);
    glVertex3d(-40,20,0);
    glVertex3d(-40,15,0);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(-40,-40,0);
    glVertex3d(-40,20,0);
    glVertex3d(-35,20,0);
    glVertex3d(-35,-40,0);
    glEnd();

    ///line///
    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-48, -40);
    glVertex2f(-48, 20);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-46, -40);
    glVertex2f(-46, 20);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-44, -40);
    glVertex2f(-44, 20);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-41.7, -40);
    glVertex2f(-41.7, 20);
    glEnd();
    //left 2nd
    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(-25,-40,0);
    glVertex3d(-25,35,0);
    glVertex3d(-20,35,0);
    glVertex3d(-20,-40,0);
    glEnd();


    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(-20,30,0);
    glVertex3d(-20,35,0);
    glVertex3d(-10,35,0);
    glVertex3d(-10,30,0);
    glEnd();


    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(-10,-40,0);
    glVertex3d(-10,35,0);
    glVertex3d(-5,35,0);
    glVertex3d(-5,-40,0);
    glEnd();


    ///Line//

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-18, -40);
    glVertex2f(-18, 35);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-16, -40);
    glVertex2f(-16, 35);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-16, -40);
    glVertex2f(-16, 35);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-14, -40);
    glVertex2f(-14, 35);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(-11.7, -40);
    glVertex2f(-11.7, 35);
    glEnd();

    ///middle///
    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(5,-40,0);
    glVertex3d(5,45,0);
    glVertex3d(10,45,0);
    glVertex3d(10,-40,0);
    glEnd();

    //top
    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(5,45,0);
    glVertex3d(0,65,0);
    glVertex3d(5,65,0);
    glVertex3d(10,45,0);
    glEnd();


    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(12, 45);
    glVertex2f(7, 65);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(14, 45);
    glVertex2f(9, 65);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(16, 45);
    glVertex2f(11, 65);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(18, 45);
    glVertex2f(13, 65);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(5,60,0);
    glVertex3d(5,65,0);
    glVertex3d(20,65,0);
    glVertex3d(20,60,0);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(20,60,0);
    glVertex3d(20,65,0);
    glVertex3d(30,65,0);
    glVertex3d(32,60,0);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(35,45,0);
    glVertex3d(30,65,0);
    glVertex3d(35,65,0);
    glVertex3d(40,45,0);
    glEnd();

    ///new///
    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(20,45,0);
    glVertex3d(15,65,0);
    glVertex3d(20,65,0);
    glVertex3d(25,45,0);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(27, 45);
    glVertex2f(22, 65);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(29, 45);
    glVertex2f(24, 65);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(31, 45);
    glVertex2f(26, 65);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(33, 45);
    glVertex2f(28, 65);
    glEnd();


    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(10,40,0);
    glVertex3d(10,45,0);
    glVertex3d(20,45,0);
    glVertex3d(20,40,0);
    glEnd();

///middle dag///
    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(20,-40,0);
    glVertex3d(20,45,0);
    glVertex3d(25,45,0);
    glVertex3d(25,-40,0);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(27, -40);
    glVertex2f(27, 45);
    glEnd();


    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(29, -40);
    glVertex2f(29, 45);
    glEnd();


    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(31, -40);
    glVertex2f(31, 45);
    glEnd();


    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(33.4, -40);
    glVertex2f(33.4, 45);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(25,40,0);
    glVertex3d(25,45,0);
    glVertex3d(35,45,0);
    glVertex3d(35,40,0);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(35,-40,0);
    glVertex3d(35,45,0);
    glVertex3d(40,45,0);
    glVertex3d(40,-40,0);
    glEnd();

    ///Line///
    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(12, -40);
    glVertex2f(12, 45);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(14, -40);
    glVertex2f(14, 45);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(16, -40);
    glVertex2f(16, 45);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(16, -40);
    glVertex2f(16, 45);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(18.3, -40);
    glVertex2f(18.3, 45);
    glEnd();

    //left 2nd

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(50,-40,0);
    glVertex3d(50,35,0);
    glVertex3d(55,35,0);
    glVertex3d(55,-40,0);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(57, -40);
    glVertex2f(57, 35);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(59, -40);
    glVertex2f(59, 35);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(61, -40);
    glVertex2f(61, 35);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(63.4, -40);
    glVertex2f(63.4, 35);
    glEnd();


    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(55,30,0);
    glVertex3d(55,35,0);
    glVertex3d(65,35,0);
    glVertex3d(65,30,0);
    glEnd();


    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(65,-40,0);
    glVertex3d(65,35,0);
    glVertex3d(70,35,0);
    glVertex3d(70,-40,0);
    glEnd();


    //left

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(80,-40,0);
    glVertex3d(80,20,0);
    glVertex3d(85,20,0);
    glVertex3d(85,-40,0);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(87, -40);
    glVertex2f(87, 20);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(89, -40);
    glVertex2f(89, 20);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(91, -40);
    glVertex2f(91, 20);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_LINES);
    glVertex2f(93.4, -40);
    glVertex2f(93.4, 20);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(85,15,0);
    glVertex3d(85,20,0);
    glVertex3d(95,20,0);
    glVertex3d(95,15,0);
    glEnd();

    glColor3f (1,1,1);
    glBegin(GL_POLYGON);
    glVertex3d(95,-40,0);
    glVertex3d(95,20,0);
    glVertex3d(100,20,0);
    glVertex3d(100,-40,0);
    glEnd();

}



void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    star_3();
    glFlush ();

}
void init (void)
{
    glClearColor (0,0.501,0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-150, 150.0, -150.0, 150.0, -150.0, 150.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (700, 700);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
