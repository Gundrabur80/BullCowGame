// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcoming the Player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the 4 letter word!")); //Magic Number Remove!
    PrintLine(TEXT("Press enter to continue..."));

    // Settig up Game
    HiddenWord = TEXT("cake"); // Set the HiddenWord
    // Set Lives

    // Prompt Player for Guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    // Checking PlayerGuess

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You guessed the word right! You have win!"));
    }
    else
    {
        PrintLine(TEXT("You guessed the word wrong! You lose!"));
    }
    
    // Check If Isogram
    // Prompt to Guess Again
    // Check if right number of characters
    // Prompt to Guess Again

    // Remove a Life

    // Check if Lives > 0
    // If Yes GuessAgain
    // Show Lives Left
    // If No Show GameOver and HiddenWord?
    // Prompot to play again, Press Enter to Play Again?
    // Check User Input
    // PlayAgain or Quit
}