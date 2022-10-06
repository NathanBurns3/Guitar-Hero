#include <iostream>

using namespace std;

/*
The function of the main method is
to print out my application to the
absurd musical competition of my choice
*/
// Author: Nathan Burns
int main() {
    //A string variable that hold the value of the performance choice
    std::string performanceChoice { "Karaoke" };

    //A string variable that hold the value of the song title
    std::string song { "Sunflower" };
    
    //A string variable that hold the value of the performer
    std::string performer { "Post Malone, Swae Lee" };

    //A string variable that hold the value of the song length
    std::string time { "2:38" };

    //Print out the different application lines
    cout << performanceChoice << "\n";
    cout << song << endl;
    cout << "As performed by: " << performer << "\n"; //Concatenate the performer to the label
    cout << "Time: " << time << endl; //Concatenate the song length to the label
}