#include <iostream>
#include <string>

using namespace std;

// Função para calcular a média
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}
int main() {
    const int MAX = 5;
    string nome[MAX];
    float nota1[MAX], nota2[MAX], nota3[MAX], media[MAX];
    int quantidade;

    cout << "Quantos alunos deseja cadastrar? (Maximo 5): ";
    cin >> quantidade;

    if (quantidade > 5)
        quantidade = 5;

    for (int i = 0; i < quantidade; i++) {
        cin.ignore();

        cout << "\nAluno " << i + 1 << endl;
        cout << "Nome: ";
        getline(cin, nome[i]);

        cout << "Nota 1: ";
        cin >> nota1[i];

        cout << "Nota 2: ";
        cin >> nota2[i];

        cout << "Nota 3: ";
        cin >> nota3[i];

        media[i] = calcularMedia(nota1[i], nota2[i], nota3[i]);
    }
    int melhor = 0;
    for (int i = 1; i < quantidade; i++) {
        if (media[i] > media[melhor]) {
            melhor = i;
        }
    }
    cout << "\n==============================================\n";
    cout << "Nome\t\tN1\tN2\tN3\tMedia\tSituacao\n";
    cout << "==============================================\n";
    for (int i = 0; i < quantidade; i++) {
        cout << nome[i] << "\t"
             << nota1[i] << "\t"
             << nota2[i] << "\t"
             << nota3[i] << "\t"
             << media[i] << "\t";

        if (media[i] >= 7)
            cout << "Aprovado";
        else
            cout << "Reprovado";

        cout << endl;
    }
    cout << "\nAluno com a maior media: " << nome[melhor];
    cout << " (" << media[melhor] << ")" << endl;
    return 0;
}