class Rabbit{
    public:
        int operate(char comm);

        unsigned int place;
};

bool endless = 0;

int calcInRange(Rabbit *rabbit, int start, int end, int countOfRabbits);

#include <iostream>
using namespace std;

void debugRabbits(Rabbit *rabbits, int count){
    printf("Rabbit\tPlace\n");
    for(int i = 0; i < count; i++){
        printf("%i\t%i\n", i, rabbits[i].place);
    }
}

int main(int argc, char **argv){
    if(argc > 1)
        endless = 1;
    int rabbitCount = 0, placesCount = 0;
    cin >> rabbitCount >> placesCount;
    Rabbit *rabbit = (Rabbit*)malloc(sizeof(Rabbit) * rabbitCount);
    for (int i = 0; i < rabbitCount; i++){
        cin >> rabbit[i].place;
    }
    int countOfOperations = 0;
    cin >> countOfOperations;
    for(int i = 0; i < countOfOperations+1; i++){
        char litera = 0;
        int rabbitID = 0;
        cin >> litera >> rabbitID;
        if(litera == 'f'){
            debugRabbits(rabbit, rabbitCount);
            i--;
        } else if(rabbit[rabbitID-1].operate(litera) < 0){
            int thirdNumber = 0;
            cin >> thirdNumber;
            cout << calcInRange(rabbit, rabbitID, thirdNumber, rabbitCount) << endl;
        }
        if(endless)
            i--;
    }
}

int Rabbit::operate(char comm){
    if(comm == 'L' || comm == 'l')
        return (--place);
    else if(comm == 'R' || comm == 'r')
        return (++place);
    else return -1;
}

int calcInRange(Rabbit *rabbit, int start, int end, int countOfRabbits){
    int counter = 0;
    if(endless) printf("starting to count rabbits.\n\tStart: %i, end: %i, array: %p, count: %i\n", start, end, rabbit, countOfRabbits);
    for (int i = 0; i < countOfRabbits; i++){
        if(rabbit[i].place >= start && rabbit[i].place <= end) {counter++;
            if(endless) printf("%i rabbit is in counter cuz her place: %i\n", i, rabbit[i].place);}
        else if(endless) printf("%i rabbit is not in counter cuz her place: %i\n", i, rabbit[i].place);
    }
    return counter;
}