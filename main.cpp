/* 
Sandgame
created by: Trevor Haggerty - cesismalon@gmail.com & Zachary Drummond - zdrummon@gmail.com 
*/

/* glew needs to be before any other opengl include */
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

using std::cout; using std::endl;

int main(void)
{
    cout << "██████████████████████████████████████████████████████████████████████████████" << endl;
    cout << "█                                                                            █" << endl;
    cout << "█   ██████  ▄▄▄       ███▄    █ ▓█████▄   ▄████  ▄▄▄       ███▄ ▄███▓▓█████  █" << endl;
    cout << "█ ▒██    ▒ ▒████▄     ██ ▀█   █ ▒██▀ ██▌ ██▒ ▀█▒▒████▄    ▓██▒▀█▀ ██▒▓█   ▀  █" << endl;
    cout << "█ ░ ▓██▄   ▒██  ▀█▄  ▓██  ▀█ ██▒░██   █▌▒██░▄▄▄░▒██  ▀█▄  ▓██    ▓██░▒███    █" << endl;
    cout << "█   ▒   ██▒░██▄▄▄▄██ ▓██▒  ▐▌██▒░▓█▄   ▌░▓█  ██▓░██▄▄▄▄██ ▒██    ▒██ ▒▓█  ▄  █" << endl;
    cout << "█ ▒██████▒▒ ▓█   ▓██▒▒██░   ▓██░░▒████▓ ░▒▓███▀▒ ▓█   ▓██▒▒██▒   ░██▒░▒████▒ █" << endl;
    cout << "█ ▒ ▒▓▒ ▒ ░ ▒▒   ▓▒█░░ ▒░   ▒ ▒  ▒▒▓  ▒  ░▒   ▒  ▒▒   ▓▒█░░ ▒░   ░  ░░░ ▒░ ░ █" << endl;
    cout << "█ ░ ░▒  ░ ░  ▒   ▒▒ ░░ ░░   ░ ▒░ ░ ▒  ▒   ░   ░   ▒   ▒▒ ░░  ░      ░ ░ ░  ░ █" << endl;
    cout << "█ ░  ░       ░   ▒      ░   ░ ░  ░ ░  ░ ░ ░   ░   ░   ▒   ░      ░      ░    █" << endl;
    cout << "█       ░    ░   ░  ░         ░    ░   ░      ░       ░  ░       ░      ░  ░ █" << endl;
    cout << "█ created by ░   ░░               ░    ░      ░░                ░░░    ░░░   █" << endl;
    cout << "█ Trevor Haggerty cesismalon@gmail.com ░ Zachary Drummond zdrummon@gmail.com █" << endl;
    cout << "█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░█" << endl;
    cout << "██████████████████████████████████████████████████████████████████████████████" << endl;

    GLFWwindow* window;

    /* Initialize the glfw library */
    if (!glfwInit()) 
    {
        cout << "ERROR: GLFW FAILED TO INITIALIZE" << endl;
        return -1; 
    }
        
    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "We have triangle.", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        cout << "ERROR: GLFW WINDOW FAILED" << endl;
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Initialize the glew library */
    if (glewInit() != GLEW_OK) 
    {
        cout << "ERROR: GLEW FAILED TO INITIALIZE" << endl;
        return -1; 
    }

    cout << "OPENGL " << glGetString(GL_VERSION) << endl;

    /* vertex position array */
    const int POSITION_SIZE = 6;
    float positions[POSITION_SIZE] = {
        -0.5f, -0.5f,
        0.0f, 0.5f,
        0.5f, -0.5f
    };

    /* Generate a buffer (number of buffers, pointer to unsigned int), (buffer type, choose buffer) */
    unsigned int buffer;
    glGenBuffers(1, &buffer);
    glBindBuffer(GL_ARRAY_BUFFER, buffer);

    /* data to put into the buffer */
    glBufferData(GL_ARRAY_BUFFER, POSITION_SIZE * sizeof(float), positions, GL_STATIC_DRAW);


    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glDrawArrays(GL_TRIANGLES, 0, 3);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    cout << endl << "CLOSING PROGRAM SUCCESSFULLY" << endl;
    return 0;
}