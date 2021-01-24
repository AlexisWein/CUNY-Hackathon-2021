#include <iostream>
#include <string>
using namespace std;

//This function checks the validity of the user's input
bool isValid(string answer)
{
    if(answer == "1"  ||  answer == "2"  ||  answer == "3"  ||  answer == "4")
        return true;
    else
    {
        cout << "\nInvalid input. Please choose an option 1-4." << endl;
    }
    
    return false;
}

//This function contains the questions in the safety quiz
int quiz()
{
    //Introduction to the quiz
    int safetyScore = 0;
    string answer = "0";
    cout << "The following questions are based on current CDC guidelines, which can be found here: " << endl;
    cout << "https://www.cdc.gov/coronavirus/2019-ncov/prevent-getting-sick/prevention.html" << endl << endl;
    
    cout << "For each of the following questions, please choose the option that best describes you." << endl << endl;

    //Mask-wearing
    do{
    cout << "Which of these best describes your mask-wearing habits?" << endl;
    cout << "1. I wear a mask over my nose and mouth." << endl;
    cout << "2. I wear a mask over my nose, but not my mouth." << endl;
    cout << "3. I wear a mask below my nose and mouth, and only pull it up when someone is looking." << endl;
    cout << "4. I don't wear a mask when I am out." << endl;
    cin >> answer;
    }while(!isValid(answer));               //calls the isValid function to check if the user's input is valid
    
    //determines points to be added based on user's answer
    if(answer == "1")
        safetyScore += 3;
    else if(answer == "2")
        safetyScore += 2;
    else if(answer == "3")
        safetyScore += 1;
    else if(answer == "4")
        safetyScore += 0;


    //Avoiding crowds
    do{
    cout << "Which of these best describes your habits around crowds?" << endl;
    cout << "1. I avoid crowds and wear a mask if social distancing is impossible." << endl;
    cout << "2. I avoid most crowds, but I'm willing to make exceptions (i.e. parties, large family gatherings)." << endl;
    cout << "3. I don't avoid crowds, but I wear a mask when I am in them." << endl;
    cout << "4. I don't avoid crowds, and I don't wear a mask when I am in them (i.e. bars, clubs, large parties)." << endl;
    cin >> answer;
    }while(!isValid(answer));               //calls the isValid function to check if the user's input is valid

    //determines points to be added based on user's answer
    if(answer == "1")
        safetyScore += 3;
    else if(answer == "2")
        safetyScore += 2;
    else if(answer == "3")
        safetyScore += 1;
    else if(answer == "4")
        safetyScore += 0;

    
    //Ventilation
    do{
    cout << "Which of these best describes you, in regards to poorly ventilated spaces?" << endl;
    cout << "1. I avoid poorly ventilated spaces if possible, but if impossible, I wear a mask and stay 6 feet from other people." << endl;
    cout << "2. I mostly avoid poorly ventilated spaces if possible, but I'm willing to make exceptions." << endl;
    cout << "3. I make no effort to avoid poorly ventilated spaces, but I wear a mask and stay 6 feet from others." << endl;
    cout << "4. I make no effort to avoid poorly ventilated spaces, and I don't wear a mask or stay 6 feet from others." << endl;
    cin >> answer;
    }while(!isValid(answer));               //calls the isValid function to check if the user's input is valid

    //determines points to be added based on user's answer
    if(answer == "1")
        safetyScore += 3;
    else if(answer == "2")
        safetyScore += 2;
    else if(answer == "3")
        safetyScore += 1;
    else if(answer == "4")
        safetyScore += 0;


    //Covering coughs and sneezes
    do{
    cout << "Which of these best describes your habits with coughing and sneezing?" << endl;
    cout << "1. I cover my coughs and sneezes with a tissue or the inside of my elbow, and I wash my hands or use hand sanitizer after." << endl;
    cout << "2. I cover my coughs and sneezes with a tissue or the inside of my elbow, but I don't wash my hands or use hand sanitizer after." << endl;
    cout << "3. I cough/sneeze into my hands, but I wash them or use hand sanitizer after." << endl;
    cout << "4. I don't cover my coughs and sneezes, or I cover them with my hands but don't wash them or use hand sanitizer after." << endl;
    cin >> answer;
    }while(!isValid(answer));               //calls the isValid function to check if the user's input is valid

    //determines points to be added based on user's answer
    if(answer == "1")
        safetyScore += 3;
    else if(answer == "2")
        safetyScore += 2;
    else if(answer == "3")
        safetyScore += 1;
    else if(answer == "4")
        safetyScore += 0;


    //Cleaning and disinfecting
    do{
    cout << "Which of these best describes your cleaning habits?" << endl;
    cout << "1. I clean and disinfect frequently touched surfaces daily (i.e. keys, phone, light switches, door handles)." << endl;
    cout << "2. I clean and disinfect frequently touched surfaces when I remember, which is most days." << endl;
    cout << "3. I clean and disinfect frequently touched surfaces occasionally." << endl;
    cout << "4. I don't clean and disinfect frequently touched surfaces.." << endl;
    cin >> answer;
    }while(!isValid(answer));               //calls the isValid function to check if the user's input is valid

    //determines points to be added based on user's answer
    if(answer == "1")
        safetyScore += 3;
    else if(answer == "2")
        safetyScore += 2;
    else if(answer == "3")
        safetyScore += 1;
    else if(answer == "4")
        safetyScore += 0;


    //Monitoring personal health
    do{
    cout << "Which of these best describes your habits monitoring your health?" << endl;
    cout << "1. I monitor myseld for potential symptoms of Covid-19. If I notice any, I avoid contact with others and get tested." << endl;
    cout << "2. I don't monitor myself for symptoms, but if I happen to notice any, I'll avoid contact with others and get tested. " << endl;
    cout << "3. I may or may not monitor myself for symptoms. If I happen to notice any, I won't avoid contact with others, but I'll get tested." << endl;
    cout << "4. I go out, or would go out, with symptoms of Covid-19." << endl;
    cin >> answer;
    }while(!isValid(answer));               //calls the isValid function to check if the user's input is valid

    //determines points to be added based on user's answer
    if(answer == "1")
        safetyScore += 3;
    else if(answer == "2")
        safetyScore += 2;
    else if(answer == "3")
        safetyScore += 1;
    else if(answer == "4")
        safetyScore += 0;

    
    //Hand washing question #1
    do{
    cout << "Which of these best describes your hand washing technique?" << endl;
    cout << "1. I wash my hands frequently with soap and water for at least 20 seconds." << endl;
    cout << "2. I wash my hands frequently with soap and water for less than 20 seconds. " << endl;
    cout << "3. I rinse my hands with water, but no soap" << endl;
    cout << "4. I wash my hands rarely, or not at all." << endl;
    cin >> answer;
    }while(!isValid(answer));               //calls the isValid function to check if the user's input is valid

    //determines points to be added based on user's answer
    if(answer == "1")
        safetyScore += 3;
    else if(answer == "2")
        safetyScore += 2;
    else if(answer == "3")
        safetyScore += 1;
    else if(answer == "4")
        safetyScore += 0;

    return safetyScore;


    //Hand washing question #2
    do{
    cout << "Which of these best describes your hand-washing habits?" << endl;
    cout << "1. I wash my hands for the following reasons, among others: after being in a public place, after using the bathroom, before eating or preparing food, and before touching my face. I use hand sanitizer if soap and water are not available.." << endl;
    cout << "2. I wash my hands sometimes, such as when using the bathroom or before eating, but not before touching my face." << endl;
    cout << "3. I was my hands occasionally, but only when they're visibly dirty." << endl;
    cout << "4. I wash my hands rarely, or not at all." << endl;
    cin >> answer;
    }while(!isValid(answer));               //calls the isValid function to check if the user's input is valid

    //determines points to be added based on user's answer
    if(answer == "1")
        safetyScore += 3;
    else if(answer == "2")
        safetyScore += 2;
    else if(answer == "3")
        safetyScore += 1;
    else if(answer == "4")
        safetyScore += 0;
}


int main(int argc, char** argv) {
  
    //Declare variables
    char input = '0';
    int safetyScore = 0;

    //Introduction
 	cout << "*************************************" << endl;
    cout << "* Welcome to the Covid Safety Quiz! *" << endl;
    cout << "*************************************" << endl;
    cout << "Here, you can assess your personal habits related to Covid-19 based on current CDC guidance." << endl;

    cout << "\nWould you like to proceed? (Y/N)" << endl;
    cin >> input;
    if(input == 'Y'  ||  input == 'y')
        {
            cout << "Great! Thank you for taking a step toward safety." << endl << endl;
            safetyScore = quiz();
            //cout << "Safety Score: " << safetyScore << endl;              //debugging statement that prints the user's safety score

            if(safetyScore >= 19  &&  safetyScore <= 24)
            {
                cout << "It seems like you are taking a lot of precautions to reduce the spread of Covid-19. Keep up the good work!" << endl;
                cout << "Here are some resources from the CDC related to Covid-19. Click the link to learn more: " << endl;
                cout << "https://www.cdc.gov/coronavirus/2019-ncov/your-health/index.html \n" << endl;
            }
            else if(safetyScore >= 13  &&  safetyScore <= 18)
            {
                cout << "It seems like you are taking several precautions to reduce the spread of Covid-19. There's still room for improvement!" << endl;
                cout << "Here are some resources from the CDC related to Covid-19. Click the link to learn more: " << endl;
                cout << "https://www.cdc.gov/coronavirus/2019-ncov/your-health/index.html \n" << endl;
            }
            else if(safetyScore >= 7  &&  safetyScore <= 12)
            {
                cout << "It seems like you are taking some precautions to reduce the spread of Covid-19. There's plenty of room for improvement!" << endl;
                cout << "Here are some resources from the CDC related to Covid-19. Click the link to learn more: " << endl;
                cout << "https://www.cdc.gov/coronavirus/2019-ncov/your-health/index.html \n" << endl;
            }
            else if(safetyScore >= 0  && safetyScore <= 6)
            {
                cout << "It seems like you are taking little or no precautions to reduce the spread of Covid-19. Remember, Covid-19 is a serious disease that has affected millions of people." << endl;
                cout << "Please start taking more precautions to protect yourself and others from this illness." << endl;
                cout << "Here are some resources from the CDC related to Covid-19. Click the link to learn more: " << endl;
                cout << "https://www.cdc.gov/coronavirus/2019-ncov/your-health/index.html \n" << endl;
            }
        }
    else if(input == 'N'  ||  input == 'n')
    {
        cout << "Okay. Here are the CDC guidelines for you to view at your own convenience: " << endl;
        cout << "https://www.cdc.gov/coronavirus/2019-ncov/prevent-getting-sick/prevention.html \n" << endl;
    }
    else
    {
        cout << "Invalid input. Here are the CDC guidelines for you to view at your own convenience:" << endl;
        cout << "https://www.cdc.gov/coronavirus/2019-ncov/prevent-getting-sick/prevention.html \n" << endl;
    }

 return 0;
}