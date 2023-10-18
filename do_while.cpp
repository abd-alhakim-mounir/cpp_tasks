#include <iostream>


int main()
{
    char sentence[13]= "goog morning";
    int countVowels = 0;
    int i = 0;

    do
    {
        if(sentence[i] == 'a' ||
           sentence[i] == 'e' ||
           sentence[i] == 'o' ||
           sentence[i] == 'i' ||
           sentence[i] == 'u' )
        {
            countVowels++;
        }
        std::cout << "sentence ["<<i<<"]=" << sentence[i] <<std::endl;
        i++;
    } while (i<13);
    std::cout << "countVowels = " << countVowels << std::endl;

    return 0;
    
}