// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{

    
    Super::BeginPlay();


    SetupGame();


    PrintLine(FString::Printf(TEXT("The Hidden Word is: %s"), *HiddenWord)); // Debug Line

    PrintLine(TEXT("Hello!"));
    PrintLine(TEXT("Guess the 4 letter word"));
    PrintLine(TEXT("Press enter to begin"));

   
    //Settingupthegame
 

    //Set Lives

    //Prompt Player For Guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();



if (Input == HiddenWord)
{
    PrintLine(TEXT("Congratulations!"));
}
else 
{
    if (Input.Len()!=HiddenWord.Len())
{
    PrintLine(TEXT("The hidden word is 4 characters long."));
}
     PrintLine(TEXT("You have lost!"));
}
//Check If Isogram
//Check Right Number
//Check Right Number Of Characters
//Prompt To GuessAgain

//Remove Life

//Check if lives > 0
//If yes guess again
//Show Lives left
//If no show GameOver
//Prompt to play again
//Check user input
//PlayAgain or quit

}

void UBullCowCartridge::SetupGame()
{
HiddenWord = TEXT("cake");  
Lives = 4; 
}
