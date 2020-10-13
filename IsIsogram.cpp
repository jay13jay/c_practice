bool UBullCowCartridge::IsIsogram2(FString Word) const{
    // check isogram
    for(int32 Index = 0; Index < Word.Len(); Index++){
        for (int32 Check = Index+1; Check < Word.Len(); Check++){
            if(Word[Index] == Word[Check]){
                PrintLine(TEXT("Letter Match Found! NOT an Isogram"));
                return false;
            }
        }
    }
    PrintLine(TEXT("All letters checked, word IS an isogram"));
    return true;
