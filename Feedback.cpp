#include <iostream>
#include<cstring>
#include "RegisteredUser.h"
using namespace std;

   Feedback ::Feedback(){
        strcpy(feedbackID , "");
        strcpy(description , "");
        rating=0;
    }
   Feedback ::Feedback(const char pfeedbackID[] ,const char pdescription[] , RegisteredUser * pregister){
        strcpy(feedbackID , pfeedbackID);
        strcpy(description , pdescription);
        user = pregister;
    }
    Void Feedback:: addRating(int pRating){}
    Void Feedback:: displayFeedback(){}
   Feedback ::~Feedback(){
        cout<<"";
    }
