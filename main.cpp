#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// function to greet the user according to time
void greetings(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Hello Hunter"<<endl;
        string phrase = "Howdy Hunter"; //phrase for the espeak
        string command = "espeak \"" + phrase + "\""; 
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Hunter"<<endl;
        string phrase = "Good Afternoon Hunter";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Hunter"<<endl;
        string phrase = "Good Evening Hunter";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}

int main()
{
    system("cls");

    cout<<"\t<------------------------------------ PERSONAL ASSISSTANT ------------------------------------"<<endl<<endl;

    string password; //to take password
    string command; // to take command from the user

    do
    {
        cout<<"///////////////////////////////////////////////////////"<<endl;
        cout<<"| ENTER THE PASSWORD TO CONFIRM YOU ARE Hunter|"<<endl;
        cout<<"///////////////////////////////////////////////////////"<<endl<<endl;
        string phrase = "ENTER PASSWORD";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(password=="hunter27")
        {
            cout<<"\n<**************************************************************************************************>\n\n";
            greetings();
            do{
                cout<<"\n<**********************************************************************************************>\n\n";
                cout<<endl<<"What do you need Hunter?"<<endl<<endl;

                string phrase = "What do you need Hunter?";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter your query from list:" << endl;
                cout << "time" << endl;
                cout << "open: notepad, Excel, Word, Chrome, Paint, document, google, youtube, photo" << endl
                cout << " play: music, video" << endl;
                getline(cin,command);
                cout<<endl;
                cout<<"Answer --> ";

                if(command=="hello" || command=="hi")
                {
                    cout<<"Hello Hunter"<<endl;
                    string phrase = "Hello Hunter";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command=="time")
                {

                    datetime();
                }


                else if(command=="who are you" || command=="who is speaking")
                {
                    cout<<"I'm a personal assistant"<<endl;
                    string phrase = "I'm a personal assistant";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


                else if(command=="open: notepad")
                {
                    cout<<"openining notepad"<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open: writepad")
                {
                    cout<<"opening writepad"<<endl;
                    string phrase = "opening writepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\write.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open: Excel")
                {
                    cout<<"opening Excel"<<endl;
                    string phrase = "opening Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.Office.Desktop.Excel_16051.14326.20238.0_x86__8wekyb3d8bbwe\\Office16\\EXCEL.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open: Word")
                {
                    cout<<"opening Microsoft Word"<<endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\WindowsApps\\Microsoft.Office.Desktop.Word_16051.14326.20238.0_x86__8wekyb3d8bbwe\\Office16\\WINWORD.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open: Paint")
                {
                    cout<<"opening Microsoft Paint"<<endl;
                    string phrase = "opening Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\System32\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="play: music")
                {
                    string command2;
                    cout << "Which song?" << endl;
                    getline(cin,command2);


                    cout<<"playing " << command2 <<endl;
                    string appCommand2 = "open \"" << command2 << "\" type mpegvideo alias mp3";
                    string phrase = "playing " << command2;
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    mciSendString(appCommand2, NULL, 0, NULL);
                    mciSendString("play mp3", NULL, 0, NULL);
                }

                else if(command=="open: google")
                {
                    cout<<"openining google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(command=="open: youtube")
                {
                    cout<<"openining YouTube"<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(command=="close chrome browser")
                {
                    cout<<"closing chrome browser"<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }


                else if(command=="open: photo")
                {
                    string command2;
                    cout << "Which photo?" << endl;
                    getline(cin,command2);
                    string phrase = "Which photo?";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                
                    cout<<"opening photo"<<endl;
                    string phrase = "opening photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open",command2,NULL, NULL, SW_NORMAL);
                }


                else if(command=="open: document")
                {
                    cout<<"Which document?"<<endl;
                    string phrase = "Which document?";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);

                    string command2;
                    getline(cin,command2);


                    cout<<"opening "<< command2 << endl;
                    string phrase = "opening " + command2;
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL, "open", command2 ,NULL, NULL, SW_NORMAL);
                }

                else if(command=="play: video")
                {
                    cout<<"Which video?"<<endl;
                    string phrase = "Which video?";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);

                    string command2;
                    getline(cin,command2)

                    cout<<"opening "<< command2 << endl;
                    string phrase = "opening video";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open",command2,NULL, NULL, SW_NORMAL);
                }

                else if(command=="end" || command=="exit")
                {
                    cout<<"Good Bye Hunter"<<endl;
                    string phrase = "Good Bye Hunter";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    cout<<"Invalid input"<<endl;
                    string phrase = "Invalid input";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t<//////////////////// PERSONAL ASSISSTANT ////////////////////"<<endl<<endl;
                    cout << "**********************" << endl;
                    cout << "Incorrect Password" << endl;
                    cout << "**********************" << endl << endl;

                    string phrase = "Incorrect Password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;
}