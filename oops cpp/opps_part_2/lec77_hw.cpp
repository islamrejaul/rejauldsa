




//  hw 1 2 4 5 8 2  read this prebuilt file then sort and then write the sorted data and then read










#include<iostream>
#include<fstream>
using namespace std;




int main(){





ofstream fout;  // fout holo ofstream class r object...



fout.open("zoom.txt");  // file present na thakle...fout file ta k nijer theke create korbe then open kore debe...() bracket r moddhe file r path ta dite hobe mane jekhane file ta a6e,ba na thakle jekhane file ta crete hobe
// open() function ta ofstream class r moddhekar property


// file ta k open korar por tar moddhe amra write korte parbo

fout<<"1 2 4 5 8 2";    // file r moddhe write kor6i

fout.close();  // eta file ta k close kore debe....file ta k close kore di66i.....file ta k close kano kor6i?...ans...resources used in file handling, release korar jonno










ifstream fin;

// file ko open karo
fin.open("zoom.txt");



//tarpor file r moddhe jeta a6e seta k read koro


char c;

// fin>>c;  // zoom.txt file r moddhekar "hello world" r akta akta kore character input nebe


c=fin.get();  // space k print koranor jonno


while(!fin.eof()){   // fin.eof() means end of file...sob kota letter(data)  read kora hoye gele 1 return korbe...tar age file completely read na howa porjonto 0 return korbe.....// o! means 1...1 means loop cholbe
    cout<<c;
    // fin>>c;   // automatically next character r ka6e pou6e jabo and then seta k input nebo..




c=fin.get();   // space k print koranor jonno


}

fin.close();


// file r moddhe space chilo but seta print ho66e na
// fin>>c  space/tab k character hisabe consider e kor6e na



}


