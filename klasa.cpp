class Kolory {
private:
    char* tablica;

public:
    // Konstruktor
    Kolory() : tablica(new char[3]{'a', 'b', 'c'}) {}

    // Konstruktor kopiujący
    Kolory(const Kolory& other) {
        tablica = new char[3];

        for (int i = 0; i < 3; i++) {
            tablica[i] = other.tablica[i];
        }
    }

    // Operator przypisania
    Kolory& operator=(const Kolory& other) {
        if (this == &other) {
            return *this;
        }

        delete[] tablica;
        tablica = new char[3];

        for (int i = 0; i < 3; i++) {
            tablica[i] = other.tablica[i];
        }

        return *this;
    }

    // Destruktor
    ~Kolory() {
        delete[] tablica;
    }
};

int main() {
    Kolory tablica;

    return 0;
}