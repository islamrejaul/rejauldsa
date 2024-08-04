
// //data write


// #include<iostream>
// #include<fstream>


// using namespace std;



// int main(){


// // secondary memory te akta file a6e...sei file r moddhe ki6u data store korbo means write korbo

// // so...first a file ta k open korte hobe

// ofstream fout;  // fout holo ofstream class r object...



// fout.open("zoom.txt");  // file present na thakle...fout.open() file ta k nijer theke create korbe then open kore debe...() bracket r moddhe file r path ta dite hobe mane jekhane file ta a6e,ba na thakle jekhane file ta crete hobe
// // open() function ta ofstream class r moddhekar property


// // file ta k open korar por tar moddhe amra write korte parbo

// fout<<"helloooo india";    // file r moddhe write kor6i

// fout.close();  // eta file ta k close kore debe....file ta k close kore di66i.....file ta k close kano kor6i?...ans...resources used in file handling, release korar jonno



// // fout<<   eta file r moddhe data write korar jonno use ho66e





// }








// data read....kono akta file k open korbo and tarpor read korbo


// #include<iostream>
// #include<fstream>
// using namespace std;




// int main(){



// ifstream fin;

// // file ko open karo

// fin.open("zero.txt");   // fin.open()   file present na thakle nije theke create korte pare na....file age theke create kora thakle just open kore day



// //tarpor file r moddhe jeta a6e seta k read koro


// char c;

// // fin>>c;  // zoom.txt file r moddhekar "hello world" r akta akta kore character input nebe


// c=fin.get();  // space k print koranor jonno


// while(!fin.eof()){   // fin.eof() means end of file...sob kota letter(data)  read kora hoye gele 1 return korbe...tar age file completely read na howa porjonto 0 return korbe.....// o! means 1...1 means loop cholbe
//     cout<<c;
//     // fin>>c;   // automatically next character r ka6e pou6e jabo and then seta k input nebo..




// c=fin.get();   // space k print koranor jonno


// }

// fin.close();


// // file r moddhe space chilo but seta print ho66e na
// // fin>>c  space/tab k character hisabe consider e kor6e na



// }






// // example 2


// // vector r moddhe j deta ta k input niye6i seta k akta file r moddhe store kore rakbo...means write korbo



// #include<iostream>
// #include<fstream>
// #include<vector>
// #include<algorithm>
// using namespace std;









// int main(){



// vector<int>arr(5);
// cout<<"enter the inputs ";
// for(int i=0;i<5;i++)
// cin>>arr[i];



// //write data


// ofstream fout;
// // first a file ta k open korte hobe

// fout.open("zero.txt");

// fout<<"original data\n";

// for(int i=0;i<5;i++){   
//     fout<<arr[i]<<" ";     // file r moddhe array r data gulo k dhukiye di66e
// }


// fout<<"\nsorted data\n";




// // array r moddhekar data ta k sort korbo

// sort(arr.begin(),arr.end());


// for(int i=0;i<5;i++){   
//     fout<<arr[i]<<" ";     

// }



// }









// example 3







// #include<iostream>
// #include<fstream>
// #include<vector>
// #include<algorithm>
// using namespace std;




// int main(){


// ofstream fout;     // data write korbo


// fout.open("z1.txt");    // z1.txt namok file r moddhe data store kor6i

// fout<<"hello india\n";
// fout<<"hello rohit\n";
// fout<<"hello bhai\n";


// fout.close();


// //now z1.txt file r moddhekar data ta k read korbo  ( mane output a dekhabo)



// ifstream fin;

// fin.open("z1.txt");    // z1.txt file ta open holo


// string line;
 
// while(getline(fin,line)){    // getline() ... ei function ta z1.txt file r moddhekar puro string ta k read korbe and line r moddhe dhukiye debe ....akta kore string(whole line) tulbe r line r moddhe dhokabe

// cout<<line<<endl;         // jokhon z1.txt file r moddhekar somosto data read hoye jabe tokhon loop close hoye jabe
// }


// fin.close();





// }













