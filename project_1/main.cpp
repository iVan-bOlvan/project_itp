#include "GLFW/glfw3.h"
#include <iostream>

int main(int argc, char *argv[])
{
        glfwInit();
        GLFWwindow* window = glfwCreateWindow(1920, 1080,
							"OpenGL GLFW demo", NULL, NULL);
		
        glfwMakeContextCurrent(window);

        while(!glfwWindowShouldClose(window))
        {
                // process pending events
                glfwPollEvents();
                glClear(GL_COLOR_BUFFER_BIT);

                glClearColor(0.5, 0.5, 0.5, 1); // gray
                
				glRotatef(0.5, 0.0f, 1.0f, 0.0f);

                glBegin(GL_TRIANGLES);
					glColor3f(1.0f, 0.0f, 0.0f);
                    glVertex2f(-0.5,-0.5);
					
					glColor3f(0.0f, 1.0f, 0.0f);
                    glVertex2f(0.5,-0.5);
					
					glColor3f(0.0f, 0.0f, 1.0f);
                    glVertex2f(0.0,0.5);
                glEnd();

                glfwSwapBuffers(window);
        }
		
        glfwTerminate();
}
