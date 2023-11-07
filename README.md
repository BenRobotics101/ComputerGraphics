# ComputerGraphics
For course work for a class at Grand Canyon University

By Benjamin Carter and Josh Canode.

--- 

You can also see documentation available in the `doxygenOutput` folder as `index.html`. Click on `classes` link at the top to browse.

---

Requirements:
1. Requires OpenGL
2. GLU
3. GLUT
4. GLFW
5. GLEW
6. SOIL

## To build, use make
1. First Clone the git repository
    - this can be found at https://github.com/BenRobotics101/ComputerGraphics
    - or in linux can be cloned by running
        `git clone https://github.com/BenRobotics101/ComputerGraphics.git`
    - you can run `git checkout main` to make sure you are in the main branch. 
2. Make sure the working directory is the root of the repository.
3. Run `make`. 
4. The program will be `Project5` under the root of the repository. Run it with `./Project5` 

## Old Building instructions with cmake

The above need to be installed on the system, and their packages discoverable by cmake.

This repository uses `cmake` to build the project. 
There is a `buildme.sh` script that cleans the build directory.
It then automatically runs cmake and make.

1. First Clone the git repository
    - this can be found at https://github.com/BenRobotics101/ComputerGraphics
    - or in linux can be cloned by running
        `git clone https://github.com/BenRobotics101/ComputerGraphics.git`
    - you can run `git checkout main` to make sure you are in the main branch. 
2. Make sure the working directory is the root of the repository.
3. Run buildme.sh `bash buildme.sh`
4. This will have created a build directory. The executable is called `Project5` in the build directory.
5. To run, `cd build` and then `./Project5`.


## File structure:

File Structure:
-	src/
	- This is where the source files are
-	include/
	- This is where the header files are
-	build/
	- This is where the executable will be
-	textures/
	- This is where all image textures will be
-	CMakeLists.txt
	- This is the cmake file that is run to generate the makefile for building
-	buildme.sh
	- The “quick/easy” build script. Calls cmake.
-	tableSideEdit.jpg
    - The reference image
-	Your Surrounding World 3.docx/.pdf
	- This report
