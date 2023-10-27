#include <iostream>
#include <cmath>

using namespace std;

int datatypes();
int strings();
int numbers();
int power();
//string getDayOfWeek();
int array();
//int guessingGame();
//int calculatorTwo();
//int information();
//int calculator();
//int madlib();
void sayHi(string name, int age);
double cube(double numvoid);

int getMax(int num1, int num2, int num3){
    int result;
    if(num1>=num2 && num1>=num3){
        result = num1;
    } else if (num2>=num1 && num2>=num3){
    result = num2;
    }
    else{
        result = num3;
    }
    return result;
}

int power(int baseNum, int powNum){
    int result = 1;

    for(int i = 0; i < powNum; i++){
        result *= baseNum;
    }

    cout << "power is " << result << endl;
}

int main()
{
    bool isMale = false;
    bool isTall = false;

    string characterName = "Tom";
    int characterAge;
    characterAge = 1000 ;
    cout << "There was once a man named "<< characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    cout << "He liked the name "<< characterName << endl;
    cout << "The only rockstar over " << characterAge << " (that he knew of)" << endl;

    datatypes();
    strings();
    numbers();
    array();
    power(5,2);
   // information();
    //calculator();
    //madlib();
    //guessingGame();
    sayHi("Alfie",30);
    sayHi("Bob",32);
    sayHi("Jane",33);
    //calculatorTwo();
    cout << cube(5.0) << endl;
    //cout << getDayOfWeek(1) << endl;


    if(isMale && isTall){
    cout << "You are a tall male" << endl;
} else if(isMale && !isTall) {
    cout << "You are a short male" << endl;
} else if(!isMale && isTall){
    cout << "You are a tall woman" << endl;
} else {
     cout << "You are a short woman" << endl;
}

        if(isMale || isTall){
    cout << "You are either male or tall or both" << endl;
} else {
    cout << "You are neither male nor tall" << endl;
}

    cout << getMax(5,10,3) << endl;

    //WHILE LOOP

    int index = 1;
    while(index <=5){
    cout << index << endl;
    index++;
}

//###Do While Loop###
 //   int index = 6;
   // do { cout << index << endl;
   // index++;
   // } while(index <=5);
   // return 0
//} This will execute the code first before checking the condition.
//This will ensure that it runs once even if the condition is not satisfied.

//////////////////
/////FOR LOOP/////
//////////////////

int nums[] = {1,2,5,7,3};
for(int i = 0; i<5; i++){
    cout << nums[i] << endl;
}
//We can see that the C++ for loop is basically the same as
//in JavaScript, except that the index type is specified

    return 0;
}

//datatypes

int datatypes(){

    char grade = 'A';
    string phrase = "Alfie Collins";
    int age = 50;
    double gpa = 4.0 ;
    bool legendary = true;

    cout << grade << endl;
    cout << phrase << endl;


    return 0;

}

int strings(){

    string anotherPhrase = "Bionel Messi";
    cout << "Alfie\n";
    cout << "The backlash above ensures we print on a new line" << endl;
    cout << anotherPhrase << endl;
    cout << anotherPhrase.length() << endl;
    cout << anotherPhrase[0] << endl;
    anotherPhrase[0] = 'L';
    cout << anotherPhrase << endl;
    cout << anotherPhrase.find("Lionel", 0)<< endl;
    cout << anotherPhrase.find("Messi", 0)<< endl;
    string phraseSub;
    phraseSub = anotherPhrase.substr(7,3);
    cout << phraseSub<< endl;


    return 0;

}

int numbers(){

    int wnum = 5;
    double dnum = 5.5;

    wnum++;

    cout << 40 << endl;
    cout << 5+7 << endl;
    cout << 10%2 << endl;
    cout << wnum << endl;

    //cm functions
    cout << pow(2,3)<< endl;
    cout << sqrt(36)<< endl;
    cout << round(4.3)<< endl;
    cout << round(4.6)<< endl;
    cout << ceil(4.1)<< endl;
    cout << floor(4.8)<< endl;
    cout << fmax(3,10)<< endl;
    cout << fmin(3,10)<< endl;

    return 0;
}

//int information(){

  //  string name;
    //int age;

   // cout << "Enter your name: ";
    //getline(cin, name);
    //cout << "Enter your age: ";
    //cin >> age;

   // cout << "hello " << name << " you are " << age << " years old";

   // return 0;
//}

int calculator(){

    double num1,num2;

    //cout << "Enter first number: " << endl;
    //cin >> num1;

    //cout << "Enter second number: " << endl;
    //cin >> num2;

    //cout << num1 + num2;

    return 0;
}

int madlib(){

    string color, pluralNoun, celebrity;

    cout << "enter a color: " << endl;
    getline(cin, color);

    cout << "enter a plural noun: " << endl;
    getline(cin, pluralNoun);

    cout << "enter a celbrity: " << endl;
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
}

int array(){

    int luckyNums[20] = {4,8,15,16,23,42};
    int newArray[20];

    luckyNums[10] = 190;

    cout << "lucky number is " << luckyNums[10] << endl;

    return 0;
}

//functions
void sayHi(string name, int age){
    cout << endl;
    cout << "Hello " << name << " you are " << age <<" years old" <<endl;
}

double cube(double num){
    return num*num*num;
}

int calculatorTwo(){
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    int result;
    if(op == '+'){
        result = num1+num2;
    } else if(op == '-'){
        result = num1-num2;
    } else if(op == '*'){
        result = num1*num2;
    } else if (op == '/') {
        result = num1/num2;
    } else {
        cout << "Invalid operator" << endl;
    }

    cout << result << endl;

    return 0;
}

string getDayOfWeek(int dayNum){
    string dayName;

   switch(dayNum){
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid Day Number";
   }

    return dayName;
}

int guessingGame(){

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    do {
       if(guessCount < guessLimit){
       cout << "Enter guess: ";
       cin>> guess;
       guessCount++;
    } else{
        outOfGuesses = true;
    }
    } while(secretNum != guess && !
            outOfGuesses);
    if(outOfGuesses){
        cout << "You Lose!";
    } else{
    cout << "Correct!" << endl;
    }
    return 0;
}
