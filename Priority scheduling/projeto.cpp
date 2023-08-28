#include <iostream>  /* std */
#include <algorithm> /*   */
#include <fstream>   /* handle with files */
#include <locale.h>  /* handle with encoding */

using namespace std;

struct process /* create process struct */
{
    char name[10];
    int exec_time;
    int priority;
    bool operator<(const process &another) const /* comparison function */
    {
        return priority < another.priority;
    }
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    struct process reg[5];
    ifstream my_file("prioridade.txt");
    for (i = 0; i < 5; i++) /* read first 5 lines of file and assign each to array of struct */
    {
        my_file >> reg[i].name >> reg[i].exec_time >> reg[i].priority;
    }
    sort(reg, reg + 5); /* sort into ascending order */
    float avg_exec, xx = 0;
    for (int j = 0; j < i; j++)
    {
        cout << "P" << reg[j].name;
        if (j > 0)
            xx += reg[j - 1].exec_time; /* compute avg execution time */
        avg_exec += xx;

        for (int x = 0; x < reg[j].exec_time; x++) /* print "-" for each 1 exec_time */
        {
            cout << "-";
        }
    }
    cout << "\nTempo medio de espera: " << avg_exec / i << " ms";
    return 0;
}