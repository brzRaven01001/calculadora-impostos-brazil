#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstdlib>


double calcularINSS(double salario) {
    double inss = 0.0;

    if (salario <= 1412.00)
        inss = salario * 0.075;
    else if (salario <= 2666.68)
        inss = (1412.00 * 0.075) + ((salario - 1412.00) * 0.09);
    else if (salario <= 4000.03)
        inss = (1412.00 * 0.075) + ((2666.68 - 1412.00) * 0.09) +
               ((salario - 2666.68) * 0.12);
    else if (salario <= 7786.02)
        inss = (1412.00 * 0.075) + ((2666.68 - 1412.00) * 0.09) +
               ((4000.03 - 2666.68) * 0.12) + ((salario - 4000.03) * 0.14);
    else
        inss = (1412.00 * 0.075) + ((2666.68 - 1412.00) * 0.09) +
               ((4000.03 - 2666.68) * 0.12) + ((7786.02 - 4000.03) * 0.14);

    return inss;
}

double calcularIRRF(double base) {
    if (base <= 2112.00)
        return 0.0;
    else if (base <= 2826.65)
        return (base * 0.075) - 158.40;
    else if (base <= 3751.05)
        return (base * 0.15) - 370.40;
    else if (base <= 4664.68)
        return (base * 0.225) - 651.73;
    else
        return (base * 0.275) - 884.96;
}

void calcularAposentadoria(double salarioBruto) {
    int idadeAtual, idadeMinima, tempoContribAtual, tempoMinimo;
    double percentualContrib;

    std::cout << "\n--- Calculo de Aposentadoria ---\n";
    std::cout << "Idade atual: ";
    std::cin >> idadeAtual;
    std::cout << "Tempo de contribuicao atual (anos): ";
    std::cin >> tempoContribAtual;
    std::cout << "Idade minima para aposentadoria: ";
    std::cin >> idadeMinima;
    std::cout << "Tempo minimo de contribuicao exigido (anos): ";
    std::cin >> tempoMinimo;
    std::cout << "Percentual de contribuicao (%) sobre o salario: ";
    std::cin >> percentualContrib;

    int anosIdadeRestante = idadeMinima - idadeAtual;
    int anosContribRestante = tempoMinimo - tempoContribAtual;
    int anosRestantes = std::max(0, std::max(anosIdadeRestante, anosContribRestante));
    int idadeFinal = idadeAtual + anosRestantes;

    double contribuicaoMensal = salarioBruto * (percentualContrib / 100.0);
    double totalContribuir = contribuicaoMensal * 12 * anosRestantes;

    std::cout << std::fixed << std::setprecision(2);
    if (anosRestantes <= 0) {
        std::cout << "Voce ja pode se aposentar!\n";
    } else {
        std::cout << "\n--- Estimativa de Aposentadoria ---\n";
        std::cout << "Faltam " << anosRestantes << " ano(s) para se aposentar.\n";
        std::cout << "Idade estimada de aposentadoria: " << idadeFinal << " anos\n";
        std::cout << "Contribuicao mensal estimada: R$ " << contribuicaoMensal << "\n";
        std::cout << "Total estimado a contribuir ate la: R$ " << totalContribuir << "\n";
    }
}

int main() {
    double salarioBruto;

    std::cout << "Digite o salario bruto (R$): ";
    std::cin >> salarioBruto;

    double inss = calcularINSS(salarioBruto);
    double baseIR = salarioBruto - inss;
    double irrf = calcularIRRF(baseIR);
    double salarioLiquido = salarioBruto - inss - irrf;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n--- Resumo Fiscal ---\n";
    std::cout << "Salario bruto:      R$ " << salarioBruto << "\n";
    std::cout << "Desconto INSS:      R$ " << inss << "\n";
    std::cout << "Desconto IRRF:      R$ " << irrf << "\n";
    std::cout << "Salario liquido:    R$ " << salarioLiquido << "\n";

    calcularAposentadoria(salarioBruto);
    
    system("pause");

    return 0;
}
