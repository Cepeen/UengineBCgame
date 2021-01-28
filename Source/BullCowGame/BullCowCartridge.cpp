// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{

    
    Super::BeginPlay();


    SetupGame();

    PrintLine(TEXT("The Hidden Word is %s."), *HiddenWord); // Debug Line

    // welcoming the player

    PrintLine(TEXT("Hello!"));
    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len());
    PrintLine(TEXT("Press enter to begin"));

    //Prompt Player For Guess

    EndGame();
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
// if game is over do ClearScreen() and SetupGame()
// checking player guess

if (Input == HiddenWord)
{
    PrintLine(TEXT("Congratulations!"));
    // bGameOver = true;
}
else 
{
    if (Input.Len()!=HiddenWord.Len())
{
    PrintLine(TEXT("The hidden word is: %s characters long."));
}
     PrintLine(TEXT("You have lost!"));
   // bGameOver = true;

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
HiddenWord = TEXT("cakes");  
Lives = 4; 
// bGameOver = false;
}
