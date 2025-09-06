#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

//definindo o struct
struct infoUser{
    std::string nome;
    std::string corfav;
    std::string comidafav;
};


int main(){
    //criando mensagens
    infoUser infoUser1 = {"Julia", "roxo", "melancia"};
    infoUser infoUser2 = {"mario", "verde", "pizza"};

    //transformando as informações em um vetor (só de strings)
    std::vector<infoUser> info;
    info.push_back(infoUser1);
    info.push_back(infoUser2);

    //configurando a exibição de todas as mensagens criadas
    for(const auto& m : info){
        std::cout <<
            "Nome: " << m.nome << " | "
            << "Cor favorita: " << m.corfav << " | "
            << "Comida favorita: " << m.comidafav
        << '\n';
    }

    /*
        pode-se exibir da seguinte maneira também:
        std::cout << infoUser1.nome;
        std::cout << infoUser1.corfav;
        std::cout << infoUser1.comidafav;
    */

    return EXIT_SUCCESS;
}
