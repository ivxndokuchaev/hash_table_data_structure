#include <iostream>

class HashTable {
    private:
        std::string *m_values;
        int *m_keys;
        int m_length;
        int m_clength;

    public:
        HashTable(int length = 10)
            : m_values(new std::string[length]),
            m_keys(new int[length]),
            m_length(length),
            m_clength(0)
        {
        }

        int hashKey(int key) {
            
        }

        void print() {
            for (int i=0; i<m_clength; ++i) {
                std::cout << i+1 << ". " << *(m_keys + i);
                std::cout << "\t||\t" << *(m_values + i);
            }
            std::cout << '\n';
        }

        ~HashTable() {
            delete[] m_values;
            delete[] m_keys;
            m_values = nullptr;
            m_keys = nullptr;
        }
};

int main() {
    using namespace std;
    
    
    
    return 0;
}
