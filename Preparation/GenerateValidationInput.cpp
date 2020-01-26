# include <fstream>
using namespace std;

int main()
{
    int investor_guilt = 1;
    int investor_planning = 2;
    int investor_tom = 2;
    int trustee_guilt = 1;
    int trustee_planning = 0;
    int trustee_tom = 0;
    ofstream myFile ("ValidationInput.bin", ios::out | ios::binary);
    for (int i = 0; i < 10; i++)
    {
        myFile.write(reinterpret_cast<const char *>(&investor_guilt), sizeof(investor_guilt));
        myFile.write(reinterpret_cast<const char *>(&investor_planning), sizeof(investor_planning));
        myFile.write(reinterpret_cast<const char *>(&investor_tom), sizeof(investor_tom));
        myFile.write(reinterpret_cast<const char *>(&trustee_guilt), sizeof(trustee_guilt));
        myFile.write(reinterpret_cast<const char *>(&investor_planning), sizeof(trustee_planning));
        myFile.write(reinterpret_cast<const char *>(&investor_tom), sizeof(trustee_tom));
    }
    myFile.close();
    
    return 0;
}
