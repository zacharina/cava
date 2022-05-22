# CAVA Windows Forms

This is the Visual Studio 19 project of the sample project for an overview of all properties and values computed with CAVA.

The .exe can be found in the Binaries folder of the repository.

**INSTALLATION REQUIRMENTS VISUAL STUDIO**:
1. Desktop development with C++ 
2. MSVC 64-bit compiler for x86, x64, ARM, and ARM64 (should come with 1.)
3. MSVC v142 - VS 2022 C++ x64/x86 build tools

For more information on the requirements for c++ development in Visual Studio also see https://docs.microsoft.com/en-us/cpp/overview/visual-cpp-tools-and-features-in-visual-studio-editions?view=msvc-170(https://docs.microsoft.com/en-us/cpp/overview/visual-cpp-tools-and-features-in-visual-studio-editions?view=msvc-170) and [https://docs.microsoft.com/en-us/cpp/build/vscpp-step-0-installation?view=msvc-170](https://docs.microsoft.com/en-us/cpp/build/vscpp-step-0-installation?view=msvc-170).

**USAGE**:
1. Start the .exe
2. Set up the age, gender, height and weight of the human.
3. Click on "Revive" to start the cardiovascular system simulation.
4. Click on "Coma" to pause to simulation.
5. The buttons "Trachea", "Lung", "Heart" and "Blood + Tissue" will open new windows with the calculated values. 
    
   The pre-set parameters can be adjusted in these windows. Change them and see the result. 


**NOTE**:
This is only a simple application to demonstrate the usage of CAVA.
  - It may come to 'NaN' values, There is no preventing of NaN values as the result of parameter changes.
  - The overall design is preliminary. For this reason, all values are rounded to 2 decimal places.
  - The empty space on the start page is a placeholder for charts showing the distribution of specific properties. These charts are intended to be added in the near future.
  - The UI is not responsive. The application has been set up with 960x540, changing the size of the window will not affect the widgets.
  - The application has been set up with the font "Louis George Cafe Light" (see folder "Font"). Install this font on your PC for optimal usage. Otherwise the application will use a default font and this may cause unnecessary scrolling issues. 
