# Music Player based on Emotions in C
* For my first semester mini project in C, I created a program that is a music player that selects and plays songs based on the user's input of language and emotion.
* The program consists of a user interface that prompts the user to select their desired language and emotion from a list of options.
* Once the user selects their language and emotion, the program searches a pre-defined database of songs categorized by language and emotion. The program retrieves the corresponding song and plays it using a media player library in C.

## Header Files Used in this Program
1. `<stdio.h>` is a standard input-output header file that is used to perform input and output operations in C programming.
2. `<windows.h>` is a header file used in Microsoft Windows operating systems to provide access to various system-level APIs and data types.
3. `<MMsystem.h>` is a header file used for working with multimedia devices in Windows operating systems. 

## Important Considerations for Running this Program
1. Include the `'lwinmm'` library in the compiler settings as a parameter.
2. Add the `"PlaySound"` command within the "main()" function.
3. The music files need to be in the `'.wav'` format.
4. In [`SongPlayerCode.c`](https://github.com/fromjyce/SongPlayer-In-C/blob/main/SongPlayerCode.c) file, 
      * The first line of code starts by playing the music file asynchronously, which means that the code will continue to execute while the music file plays in the background. 
      * If only the third line of code is used, the program will only play the music file but will not allow any other operations to be performed until the music has finished playing. This is because the third line uses the "SND_SYNC" parameter, which means that the program will wait for the music to finish playing before allowing any further operations to be performed.
      * To avoid this limitation, the first line of code is added to play the music file asynchronously. This allows the program to continue executing while the music file plays in the background, so other operations, like choosing another song at the same time, can be performed simultaneously.

## Structure of Repository
1. [`SongPlayerCode.c`](https://github.com/fromjyce/SongPlayer-In-C/blob/main/SongPlayerCode.c) - The Code snippet is an excerpt from the project that demonstrates how a song is played within the program.
2. [`SongPlayerMain.c`](https://github.com/fromjyce/SongPlayer-In-C/blob/main/SongPlayerMain.c) - The Code represents the entire music player system project, including all of the code necessary for the program to function.

## Running the Programs
To run the C programs, you need to have a C compiler installed on your system. The programs have been tested on the Code::Blocks IDE in Windows 11.
***You are free to choose any IDE that suits your needs.***

## Contact
If you come across any mistakes in the programs or have any suggestions for improvement, please feel free to contact me <jaya2004kra@gmail.com>. I appreciate any feedback that can help me improve my coding skills

## License
All the programs in this repository are licensed under the MIT License. You can use them for educational purposes and modify them as per your requirements. ***However, I do not take any responsibility for the accuracy or reliability of the programs.***

## MY SOCIAL PROFILES:
### [LINKEDIN](https://www.linkedin.com/in/jayashre-%E2%80%8E-932002251/)


