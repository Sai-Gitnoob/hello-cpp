#include <iostream>

using namespace std;

int main() {
  string name ;
  cout << "Enter Your name "<<endl;
  cin>>name;
  cout<<"Hello"<<name<<endl;
  return 0;
}

/*
================================================================================
BEHIND THE SCENES: HOW INPUT FLOWS THROUGH RAM
================================================================================

1. THE HARDWARE SIGNAL (Keyboard)
   - When you press keys on your keyboard, the hardware generates raw 
     electronic input signals.

2. THE INPUT BUFFER STAGE (RAM)
   - The Operating System catches these signals and stores the characters 
     sequentially in a temporary memory allocation inside RAM.
   - This temporary holding area is known as the Input Buffer (or stdin stream).
   - The text sits idle in this buffer until you press the 'Enter' key.
   - Pressing 'Enter' adds a newline ('\n') character, signaling that the 
     input sequence is complete and ready for your program.

3. THE EXTRACTION PHASE (cin)
   - The stream controller reads the characters out of the RAM buffer 
     sequentially from left to right.

4. THE VARIABLE ASSIGNMENT (RAM Memory Box)
   - The system parses the extracted characters and copies them directly into 
     the specific RAM memory address reserved for your program's variable.
   - Once data is successfully extracted and stored in the variable's box, 
     the temporary input buffer is cleared.
================================================================================
*/
