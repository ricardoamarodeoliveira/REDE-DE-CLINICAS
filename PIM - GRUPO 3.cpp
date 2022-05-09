#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>


using namespace std;



void cabecalho(char titulo[]){
    cout << "PIM II - PROFESSOR EDUARDO SODR� - GRUPO 03  \n\n";
    cout << "* "<< titulo<<" *\n\n";
}

void menuPrincipal(){
    cabecalho("MENU PRINCIPAL");
    cout<< "1 - MENU DE CADASTROS\n";
    cout<< "2 - MENU DE RELAT�RIOS\n";
    cout<< "3 - MENU DE AGENDAMENTOS\n";
    cout<< "4 - RECUPERAR BANCO DE DADOS\n";
    cout<< "5 - GRAVAR BANCO DE DADOS\n";
    cout<< "6 - EXIBIR NOME DOS DESENVOLVEDORES\n";
    cout<< "0 - SAIR\n";

}

void menuCadastros(){
    cabecalho("MENU DE CADASTROS");
    cout<< "1 - CADASTRO DE UNIDADE DA REDE\n";
    cout<< "2 - CADASTRO DE PACIENTES\n";
    cout<< "3 - CADASTRO DE M�DICOS\n";
    cout<< "4 - CADASTRO DE FUNCION�RIOS\n";
    cout<< "5 - RECLAMA��ES E ELOGIOS\n";
    cout<< "6 - VOLTAR AO MENU PRINCIPAL\n";
    cout<< "0 - SAIR\n";

}

void menuUnidades(){
    cabecalho("CADASTRO DE UNIDADES");
    cout << "1 - CADASTRAR UNIDADE\n";
    cout << "2 - LISTA DE UNIDADES\n";
    cout << "3 - ENDERE�O DE UNIDADE\n";
    cout << "4 - ALTERAR NOME DA UNIDADE\n";
    cout << "5 - EXCLUIR UNIDADE\n";
    cout << "6 - VOLTAR AO MENU DE CADASTRO\n";
    cout << "0 - SAIR DO SISTEMA\n";

}

void menuPacientes(){
    cabecalho("MENU DE PACIENTES");
    cout << "1 - CADASTRAR PACIENTES\n";
    cout << "2 - LISTA DE PACIENTES\n";
    cout << "3 - ENDERE�O DE PACIENTE POR CPF\n";
    cout << "4 - ALTERAR NOME DO PACIENTE\n";
    cout << "5 - EXCLUIR PACIENTE\n";
    cout << "6 - VOLTAR AO MENU DE CADASTRO\n";
    cout << "0 - SAIR DO SISTEMA\n";

}

void menuMedicos(){
    cabecalho("MENU DE M�DICOS");
    cout << "1 - CADASTRAR M�DICOS\n";
    cout << "2 - LISTA DE M�DICOS\n";
    cout << "3 - ENDERE�O DE M�DICO POR CPF\n";
    cout << "4 - ALTERAR NOME DE M�DICO\n";
    cout << "5 - EXCLUIR M�DICO\n";
    cout << "6 - VOLTAR AO MENU DE CADASTRO\n";
    cout << "0 - SAIR DO SISTEMA\n";

}

void menuFuncionarios(){
    cabecalho("MENU DE FUNCION�RIOS");
    cout << "1 - CADASTRAR FUNCION�RIO\n";
    cout << "2 - LISTA DE FUNCION�RIOS\n";
    cout << "3 - ENDERE�O DE FUNCION�RIO POR CPF\n";
    cout << "4 - ALTERAR NOME DE FUNCION�RIO\n";
    cout << "5 - EXCLUIR FUNCION�RIO\n";
    cout << "6 - VOLTAR AO MENU DE CADASTRO\n";
    cout << "0 - SAIR DO SISTEMA\n";

}

void menuAgendamentos(){
    cabecalho("MENU DE AGENDAMENTO");
    cout << "1 - AGENDAR CONSULTA\n";
    cout << "2 - LISTA DE CONSULTAS AGENDADAS\n";
    cout << "3 - ALTERAR DATA DE AGENDAMENTO\n";
    cout << "4 - EXCLUIR AGENDAMENTO\n";
    cout << "6 - VOLTAR AO MENU DE PRINCIPAL\n";
    cout << "0 - SAIR DO SISTEMA\n";

}

void menuReclamacoeseelogios(){
    cabecalho("MENU DE RECLAMA��ES E ELOGIOS");
    cout << "1 - CADASTRAR RECLAMA��O\n";
    cout << "2 - CADASTRAR ELOGIO\n";
    cout << "3 - LISTA DE RECLAMA��ES E ELOGIOS\n";
    cout << "6 - VOLTAR AO MENU DE PRINCIPAL\n";
    cout << "0 - SAIR DO SISTEMA\n";


}

void menuRelatorios(){
    cabecalho("MENU DE RELAT�RIOS");
    cout << "1 - FATURAMENTO\n";
    cout << "2 - PACIENTES CADASTRADOS\n";
    cout << "3 - NOTA M�DIA RECLAMA��ES\n";
    cout << "4 - NOTA M�DIA ELOGIOS\n";
    cout << "6 - VOLTAR AO MENU PRINCIPAL\n";
    cout << "0 - SAIR DO SISTEMA\n";

}

struct cadRelatorios{
    char cpfPaciente[14];
    int notaAtendimento;
    char codigoUnidade[14];
    char codigoUnidadeAgendamento[14];

};



struct cadPacientes {
    char cpfPaciente[14];
    char nomePaciente[50];
    char telefonePaciente[14];
    char enderecoPaciente[50];
    char contatoUrgencia[50];
    char telefoneUrgencia[14];
    char codigoUnidadePaciente[14];

    };

struct cadMedicos {
    char cpfMedico[14];
    char crmMedico[10];
    char nomeMedico[50];
    char telefoneMedico[14];
    char enderecoMedico[50];
    char especialidadeMedico[50];
    char codigoUnidadeMedico[14];

};

struct cadUnidades {
    char codigoUnidade[14];
    char nomeUnidade[50];
    char cidadeUnidade[50];
    char enderecoUnidade[50];
    char cepUnidade[50];
    char nomeDiretor[14];
    char telefoneUnidade[14];

};

struct cadFuncionarios {
    char cpfFuncionario[14];
    char nomeFuncionario[50];
    char telefoneFuncionario[14];
    char enderecoFuncionario[50];
    char funcaoFuncionario[50];
    char contatoUrgenciaFuncionario[50];
    char telefoneUrgenciaFuncionario[14];
    char codigoUnidadeFuncionario[14];

};

struct cadAgendamentos {
    char dataAgendamento[50];
    char horarioAgendamento[50];
    char nomeMedicoAgendamento[50];
    char nomePacienteAgendamento[50];
    char nomeFuncionarioAgendamento[50];
    char nomeUnidadeAgendamento[50];
    char codigoUnidadeAgendamento[50];
    char telefoneUnidadeAgendamento[50];
    char enderecoUnidadeAgendamento[50];
    char cepUnidadeAgendamento[50];
    char nomeDiretorAgendamento[50];
    char codigoFuncionarioAgendamento[14];
    char codigoMedicoAgendamento[14];
    char codigoPacienteAgendamento[14];
    int precoAgendamento;



};

struct cadReclamacoes{
    int notaAtendimentoReclamacao;
    char reclamacoes[1000];
    char protocoloReclamacoes[14];

};



struct cadElogios{
    int notaAtendimentoElogio;
    char elogios[1000];
    char protocoloElogios[14];
};

const int totalCadX = 100;
struct cadRelatorios CadX[totalCadX];
int indiceX = 0;
FILE *pont_arqX;

const int totalCadA = 100;
struct cadAgendamentos CadA[totalCadA];
int indiceA = 0;
FILE *pont_arqA;


const int totalCadP = 100;
struct cadPacientes CadP[totalCadP];
int indiceP = 0;
FILE *pont_arqP;

const int totalCadM = 100;
struct cadMedicos CadM[totalCadM];
int indiceM = 0;
FILE *pont_arqM;

const int totalCadF = 100;
struct cadFuncionarios CadF[totalCadF];
int indiceF = 0;
FILE *pont_arqF;

const int totalCadU = 3;
struct cadUnidades CadU[totalCadU];
int indiceU = 0;
FILE *pont_arqU;


const int totalCadR = 100;
struct cadReclamacoes CadR[totalCadR];
int indiceR = 0;
FILE *pont_arqR;

const int totalCadE = 100;
struct cadElogios CadE[totalCadE];
int indiceE = 0;
FILE *pont_arqE;



void relatoriosPacientes(){

    bool achou = false;
    char codi[14];
    char codigoUnidadePaciente[14];
    float soma;
    int pacientes;
    int vezes = 0;


    cout <<"TOTAL DE PACIENTES CADASTRADOS NA REDE: "<<indiceP<<"\n\n";

    do {
    cout <<"PACIENTES CADASTRADOS POR UNIDADE: \n";
    cout << "DIGITE O C�DIGO DA UNIDADE: ";
    cin >> codi;
    for(int i = 0; i < totalCadP; i++){
        if(strcmp(codi, CadP[i].codigoUnidadePaciente) ==0){
                soma = soma += !achou;
                soma;

        }

    }
    if(achou){
        cout << "NENHUMA UNIDADE ENCONTRADA COM O C�DIGO: "<< codi<< "\n\n";


    }

    }while(achou);

    cout <<"PACIENTES CADASTRADOS: "<<soma<<"\n";

}

int mediaNotaReclamacao(){

    int tam;
    float soma = 0;
    for(int i=0; i<totalCadR; i++){
            soma += CadR[i].notaAtendimentoReclamacao;

    }

    cout<<"NOTA MEDIA DAS RECLAMA��ES: "<< soma / indiceR<<"\n\n";


}


int mediaNotaElogio(){
int tam;
    float soma = 0;
    for(int i=0; i<totalCadE; i++){
            soma += CadE[i].notaAtendimentoElogio;


    }

    cout<<"NOTA MEDIA DOS ELOGIOS: "<< soma / indiceE<<"\n\n";
    }


int relatorioFaturamento(){
    bool achou = false;
    int tam;
    char codi[14];
    int soma = 0;
    int somaUnidade = 0;
    for(int i=0; i<totalCadA; i++){
            soma += CadA[i].precoAgendamento;


    }

    cout<<"FATURAMENTO TOTAL DAS UNIDADES: "<< soma <<"\n\n";

    do {achou = false;
    cout <<"FATURAMENTO POR UNIDADE: \n";
    cout << "DIGITE O C�DIGO DA UNIDADE: ";
    cin >> codi;
    for(int i = 0; i < totalCadA; i++){
        if(strcmp(codi, CadA[i].codigoUnidadeAgendamento) ==0){
                somaUnidade += CadA[i].precoAgendamento;
                achou = true;


        }

    }


    if(!achou){
        cout << "NENHUMA UNIDADE ENCONTRADA COM O C�DIGO: "<< codi<< "\n\n";
    }
    }while(!achou);

cout <<"FATURAMENTO DA UNIDADE: "<<somaUnidade<<"\n";




    }

/*
void relatoriosNotas(){
    int soma;
    int notaAtendimento;


    for(int i = 0; i < totalCadR; i++){
    soma =  CadR[i].notaAtendimento++;
    cout<< "A SOMA DAS NOTAS DE ATENDIMENTO �: "<<soma<<"\n\n";

    system("pause");

    }
}

*/
void cadastrarUnidades(){
    if(indiceU >= totalCadU){
        cout << "N�O � POSSIVEL CADASTRAR MAIS UNIDADES, FALE COM O DESENVOLVEDOR\n";
        system("pause");
        return;
    }
    char codigoUnidade[14];
    int vezes = 0;
    cabecalho("CADASTRO DE UNIDADE DA REDE");
    cout << "CADASTRANDO A UNIDADE NO INDICE: "<< indiceU<<"\n";
    do {
        vezes = 0;
        cout << "DIGITE O C�DIGO: ";
        cin >> codigoUnidade;
        for(int i = 0; i<indiceU; i++){
             if(strcmp(CadU[i].codigoUnidade, codigoUnidade) == 0){
                vezes++;
            }
        }
        if(vezes > 0){
            cout << "C�DIGO INV�LIDO\n";
        }
    }while(vezes > 0);

    strcpy (CadU[indiceU].codigoUnidade, codigoUnidade);
    cout << "DIGITE O NOME: ";
    cin >> CadU[indiceU].nomeUnidade;
    cout << "DIGITE O TELEFONE DA UNIDADE: ";
    cin >> CadU[indiceU].telefoneUnidade;
    cout << "DIGITE A CIDADE DA UNIDADE: ";
    cin >> CadU[indiceU].cidadeUnidade;
    cout << "DIGITE O ENDERE�O DA UNIDADE: ";
    cin >> CadU[indiceU].enderecoUnidade;
    cout << "DIGITE O CEP DA UNIDADE: ";
    cin >> CadU[indiceU].cepUnidade;
    cout << "DIGITE O NOME DO DIRETOR DA UNIDADE: ";
    cin >> CadU[indiceU].nomeDiretor;


}



void cadastrarPacientes(){
    if(indiceP >= totalCadP){
        cout << "N�O � POSSIVEL CADASTRAR MAIS PACIENTES";
        system("pause");
        return;
    }
    char cpfPaciente[14];
    int vezes = 0;
    char codigoUnidadePaciente[14];
    cabecalho("CADASTRO DE PACIENTE");
    cout << "CADASTRANDO O PACIENTE NO INDICE: "<< indiceP<<"\n";

    bool achou = false;
    do { achou = false;
    cout << "DIGITE O C�DIGO DA UNIDADE: ";
    cin >> CadP[indiceP].codigoUnidadePaciente;
    for(int i = 0; i < totalCadP; i++){
        if(strcmp(CadP[indiceP].codigoUnidadePaciente, CadU[i].codigoUnidade) ==0){

            cout << "\n\n"<<"NOME DA UNIDADE: "<<CadU[i].nomeUnidade<<"\n";
            cout << "TELEFONE DA UNIDADE: "<<CadU[i].telefoneUnidade<<"\n";
            cout << "ENDERE�O DA UNIDADE: "<<CadU[i].enderecoUnidade<<"\n\n";
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUMA UNIDADE ENCONTRADA COM O C�DIGO: "<< codigoUnidadePaciente<< "\n\n";
    }
    }while(!achou);


    do {
        vezes = 0;
        cout << "DIGITE O CPF: ";
        cin >> cpfPaciente;
        for(int i = 0; i<indiceP; i++){
             if(strcmp(CadP[i].cpfPaciente, cpfPaciente) == 0){
                vezes++;
            }
        }
        if(vezes > 0){
            cout << "CPF INVALIDO\n";
        }
    }while(vezes > 0);

    strcpy (CadP[indiceP].cpfPaciente, cpfPaciente);
    cout << "DIGITE O NOME: ";
    cin >> CadP[indiceP].nomePaciente;
    cout << "DIGITE O TELEFONE DO PACIENTE: ";
    cin >> CadP[indiceP].telefonePaciente;
    cout << "DIGITE O ENDERE�O DO PACIENTE: ";
    cin >> CadP[indiceP].enderecoPaciente;
    cout << "DIGITE O CONTATO PARA URGENCIA: ";
    cin >> CadP[indiceP].contatoUrgencia;
    cout << "DIGITE O TELEFONE PARA URGENCIA: ";
    cin >> CadP[indiceP].telefoneUrgencia;


}


void cadastrarFuncionarios(){
    if(indiceF >= totalCadF){
        cout << "N�O � POSSIVEL CADASTRAR MAIS FUNCION�RIOS";
        system("pause");
        return;
    }
    char cpfFuncionario[14];
    char codigoUnidadeFuncionario[14];
    int vezes = 0;
    cabecalho("CADASTRO DE FUNCION�RIO");
    cout << "CADASTRANDO O FUNCION�RIO NO INDICE: "<< indiceF<<"\n";

    bool achou = false;
    do { achou = false;
    cout << "DIGITE O C�DIGO DA UNIDADE: ";
    cin >> CadF[indiceF].codigoUnidadeFuncionario;
    for(int i = 0; i < totalCadF; i++){
        if(strcmp(CadF[indiceF].codigoUnidadeFuncionario, CadU[i].codigoUnidade) ==0){

            cout << "\n\n"<<"NOME DA UNIDADE: "<<CadU[i].nomeUnidade<<"\n";
            cout << "TELEFONE DA UNIDADE: "<<CadU[i].telefoneUnidade<<"\n";
            cout << "ENDERE�O DA UNIDADE: "<<CadU[i].enderecoUnidade<<"\n\n";
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUMA UNIDADE ENCONTRADA COM O C�DIGO: "<< codigoUnidadeFuncionario<< "\n\n";
    }
    }while(!achou);

    do {
        vezes = 0;
        cout << "DIGITE O CPF: ";
        cin >> cpfFuncionario;
        for(int i = 0; i<indiceF; i++){
            if (strcmp(CadF[i].cpfFuncionario, cpfFuncionario) ==0){
                vezes++;
            }
        }
        if(vezes > 0){
            cout << "CPF INV�LIDO\n";
        }
    }while(vezes > 0);

    strcpy (CadF[indiceF].cpfFuncionario, cpfFuncionario);
    cout << "DIGITE O NOME: ";
    cin >> CadF[indiceF].nomeFuncionario;
    cout << "DIGITE A FUN��O DO FUNCION�RIO: ";
    cin >> CadF[indiceF].funcaoFuncionario;
    cout << "DIGITE O TELEFONE DO FUNCION�RIO: ";
    cin >> CadF[indiceF].telefoneFuncionario;
    cout << "DIGITE O ENDERE�O DO FUNCION�RIO: ";
    cin >> CadF[indiceF].enderecoFuncionario;
    cout << "DIGITE O CONTATO DE URG�NCIA DO FUNCION�RIO: ";
    cin >> CadF[indiceF].contatoUrgenciaFuncionario;
    cout << "DIGITE O TELEFONE DE URG�NCIA DO FUNCION�RIO: ";
    cin >> CadF[indiceF].telefoneUrgenciaFuncionario;

}


void cadastrarMedicos(){
    if(indiceM >= totalCadM){
        cout << "N�O � POSSIVEL CADASTRAR MAIS M�DICOS";
        system("pause");
        return;
    }
    char cpfMedico[14];
    char codigoUnidadeMedico[14];
    int vezes = 0;
    cabecalho("CADASTRO DE M�DICO");
    cout << "CADASTRANDO O M�DICO NO INDICE: "<< indiceM<<"\n";

    bool achou = false;
    do { achou = false;
    cout << "DIGITE O C�DIGO DA UNIDADE: ";
    cin >> CadM[indiceM].codigoUnidadeMedico;
    for(int i = 0; i < totalCadM; i++){
        if(strcmp(CadM[indiceM].codigoUnidadeMedico, CadU[i].codigoUnidade) ==0){

            cout << "\n\n"<<"NOME DA UNIDADE: "<<CadU[i].nomeUnidade<<"\n";
            cout << "TELEFONE DA UNIDADE: "<<CadU[i].telefoneUnidade<<"\n";
            cout << "ENDERE�O DA UNIDADE: "<<CadU[i].enderecoUnidade<<"\n\n";
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUMA UNIDADE ENCONTRADA COM O C�DIGO: "<< codigoUnidadeMedico<< "\n\n";
    }
    }while(!achou);


    do {
        vezes = 0;
        cout << "DIGITE O CPF: ";
        cin >> cpfMedico;
        for(int i = 0; i<indiceM; i++){
            if (strcmp(CadM[i].cpfMedico, cpfMedico) ==0){
                vezes++;
            }
        }
        if(vezes > 0){
            cout << "CPF INVALIDO\n";
        }
    }while(vezes > 0);

    strcpy (CadM[indiceM].cpfMedico, cpfMedico);
    cout << "DIGITE O CRM: ";
    cin >> CadM[indiceM].crmMedico;
    cout << "DIGITE O NOME: ";
    cin >> CadM[indiceM].nomeMedico;
    cout << "DIGITE A ESPECIALIDADE DO M�DICO: ";
    cin >> CadM[indiceM].especialidadeMedico;
    cout << "DIGITE O TELEFONE DO M�DICO: ";
    cin >> CadM[indiceM].telefoneMedico;
    cout << "DIGITE O ENDERE�O DO M�DICO: ";
    cin >> CadM[indiceM].enderecoMedico;

}


void cadastrarAgendamentos(){
    if(indiceA >= totalCadA){
        cout << "N�O � POSSIVEL CADASTRAR MAIS UNIDADES";
        system("pause");
        return;
    }
    char codigoAgendamento[14];
    char codigoUnidadeAgendamento[14];
    char cpfPaciente[14];




    int vezes = 0;
    cabecalho("CADASTRO DE AGENDAMENTO");
    cout << "CADASTRANDO O AGENDAMENTO NO INDICE: "<< indiceA<<"\n";

    cout << "DIGITE A DATA: ";
    cin >> CadA[indiceA].dataAgendamento;
    cout << "DIGITE O HORARIO: ";
    cin >> CadA[indiceA].horarioAgendamento;
    cout<<"VALOR COBRADO: ";
    cin >> CadA[indiceA].precoAgendamento;

    bool achou = false;
    char nomeUnidadeAgendamento[14];
    do { achou = false;
    cout << "DIGITE O C�DIGO DA UNIDADE: ";
    cin >> CadA[indiceA].codigoUnidadeAgendamento;
    for(int i = 0; i < totalCadA; i++){
        if(strcmp(CadA[indiceA].codigoUnidadeAgendamento, CadU[i].codigoUnidade) ==0){

            cout << "\n\n"<<"NOME DA UNIDADE: "<<CadU[i].nomeUnidade<<"\n";

            achou = true;
        }
    }



    if(!achou){
        cout << "NENHUMA UNIDADE ENCONTRADA COM O C�DIGO: "<< codigoUnidadeAgendamento<< "\n\n";
    }
    }while(!achou);


    do { achou = false;
    cout << "CONFIRME O NOME DA UNIDADE: ";
    cin >> CadA[indiceA].nomeUnidadeAgendamento;
    for(int i = 0; i < totalCadA; i++){
        if(strcmp(CadA[indiceA].nomeUnidadeAgendamento, CadU[i].nomeUnidade) ==0){
            achou = true;
        }
    }
if(!achou){
        cout << "NENHUMA UNIDADE ENCONTRADA COM O NOME: "<< nomeUnidadeAgendamento<< "\n\n";
    }
    }while(!achou);


    char codigoFuncionarioAgendamento[14];
    char nomeFuncionarioAgendamento[50];
    do { achou = false;
    cout << "DIGITE O CPF DO FUNCION�RIO: ";
    cin >> CadA[indiceA].codigoFuncionarioAgendamento;
    for(int i = 0; i < totalCadF; i++){
        if(strcmp(CadA[indiceA].codigoFuncionarioAgendamento, CadF[i].cpfFuncionario) ==0){
            cout << "\n\n"<<"NOME DO FUNCIONARIO: "<<CadF[i].nomeFuncionario<<"\n";
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM FUNCION�RIO ENCONTRADO COM O CPF: "<< codigoFuncionarioAgendamento<< "\n\n";
    }
    }while(!achou);


    do { achou = false;
    cout << "CONFIRME O NOME DO FUNCION�RIO: ";
    cin >> CadA[indiceA].nomeFuncionarioAgendamento;
    for(int i = 0; i < totalCadF; i++){
        if(strcmp(CadA[indiceA].nomeFuncionarioAgendamento, CadF[i].nomeFuncionario) ==0){


            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM FUNCION�RIO ENCONTRADO COM O NOME: "<< nomeFuncionarioAgendamento<< "\n\n";
    }
    }while(!achou);



    char codigoMedicoAgendamento[14];
    char nomeMedicoAgendamento[50];

    do { achou = false;
    cout << "DIGITE O CPF DO M�DICO: ";
    cin >> CadA[indiceA].codigoMedicoAgendamento;
    for(int i = 0; i < totalCadM; i++){
        if(strcmp(CadA[indiceA].codigoMedicoAgendamento, CadM[i].cpfMedico) ==0){

            cout << "\n\n"<<"NOME DO M�DICO: "<<CadM[i].nomeMedico<<"\n";
            cout << "ESPECIALIDADE DO M�DICO = "<<CadM[i].especialidadeMedico<<"\n\n";
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM M�DICO ENCONTRADO COM O CPF: "<< codigoMedicoAgendamento<< "\n\n";
    }
    }while(!achou);


    do { achou = false;
    cout << "CONFIRME O NOME DO M�DICO: ";
    cin >> CadA[indiceA].nomeMedicoAgendamento;
    for(int i = 0; i < totalCadM; i++){
        if(strcmp(CadA[indiceA].nomeMedicoAgendamento, CadM[i].nomeMedico) ==0){
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM M�DICO ENCONTRADO COM O NOME: "<< nomeMedicoAgendamento<< "\n\n";
    }
    }while(!achou);



    char nomePacienteAgendamento[50];
    char codigoPacienteAgendamento[14];

    do { achou = false;
    cout << "DIGITE O CPF DO PACIENTE: ";
    cin >> CadA[indiceA].codigoPacienteAgendamento;
    for(int i = 0; i < totalCadP; i++){
        if(strcmp(CadA[indiceA].codigoPacienteAgendamento, CadP[i].cpfPaciente) ==0){
            cout << "\n\n"<<"NOME DO PACIENTE: "<<CadP[i].nomePaciente<<"\n";
            cout << "TELEFONE DO PACIENTE: "<<CadP[i].telefonePaciente<<"\n";
            cout << "ENDERE�O DO PACIENTE: "<<CadP[i].enderecoPaciente<<"\n\n";
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM PACIENTE ENCONTRADO COM O CPF: "<< codigoPacienteAgendamento<< "\n\n";
    }
    }while(!achou);


    do { achou = false;
    cout << "CONFIRME O NOME DO PACIENTE: ";
    cin >> CadA[indiceA].nomePacienteAgendamento;

    for(int i = 0; i < totalCadP; i++){
        if(strcmp(CadA[indiceA].nomePacienteAgendamento, CadP[i].nomePaciente) ==0){

            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM PACIENTE ENCONTRADO COM O NOME: "<< nomePacienteAgendamento<< "\n\n";
    }
    }while(!achou);







     system("pause");
}



void cadastrarReclamacoes(){
    if(indiceR >= totalCadR){
        cout << "N�O � POSSIVEL CADASTRAR MAIS RECLAMA��ES";
        system("pause");
        return;
    }
    char protocoloReclamacoes[14];
    int vezes = 0;
    cabecalho("REGISTRO DE RECLAMA��O");
    cout << "REGISTRANDO A RECLAMA��O NO INDICE: "<< indiceR<<"\n";
    do {
        vezes = 0;
        cout << "DIGITE O PROTOCOLO: ";
        cin >> protocoloReclamacoes;
        for(int i = 0; i<indiceR; i++){
            if (strcmp(CadR[i].protocoloReclamacoes, protocoloReclamacoes) ==0){
                vezes++;
            }
        }
        if(vezes > 0){
            cout << "PROTOCOLO INV�LIDO\n";
        }
    }while(vezes > 0);

    strcpy (CadR[indiceR].protocoloReclamacoes, protocoloReclamacoes);
    cout << "DIGITE A NOTA DE 0 A 10: ";
    cin >> CadR[indiceR].notaAtendimentoReclamacao;
    cout << "DIGITE A SUA RECLAMA��O: ";
    cin >> CadR[indiceR].reclamacoes;


}


void cadastrarElogios(){
     if(indiceE >= totalCadE){
        cout << "N�O � POSSIVEL REGISTRAR MAIS ELOGIOS";
        system("pause");
        return;
    }
    char protocoloElogios[14];
    int vezes = 0;
    cabecalho("REGISTRO DE ELOGIO");
    cout << "REGISTRANDO O ELOGIO NO INDICE: "<< indiceE<<"\n";
    do {
        vezes = 0;
        cout << "DIGITE O PROTOCOLO: ";
        cin >> protocoloElogios;
        for(int i = 0; i<indiceE; i++){
            if (strcmp(CadE[i].protocoloElogios, protocoloElogios) ==0){
                vezes++;
            }
        }
        if(vezes > 0){
            cout << "PROTOCOLO INV�LIDO\n";
        }
    }while(vezes > 0);

    strcpy (CadE[indiceE].protocoloElogios, protocoloElogios);
    cout << "DIGITE A NOTA DE 0 A 10: ";
    cin >> CadE[indiceE].notaAtendimentoElogio;
    cout << "DIGITE O SEU ELOGIO: ";
    cin >> CadE[indiceE].elogios;
}


void imprimirReclamacoeseElogios(){
    cabecalho("RECLAMA��ES E ELOGIOS");

    cout<<"LISTA DE RECLAMA��ES\n\n";
    for(int i = 0; i < indiceR; i++){
        cout<<"PROTOCOLO DE ATENDIMENTO: "<<CadR[i].protocoloReclamacoes<<"\nNOTA DADA AO ATENDIMENTO: "<<CadR[i].notaAtendimentoReclamacao<<"\n"<<"RECLAMA��O DO PACIENTE: "<<CadR[i].reclamacoes<<"\n\n";

    }
    if(indiceR < 1){
        cout << "N�O EXISTEM RECLAMA��ES REGISTRADAS""\n";
    }

    cout<<"\nLISTA DE ELOGIOS\n\n";
    for(int i = 0; i < indiceE; i++){
        cout<<"PROTOCOLO DE ATENDIMENTO: "<<CadE[i].protocoloElogios<<"\nNOTA DADA AO ATENDIMENTO: "<<CadE[i].notaAtendimentoElogio<<"\n"<<"ELOGIO DO PACIENTE: "<<CadE[i].elogios<<"\n\n";

    }
    if(indiceE < 1){
        cout << "N�O EXISTEM ELOGIOS REGISTRADOS""\n";
    }

    system("pause");

}


void imprimirAgendamentos(){
    cabecalho("LISTA DE CONSULTAS AGENDADAS");
    for(int i = 0; i < indiceA; i++){
        cout<<"\nAGENDAMENTO NUMERO: "<<i+1<<"\n"<<"DATA: "<<CadA[i].dataAgendamento<<"      -      "<<"HORARIO: "<<CadA[i].horarioAgendamento<<"\nC�DIGO DA UNIDADE: "<<CadA[i].codigoUnidadeAgendamento<<"      -      "<<"NOME DA CLINICA: "<<CadA[i].nomeUnidadeAgendamento<<"\n"<<"CPF DO PACIENTE: "<<CadA[i].codigoPacienteAgendamento<<"      -      "<<"NOME DO PACIENTE: "<<CadA[i].nomePacienteAgendamento<<"\n"<<"CPF DO M�DICO: "<<CadA[i].codigoMedicoAgendamento<<"      -      "<<"NOME DO M�DICO: "<<CadA[i].nomeMedicoAgendamento<<"\nCPF DO FUNCION�RIO: "<<CadA[i].codigoFuncionarioAgendamento<<"      -      "<<"NOME DO FUNCION�RIO: "<<CadA[i].nomeFuncionarioAgendamento<<"\n"<<"VALOR COBRADO: "<<CadA[i].precoAgendamento<<"\n\n";;

    }
    if(indiceA < 1){
        cout << "N�O EXISTEM CONSULTAS AGENDADAS""\n";
    }

    system("pause");

}


void imprimirUnidades(){
    cabecalho("LISTA DE UNIDADES DA REDE");
    for(int i = 0; i < indiceU; i++){
        cout <<"NOME DA UNIDADE: "<<CadU[i].nomeUnidade<<"\n"<<"NUMERO DO C�DIGO: "<< CadU[i].codigoUnidade<<"\n"<<"TELEFONE DA UNIDADE: "<<CadU[i].telefoneUnidade<<"\n"<<"ENDERECO DA UNIDADE: "<<CadU[i].enderecoUnidade<<"\n"<<"CEP DA UNIDADE: "<<CadU[i].cepUnidade<<"\n"<<"DIRETOR DA UNIDADE: "<<CadU[i].nomeDiretor<<"\n\n\n";

    }
    if(indiceU < 1){
        cout << "N�O EXISTEM UNIDADES CADASTRADAS""\n";
    }

    system("pause");

}


void imprimirPacientes(){
    cabecalho("LISTA DE PACIENTES");
    for(int i = 0; i < indiceP; i++){
        cout <<"UNIDADE CADASTRADA: "<<CadP[i].codigoUnidadePaciente<<"\nNOME DO PACIENTE: "<<CadP[i].nomePaciente<<"\n"<<"NUMERO DO CPF: "<< CadP[i].cpfPaciente<<"\n"<<"TELEFONE DO PACIENTE: "<<CadP[i].telefonePaciente<<"\n"<<"ENDERECO DO PACIENTE: "<<CadP[i].enderecoPaciente<<"\n";cout <<"CONTATO PARA URGENCIA: "<<CadP[i].contatoUrgencia<<"\n"<<"TELEFONE PARA URGENCIA: "<<CadP[i].telefoneUrgencia<<"\n\n\n";

    }
    if(indiceP < 1){
        cout << "N�O EXISTEM PACIENTES CADASTRADOS""\n";
    }

    system("pause");

}


void imprimirMedicos(){
    cabecalho("LISTA DE M�DICOS");
    for(int i = 0; i < indiceM; i++){
        cout <<"UNIDADE CADASTRADA: "<<CadM[i].codigoUnidadeMedico<<"\nNOME DO M�DICO: "<<CadM[i].nomeMedico<<"\n"<<"NUMERO DO CPF: "<< CadM[i].cpfMedico<<"\n"<<"NUMERO DO CRM: "<< CadM[i].crmMedico<<"\n"<<"ESPECIALIDADE DO M�DICO: "<<CadM[i].especialidadeMedico<<"\n"<<"TELEFONE DO M�DICO: "<<CadM[i].telefoneMedico<<"\n"<<"ENDERE�O DO M�DICO: "<<CadM[i].enderecoMedico<<"\n\n\n";

    }
    if(indiceM < 1){
        cout << "N�O EXISTEM M�DICOS CADASTRADOS""\n";
    }

    system("pause");

}


void imprimirFuncionarios(){
    cabecalho("LISTA DE FUNCION�RIOS");
    for(int i = 0; i < indiceF; i++){
        cout <<"UNIDADE CADASTRADA: "<<CadF[i].codigoUnidadeFuncionario<<"\n"<<"NOME DO FUNCION�RIO: "<<CadF[i].nomeFuncionario<<"\n"<<"NUMERO DO CPF: "<< CadF[i].cpfFuncionario<<"\n"<<"TELEFONE DO FUNCION�RIO: "<<CadF[i].telefoneFuncionario<<"\n"<<"ENDERECO DO FUNCION�RIO: "<<CadF[i].enderecoFuncionario<<"\n";cout <<"CONTATO PARA URGENCIA: "<<CadF[i].contatoUrgenciaFuncionario<<"\n"<<"TELEFONE PARA URGENCIA: "<<CadF[i].telefoneUrgenciaFuncionario<<"\n\n\n";

    }
    if(indiceF < 1){
        cout << "N�O EXISTEM FUNCION�RIOS CADASTRADOS""\n";
    }

    system("pause");

}

void exibeEnderecoUnidade(){
    char codi[14];
    bool achou = false;
    cabecalho("ENDERE�O DE UNIDADE POR C�DIGO");
    cout << "DIGITE O C�DIGO: ";
    cin >> codi;
    for(int i = 0; i < totalCadU; i++){
        if(strcmp (codi, CadU[i].codigoUnidade) == 0){
            cout << "\n\n"<<"NOME DA UNIDADE: "<<CadU[i].nomeUnidade<<"\n";
            cout << "\n""ENDERE�O DA UNIDADE: "<<CadU[i].enderecoUnidade<<" - "<<CadU[i].cidadeUnidade<<"\n";
            cout << "\n""CEP DA UNIDADE: "<<CadU[i].cepUnidade<<"\n";
            achou = true;

        }
    }
    if(!achou){
        cout << "NENHUMA UNIDADE ENCONTRADA COM O C�DIGO: "<< codi<< "\n";

    }

    system("pause");

}


void exibeEnderecoPaciente(){
    char codi[14];
    bool achou = false;
    cabecalho("ENDERE�O DE PACIENTE POR CPF");
    cout << "DIGITE O CPF: ";
    cin >> codi;
    for(int i = 0; i < totalCadP; i++){
        if(strcmp (codi, CadP[i].cpfPaciente) == 0){
            cout << "\n\n"<<"NOME DO PACIENTE: "<<CadP[i].nomePaciente<<"\n";
            cout << "\n""ENDERE�O DO PACIENTE = "<<CadP[i].enderecoPaciente<<"\n";
            achou = true;

        }
    }
    if(!achou){
        cout << "NENHUM PACIENTE ENCONTRADO COM O CPF: "<< codi<< "\n";

    }

    system("pause");

}


void exibeEnderecoMedico(){
    char codi[14];
    bool achou = false;
    cabecalho("ENDERE�O DE M�DICO POR CPF");
    cout << "DIGITE O CPF: ";
    cin >> codi;
    for(int i = 0; i < totalCadM; i++){
        if(strcmp(codi, CadM[i].cpfMedico) ==0){
            cout << "\n\n"<<"NOME DO M�DICO: "<<CadM[i].nomeMedico<<"\n";
            cout << "\n""ENDERE�O DO M�DICO = "<<CadM[i].enderecoMedico<<"\n";
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM M�DICO ENCONTRADO COM O CPF: "<< codi<< "\n";
    }
    system("pause");
}


void exibeEnderecoFuncionario(){
    char codi[14];
    bool achou = false;
    cabecalho("ENDERE�O DE FUNCION�RIO POR CPF");
    cout << "DIGITE O CPF: ";
    cin >> codi;
    for(int i = 0; i < totalCadF; i++){
        if(strcmp (codi, CadF[i].cpfFuncionario) == 0){
            cout << "\n\n"<<"NOME DO FUNCION�RIO: "<<CadF[i].nomeFuncionario<<"\n";
            cout << "\n""ENDERE�O DO FUNCION�RIO: "<<CadF[i].enderecoFuncionario<<"\n";
            achou = true;

        }
    }
    if(!achou){
        cout << "NENHUM FUNCION�RIO ENCONTRADO COM O CPF: "<< codi<< "\n";

    }

    system("pause");

}

void alterarUnidade(){
    char codi[14];
    bool achou = false;
    cabecalho("ALTERA��O DE NOME - UNIDADE");
    cout << "DIGITE O C�DIGO: ";
    cin >> codi;
    for(int i = 0; i < totalCadU; i++){
        if(strcmp(codi, CadU[i].codigoUnidade) ==0){
            cout << "\n\n"<<"C�DIGO: "<<CadU[i].codigoUnidade<<"\n";
            cout << "NOME: "<<CadU[i].nomeUnidade<<"\n";
            cout << "TELEFONE: "<<CadU[i].telefoneUnidade<<"\n";
            cout << "ENDERE�O: "<<CadU[i].enderecoUnidade<<"\n";
            cout << "DIRETOR DA UNIDADE: "<<CadU[i].nomeDiretor<<"\n";
            cout << "\n""ENDERE�O DA UNIDADE: "<<CadU[i].enderecoUnidade<<" - "<<CadU[i].cidadeUnidade<<"\n";
            cout << "DIGITE ABAIXO O NOVO NOME\n\n";
            cout << "NOME: ";
            cin >> CadU[i].nomeUnidade;
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUMA UNIDADE ENCONTRADA COM O C�DIGO: "<< codi<< "\n";
    }
    system("pause");
}


void alterarDataAgendamento(){
    char codi[14];
    bool achou = false;
    cabecalho("ALTERA��O DE DATA DO AGENDAMENTO");
    cout << "DIGITE O CPF DO PACIENTE: ";
    cin >> codi;
    for(int i = 0; i < totalCadA; i++){
        if(strcmp(codi, CadA[i].codigoPacienteAgendamento) ==0){
            cout<<"\n\nDATA: "<<CadA[i].dataAgendamento<<"      -      "<<"HORARIO: "<<CadA[i].horarioAgendamento;
            cout << "\n\n"<<"CPF DO PACIENTE: "<<CadA[i].codigoPacienteAgendamento<<"\n";
            cout << "UNIDADE DE ATENDIMENTO: "<<CadA[i].codigoUnidadeAgendamento<<"\n";
            cout << "CPF DO M�DICO: "<<CadA[i].codigoMedicoAgendamento<<"\n";
            cout << "DIGITE ABAIXO O NOVO AGENDAMENTO\n\n";
            cout << "DATA: ";
            cin >> CadA[i].dataAgendamento;
            cout << "HOR�RIO: ";
            cin >> CadA[i].horarioAgendamento;
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM AGENDAMENTO ENCONTRADO COM O CPF: "<< codi<< "\n";
    }
    system("pause");
}



void alterarPaciente(){
    char codi[14];
    bool achou = false;
    cabecalho("ALTERA��O DE NOME - PACIENTE");
    cout << "DIGITE O CPF: ";
    cin >> codi;
    for(int i = 0; i < totalCadP; i++){
        if(strcmp(codi, CadP[i].cpfPaciente) ==0){
            cout << "\n\n"<<"CPF: "<<CadP[i].cpfPaciente<<"\n";
            cout << "NOME: "<<CadP[i].nomePaciente<<"\n";
            cout << "TELEFONE: "<<CadP[i].telefonePaciente<<"\n";
            cout << "ENDERE�O: "<<CadP[i].enderecoPaciente<<"\n";
            cout << "CONTATO PARA URGENCIA: "<<CadP[i].contatoUrgencia<<"\n";
            cout << "TELEFONE PARA URGENCIA: "<<CadP[i].telefoneUrgencia<<"\n\n";
            cout << "DIGITE ABAIXO O NOVO NOME\n\n";
            cout << "NOME: ";
            cin >> CadP[i].nomePaciente;
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM PACIENTE ENCONTRADO COM O CPF: "<< codi<< "\n";
    }
    system("pause");
}


void alterarMedico(){
    char codi[14];
    bool achou = false;
    cabecalho("ALTERA��O DE NOME - M�DICO");
    cout << "DIGITE O CPF: ";
    cin >> codi;
    for(int i = 0; i < totalCadM; i++){
        if(strcmp(codi, CadM[i].cpfMedico) ==0){
            cout << "\n\n""NOME: "<<CadM[i].nomeMedico<<"\n";
            cout << "CPF: "<<CadM[i].cpfMedico<<"\n";
            cout << "CRM: "<<CadM[i].crmMedico<<"\n";
            cout << "ESPECIALIDADE: "<<CadM[i].especialidadeMedico<<"\n";
            cout << "TELEFONE: "<<CadM[i].telefoneMedico<<"\n";
            cout << "ENDERE�O: "<<CadM[i].enderecoMedico<<"\n\n";
            cout << "DIGITE ABAIXO O NOVO NOME\n\n";
            cout << "NOME: ";
            cin >> CadM[i].nomeMedico;
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM M�DICO ENCONTRADO COM O CPF: "<< codi<< "\n";
    }
    system("pause");
}


void alterarFuncionario(){
    char codi[14];
    bool achou = false;
    cabecalho("ALTERA��O DE NOME - FUNCION�RIO");
    cout << "DIGITE O CPF: ";
    cin >> codi;
    for(int i = 0; i < totalCadF; i++){
        if(strcmp(codi, CadF[i].cpfFuncionario) ==0){
            cout << "\n\n"<<"CPF: "<<CadF[i].cpfFuncionario<<"\n";
            cout << "NOME: "<<CadF[i].nomeFuncionario<<"\n";
            cout << "TELEFONE: "<<CadF[i].telefoneFuncionario<<"\n";
            cout << "ENDERE�O: "<<CadF[i].enderecoFuncionario<<"\n";
            cout << "CONTATO PARA URGENCIA: "<<CadF[i].contatoUrgenciaFuncionario<<"\n";
            cout << "TELEFONE PARA URGENCIA: "<<CadF[i].telefoneUrgenciaFuncionario<<"\n\n";
            cout << "DIGITE ABAIXO O NOVO NOME\n\n";
            cout << "NOME: ";
            cin >> CadF[i].nomeFuncionario;
            achou = true;
        }
    }
    if(!achou){
        cout << "NENHUM FUNCION�RIO ENCONTRADO COM O CPF: "<< codi<< "\n";
    }
    system("pause");
}

void excluirUnidade(){
    char codi[14];
    bool achou = false;
    char confirma;
    cabecalho("EXCLUS�O DE UNIDADE");
    cout << "DIGITE O C�DIGO: ";
    cin >> codi;
    for(int i = 0; i < totalCadU; i++){
        if(strcmp(codi, CadU[i].codigoUnidade) ==0){
            cout << "\n\n"<<"C�DIGO: "<<CadU[i].codigoUnidade<<"\n";
            cout << "NOME: "<<CadU[i].nomeUnidade<<"\n";
            cout << "TELEFONE: "<<CadU[i].telefoneUnidade<<"\n";
            cout << "ENDERE�O: "<<CadU[i].enderecoUnidade<<"\n";
            cout << "DIRETOR DA UNIDADE: "<<CadU[i].nomeDiretor<<"\n";
            cout << "\n""ENDERE�O DA UNIDADE: "<<CadU[i].enderecoUnidade<<" - "<<CadU[i].cidadeUnidade<<"\n";
            cout << "DESEJA REALMENTE EXCLUIR? (s/n)\n";
            cin >> confirma;
            switch(confirma){
                case 's':
                    for(int j = i; j < indiceU-1; j++){
                        CadU[j] = CadU[j+1];
                    }
                    indiceU--;
                    break;
            }
            achou = true;
        }
    }
    if(!achou){
        cout << "\n""NENHUMA UNIDADE ENCONTRADA COM O C�DIGO: "<< codi<< "\n";
    }
    system("pause");
}


void excluirAgendamento(){
    char codi[14];
    bool achou = false;
    char confirma;
    cabecalho("EXCLUS�O DE AGENDAMENTO");
    cout << "DIGITE O CPF DO PACIENTE: ";
    cin >> codi;
    for(int i = 0; i < totalCadA; i++){
        if(strcmp(codi, CadA[i].codigoPacienteAgendamento) ==0){
            cout<<"\n\nDATA: "<<CadA[i].dataAgendamento<<"      -      "<<"HORARIO: "<<CadA[i].horarioAgendamento;
            cout << "\n\n"<<"CPF DO PACIENTE: "<<CadA[i].codigoPacienteAgendamento<<"\n";
            cout << "UNIDADE DE ATENDIMENTO: "<<CadA[i].codigoUnidadeAgendamento<<"\n";
            cout << "CPF DO M�DICO: "<<CadA[i].codigoMedicoAgendamento<<"\n";
            cout << "DESEJA REALMENTE EXCLUIR? (s/n)\n";
            cin >> confirma;
            switch(confirma){
                case 's':
                    for(int j = i; j < indiceA-1; j++){
                        CadA[j] = CadA[j+1];
                    }
                    indiceA--;
                    break;
            }
            achou = true;
        }
    }
    if(!achou){
        cout << "\n""NENHUM AGENDAMENTO ENCONTRADO COM O CPF: "<< codi<< "\n";
    }
    system("pause");
}



void excluirPaciente(){
    char codi[14];
    bool achou = false;
    char confirma;
    cabecalho("EXCLUS�O DE PACIENTE");
    cout << "DIGITE O CPF: ";
    cin >> codi;
    for(int i = 0; i < totalCadP; i++){
        if(strcmp(codi, CadP[i].cpfPaciente) ==0){
            cout << "\n\n"<<"CPF: "<<CadP[i].cpfPaciente<<"\n";
            cout << "NOME: "<<CadP[i].nomePaciente<<"\n";
            cout << "TELEFONE: "<<CadP[i].telefonePaciente<<"\n";
            cout << "ENDERE�O DO PACIENTE: "<<CadP[i].enderecoPaciente<<"\n";
            cout << "CONTATO PARA URGENCIA: "<<CadP[i].contatoUrgencia<<"\n";
            cout << "TELEFONE PARA URGENCIA: "<<CadP[i].telefoneUrgencia<<"\n\n";
            cout << "DESEJA REALMENTE EXCLUIR? (s/n)\n";
            cin >> confirma;
            switch(confirma){
                case 's':
                    for(int j = i; j < indiceP-1; j++){
                        CadP[j] = CadP[j+1];
                    }
                    indiceP--;
                    break;
            }
            achou = true;
        }
    }
    if(!achou){
        cout << "\n""NENHUM PACIENTE ENCONTRADO COM O CPF: "<< codi<< "\n";
    }
    system("pause");
}


void excluirMedico(){
    char codi[14];
    bool achou = false;
    char confirma;
    cabecalho("EXCLUS�O DE M�DICO");
    cout << "DIGITE O CPF: ";
    cin >> codi;
    for(int i = 0; i < totalCadM; i++){
        if(strcmp(codi, CadM[i].cpfMedico)==0){
            cout << "\n\n" << "NOME: "<<CadM[i].nomeMedico<<"\n";
            cout <<"CPF: "<<CadM[i].cpfMedico<<"\n";
            cout <<"CRM: "<<CadM[i].crmMedico<<"\n";
            cout << "ESPECIALIDADE: "<<CadM[i].especialidadeMedico<<"\n";
            cout << "TELEFONE: "<<CadM[i].telefoneMedico<<"\n";
            cout << "ENDERE�O DO M�DICO: "<<CadM[i].enderecoMedico<<"\n";
            cout << "DESEJA REALMENTE EXCLUIR? (s/n)\n";
            cin >> confirma;
            switch(confirma){
                case 's':
                    for(int j = i; j < indiceM-1; j++){
                        CadM[j] = CadM[j+1];
                    }
                    indiceM--;
                    break;
            }
            achou = true;
        }
    }
    if(!achou){
        cout << "\n""NENHUM M�DICO ENCONTRADO COM O CPF: "<< codi<< "\n";
    }
    system("pause");
}


void excluirFuncionario(){
    char codi[14];
    bool achou = false;
    char confirma;
    cabecalho("EXCLUS�O DE FUNCION�RIO");
    cout << "DIGITE O CPF: ";
    cin >> codi;
    for(int i = 0; i < totalCadF; i++){
        if(strcmp(codi, CadF[i].cpfFuncionario) ==0){
            cout << "\n\n"<<"CPF: "<<CadF[i].cpfFuncionario<<"\n";
            cout << "NOME: "<<CadF[i].nomeFuncionario<<"\n";
            cout << "TELEFONE: "<<CadF[i].telefoneFuncionario<<"\n";
            cout << "ENDERE�O DO FUNCION�RIO: "<<CadF[i].enderecoFuncionario<<"\n";
            cout << "CONTATO PARA URGENCIA: "<<CadF[i].contatoUrgenciaFuncionario<<"\n";
            cout << "TELEFONE PARA URGENCIA: "<<CadF[i].telefoneUrgenciaFuncionario<<"\n\n";
            cout << "DESEJA REALMENTE EXCLUIR? (s/n)\n";
            cin >> confirma;
            switch(confirma){
                case 's':
                    for(int j = i; j < indiceF-1; j++){
                        CadF[j] = CadF[j+1];
                    }
                    indiceF--;
                    break;
            }
            achou = true;
        }
    }
    if(!achou){
        cout << "\n""NENHUM FUNCION�RIO ENCONTRADO COM O CPF: "<< codi<< "\n";
    }
    system("pause");
}

void abrirArquivoReclamacoes(char numeroProtocolo[], char tipo[]){
    pont_arqR = fopen(numeroProtocolo, tipo);
    if(pont_arqR == NULL){
        cout << "ERRO AO ABRIR O ARQUIVO DE RECLAMA��ES\n";
    }
}

void abrirArquivoAgendamentos(char numeroProtocolo[], char tipo[]){
    pont_arqA = fopen(numeroProtocolo, tipo);
    if(pont_arqA == NULL){
        cout << "ERRO AO ABRIR O ARQUIVO DE AGENDAMENTOS\n";
    }
}

void abrirArquivoElogios(char numeroProtocolo[], char tipo[]){
    pont_arqE = fopen(numeroProtocolo, tipo);
    if(pont_arqE == NULL){
        cout << "ERRO AO ABRIR O ARQUIVO DE ELOGIOS\n";
    }
}


void abrirArquivoUnidade(char nomeUnidade[], char tipo[]){
    pont_arqU = fopen(nomeUnidade, tipo);
    if(pont_arqU == NULL){
        cout << "ERRO AO ABRIR O ARQUIVO DAS UNIDADES\n";
    }
}


void abrirArquivoPaciente(char nomePaciente[], char tipo[]){
    pont_arqP = fopen(nomePaciente, tipo);
    if(pont_arqP == NULL){
        cout << "ERRO AO ABRIR O ARQUIVO DOS PACIENTES\n";
    }
}


void abrirArquivoMedico(char nomeMedico[], char tipo[]){
    pont_arqM = fopen(nomeMedico, tipo);
    if(pont_arqM == NULL){
        cout << "ERRO AO ABRIR O ARQUIVO DOS M�DICOS\n";
    }
}

void abrirArquivoFuncionario(char nomeFuncionario[], char tipo[]){
    pont_arqF = fopen(nomeFuncionario, tipo);
    if(pont_arqF == NULL){
        cout << "ERRO AO ABRIR O ARQUIVO DOS FUNCION�RIOS\n";
    }
}

void gravarReclamacoes(){
    abrirArquivoReclamacoes("RECLAMACOES.txt", "w");
    for(int i = 0; i < indiceR; i++){
       fwrite(&CadR[i], sizeof(struct cadReclamacoes), 1, pont_arqR);
    }
    fclose(pont_arqR);
    cout << "REGISTRO DE RECLAMA��ES GRAVADO COM SUCESSO\n";

}

void gravarElogios(){
    abrirArquivoElogios("ELOGIOS.txt", "w");
    for(int i = 0; i < indiceE; i++){
       fwrite(&CadE[i], sizeof(struct cadElogios), 1, pont_arqE);
    }
    fclose(pont_arqE);
    cout << "REGISTRO DE ELOGIOS GRAVADO COM SUCESSO\n\n";
    system("pause");
}


void gravarCadastroAgendamentos(){
    abrirArquivoAgendamentos("AGENDAMENTOS.txt", "w");
    for(int i = 0; i < indiceA; i++){
       fwrite(&CadA[i], sizeof(struct cadAgendamentos), 1, pont_arqA);
    }
    fclose(pont_arqA);
    cout << "REGISTRO DE AGENDAMENTOS GRAVADO COM SUCESSO\n\n";
    system("pause");
}


void gravarCadastroUnidade(){
    abrirArquivoUnidade("UNIDADES.txt", "w");
    for(int i = 0; i < indiceU; i++){
       fwrite(&CadU[i], sizeof(struct cadUnidades), 1, pont_arqU);
    }
    fclose(pont_arqU);
    cout << "CADASTRO DE UNIDADES GRAVADO COM SUCESSO\n";

}


void gravarCadastroPaciente(){
    abrirArquivoPaciente("PACIENTES.txt", "w");
    for(int i = 0; i < indiceP; i++){
       fwrite(&CadP[i], sizeof(struct cadPacientes), 1, pont_arqP);
    }
    fclose(pont_arqP);
    cout << "CADASTRO DE PACIENTES GRAVADO COM SUCESSO\n";

}


void gravarCadastroMedico(){
    abrirArquivoMedico("MEDICOS.txt", "w");
    for(int i = 0; i < indiceM; i++){
        fwrite(&CadM[i], sizeof(struct cadMedicos), 1, pont_arqM);
    }
    fclose(pont_arqM);
    cout << "CADASTRO DE M�DICOS GRAVADO COM SUCESSO\n";

}


void gravarCadastroFuncionario(){
    abrirArquivoFuncionario("FUNCION�RIOS.txt", "w");
    for(int i = 0; i < indiceF; i++){
       fwrite(&CadF[i], sizeof(struct cadFuncionarios), 1, pont_arqF);
    }
    fclose(pont_arqF);
    cout << "CADASTRO DE FUNCION�RIOS GRAVADO COM SUCESSO\n";

}

void lerCadastroReclamacoes(){
    abrirArquivoReclamacoes("RECLAMACOES.txt", "r");
    int contador = 0;
    do{
        cadReclamacoes cadastro;
        size_t r = fread(&cadastro, sizeof(struct cadReclamacoes), 1, pont_arqR);
        if(r < 1){
            break;
        }else{
            CadR[contador++] = cadastro;
        }

    }while(!feof(pont_arqR));
    fclose(pont_arqR);
    indiceR = contador;
    cout << "REGISTRO DE RECLAMA��ES RECUPERADO COM SUCESSO\n";

}


void lerCadastroAgendamentos(){
    abrirArquivoAgendamentos("AGENDAMENTOS.txt", "r");
    int contador = 0;
    do{
        cadAgendamentos cadastro;
        size_t r = fread(&cadastro, sizeof(struct cadAgendamentos), 1, pont_arqA);
        if(r < 1){
            break;
        }else{
            CadA[contador++] = cadastro;
        }

    }while(!feof(pont_arqA));
    fclose(pont_arqA);
    indiceA = contador;
    cout << "REGISTRO DE AGENDAMENTOS RECUPERADO COM SUCESSO\n";

}


void lerCadastroElogios(){
    abrirArquivoElogios("ELOGIOS.txt", "r");
    int contador = 0;
    do{
        cadElogios cadastro;
        size_t r = fread(&cadastro, sizeof(struct cadElogios), 1, pont_arqE);
        if(r < 1){
            break;
        }else{
            CadE[contador++] = cadastro;
        }

    }while(!feof(pont_arqE));
    fclose(pont_arqE);
    indiceE = contador;
    cout << "REGISTRO DE ELOGIOS RECUPERADO COM SUCESSO\n\n";
    system("pause");
}



void lerCadastroUnidade(){
    abrirArquivoUnidade("UNIDADES.txt", "r");
    int contador = 0;
    do{
        cadUnidades cadastro;
        size_t r = fread(&cadastro, sizeof(struct cadUnidades), 1, pont_arqU);
        if(r < 1){
            break;
        }else{
            CadU[contador++] = cadastro;
        }

    }while(!feof(pont_arqU));
    fclose(pont_arqU);
    indiceU = contador;
    cout << "CADASTRO DE UNIDADES RECUPERADO COM SUCESSO\n";

}


void lerCadastroPaciente(){
    abrirArquivoPaciente("PACIENTES.txt", "r");
    int contador = 0;
    do{
        cadPacientes cadastro;
        size_t r = fread(&cadastro, sizeof(struct cadPacientes), 1, pont_arqP);
        if(r < 1){
            break;
        }else{
            CadP[contador++] = cadastro;
        }

    }while(!feof(pont_arqP));
    fclose(pont_arqP);
    indiceP = contador;
    cout << "CADASTRO DE PACIENTES RECUPERADO COM SUCESSO\n";

}


void lerCadastroMedico(){
    abrirArquivoMedico("MEDICOS.txt", "r");
    int contador = 0;
    do{
        cadMedicos cadastro;
        size_t r = fread(&cadastro, sizeof(struct cadMedicos), 1, pont_arqM);
        if(r < 1){
            break;
        }else{
            CadM[contador++] = cadastro;
        }

    }while(!feof(pont_arqM));
    fclose(pont_arqM);
    indiceM = contador;
    cout << "CADASTRO DE M�DICOS RECUPERADO COM SUCESSO\n";

}

void lerCadastroFuncionario(){
    abrirArquivoFuncionario("FUNCION�RIOS.txt", "r");
    int contador = 0;
    do{
        cadFuncionarios cadastro;
        size_t r = fread(&cadastro, sizeof(struct cadFuncionarios), 1, pont_arqF);
        if(r < 1){
            break;
        }else{
            CadF[contador++] = cadastro;
        }

    }while(!feof(pont_arqF));
    fclose(pont_arqF);
    indiceF = contador;
    cout << "CADASTRO DE FUNCION�RIOS RECUPERADO COM SUCESSO\n";

}


void gravarTodosArquivos(){
    gravarCadastroPaciente();
    gravarCadastroMedico();
    gravarCadastroFuncionario();
    gravarCadastroUnidade();
    gravarReclamacoes();
    gravarCadastroAgendamentos();
    gravarElogios();


}
void recuperarTodosArquivos(){
    lerCadastroPaciente();
    lerCadastroMedico();
    lerCadastroFuncionario();
    lerCadastroUnidade();
    lerCadastroReclamacoes();
    lerCadastroAgendamentos();
    lerCadastroElogios();


}

bool login(){
    char usuario[25];
    char senha[25];
    bool deuCerto = false;
    while(!deuCerto){
        system("cls");
        cabecalho("POR FAVOR INSIRA O LOGIN ENVIADO POR E-MAIL");
        cout << "DIGITE O URSU�RIO: ";
        cin >> usuario;
               if(strcmp(usuario, "sair") == 0){
            return false;
        }
        cout << "DIGITE SUA SENHA: ";
        cin >> senha;
        if(strcmp(usuario, "1") == 0){
            if(strcmp(senha, "1") == 0){
                               deuCerto = true;
                cout << "\n\nLOGIN EFETUDADO COM SUCESSO\n\n";
            }else{
                cout << "\n\nSENHA INV�LIDA\n\n";
            }
        }else{
            cout << "\n\nUSU�RIO INV�LIDO\n\n";
        }
        system("pause");
    }
    return deuCerto;
}


void sobre(){

    cout << "PROGRAMA DESENVOLVIDO POR: \n\n"<<"RICARDO AMARO DE OLIVEIRA - RA: G179420""\n\n";
    system("pause");
}


int main (){
    setlocale(LC_ALL, "");
    bool log = login();

    if(log){
        system("cls");

    }

int opcao;
    setlocale(LC_ALL, "");
    do {
        menuPrincipal();
        cin >> opcao;
        switch(opcao){
        case 1:
             int opcaoCadastros;
             system("cls");
             do {
             menuCadastros();
             cin >> opcaoCadastros;
             switch(opcaoCadastros){
                      case 1:
                           int opcaoUnidades;
                           system("cls");
                           do {
                           menuUnidades();
                           cin >> opcaoUnidades;
                           switch(opcaoUnidades){
                                              case 1:
                                                   system("cls");
                                                   cadastrarUnidades();
                                                   if(indiceU < totalCadU){
                                                   indiceU++;
                                                   }
                                                   system("cls");
                                                   break;
                                              case 2:
                                                   system("cls");
                                                   imprimirUnidades();
                                                   system("cls");
                                                   break;
                                              case 3:
                                                   system("cls");
                                                   exibeEnderecoUnidade();
                                                   system("cls");
                                                   break;
                                              case 4:
                                                   system("cls");
                                                   alterarUnidade();
                                                   system("cls");
                                                   break;
                                              case 5:
                                                   system("cls");
                                                   excluirUnidade();
                                                   system("cls");
                                                   break;
                                              case 6:
                                                   system("cls");
                                                   break;
                                              case 0:
                                                   cout<<"\n\n""AGRADECEMOS A PREFERENCIA\n";
                                                   return 0;
                                                   break;
                                              default:
                                                   cout << "\n\nOP��O INV�LIDA\n";
                                                   system("pause");
                                                   system("cls");
                                                   break;
                                                   }
                                                   }while (opcaoUnidades != 6);
                                                   break;
                      case 2:
                           int opcaoPacientes;
                           system("cls");
                           do {
                           menuPacientes();
                           cin >> opcaoPacientes;
                           switch(opcaoPacientes){
                                                 case 1:
                                                      system("cls");
                                                      cadastrarPacientes();
                                                      if(indiceP < totalCadP){
                                                      indiceP++;
                                                      }
                                                      system("cls");
                                                      break;
                                                 case 2:
                                                      system("cls");
                                                      imprimirPacientes();
                                                      system("cls");
                                                      break;
                                                 case 3:
                                                      system("cls");
                                                      exibeEnderecoPaciente();
                                                      system("cls");
                                                      break;
                                                 case 4:
                                                      system("cls");
                                                      alterarPaciente();
                                                      system("cls");
                                                      break;
                                                 case 5:
                                                      system("cls");
                                                      excluirPaciente();
                                                      system("cls");
                                                      break;
                                                 case 6:
                                                      system("cls");
                                                      break;
                                                 case 0:
                                                      cout<<"\n\n""AGRADECEMOS A PREFERENCIA\n";
                                                      return 0;
                                                      break;
                                                 default:
                                                       cout << "\n\nOP��O INV�LIDA\n";
                                                       system("pause");
                                                       system("cls");
                                                       break;
                                                       }
                                                       }while(opcaoPacientes != 6);
                                                       system("cls");
                                                       break;
                      case 3:
                           int opcaoMedicos;
                           system("cls");
                           do {
                           menuMedicos();
                           cin >> opcaoMedicos;
                           switch(opcaoMedicos){
                                               case 1:
                                                    system("cls");
                                                    cadastrarMedicos();
                                                    if(indiceM < totalCadM){
                                                    indiceM++;
                                                    }
                                                    system("cls");
                                                    break;
                                               case 2:
                                                    system("cls");
                                                    imprimirMedicos();
                                                    system("cls");
                                                    break;
                                               case 3:
                                                    system("cls");
                                                    exibeEnderecoMedico();
                                                    system("cls");
                                                    break;
                                               case 4:
                                                    system("cls");
                                                    alterarMedico();
                                                    system("cls");
                                                    break;
                                               case 5:
                                                    system("cls");
                                                    excluirMedico();
                                                    system("cls");
                                                    break;
                                               case 6:
                                                    system("cls");
                                                    break;
                                               case 0:
                                                    cout<<"\n\n""AGRADECEMOS A PREFERENCIA\n";
                                                    return 0;
                                                    break;
                                               default:
                                                     cout << "\n\nOP��O INV�LIDA\n";
                                                     system("pause");
                                                     system("cls");
                                                     break;
                                                     }
                                                     }while(opcaoMedicos != 6);
                                                     break;
                     case 4:
                          int opcaoFuncionarios;
                          system("cls");
                          do {
                          menuFuncionarios();
                          cin >> opcaoFuncionarios;
                          switch(opcaoFuncionarios){
                                                   case 1:
                                                        system("cls");
                                                        cadastrarFuncionarios();
                                                        if(indiceF < totalCadF){
                                                        indiceF++;
                                                        }
                                                        system("cls");
                                                        break;
                                                   case 2:
                                                        system("cls");
                                                        imprimirFuncionarios();
                                                        system("cls");
                                                        break;
                                                   case 3:
                                                        system("cls");
                                                        exibeEnderecoFuncionario();
                                                        system("cls");
                                                        break;
                                                   case 4:
                                                        system("cls");
                                                        alterarFuncionario();
                                                        system("cls");
                                                        break;
                                                   case 5:
                                                        system("cls");
                                                        excluirFuncionario();
                                                        system("cls");
                                                        break;
                                                   case 6:
                                                        system("cls");
                                                        break;
                                                   case 0:
                                                        cout<<"\n\n""AGRADECEMOS A PREFERENCIA\n";
                                                        return 0;
                                                        break;
                                                   default:
                                                        cout << "\n\nOP��O INV�LIDA\n";
                                                        system("pause");
                                                        system("cls");
                                                        break;
                                                        }
                                                        }while(opcaoFuncionarios != 6);
                                                        break;
                     case 5:
                          int opcaoReclamacoeseelogios;
                          system("cls");
                          do {
                          menuReclamacoeseelogios();
                          cin >> opcaoReclamacoeseelogios;
                          switch(opcaoReclamacoeseelogios){
                                                          case 1:
                                                               system("cls");
                                                               cadastrarReclamacoes();
                                                               if(indiceR < totalCadR){
                                                               indiceR++;
                                                               }
                                                               system("cls");
                                                               break;
                                                          case 2:
                                                               system("cls");
                                                               cadastrarElogios();
                                                               if(indiceE < totalCadE){
                                                               indiceE++;
                                                               }
                                                               system("cls");
                                                               break;
                                                          case 3:
                                                               system("cls");
                                                               imprimirReclamacoeseElogios();
                                                               system("cls");
                                                               break;
                                                          case 6:
                                                               system("cls");
                                                               break;
                                                          case 0:
                                                               cout<<"\n\n""AGRADECEMOS A PREFERENCIA\n";
                                                               return 0;
                                                               break;
                                                               default:
                                                               cout << "\n\nOP��O INV�LIDA\n";
                                                               system("pause");
                                                               system("cls");
                                                               break;
                                                               }
                                                               }while(opcaoReclamacoeseelogios != 6);
                                                               break;
                                                               }
             }while(opcaoCadastros != 6);
             system("cls");
             break;
        case 2:
             int opcaoRelatorios;
             system("cls");
             do{
             menuRelatorios();
             cin >> opcaoRelatorios;
             switch(opcaoRelatorios){
                                    case 1:
                                         system("cls");
                                         relatorioFaturamento();
                                         system("pause");
                                         system("cls");
                                         break;
                                    case 2:
                                         system("cls");
                                         relatoriosPacientes();
                                         system("pause");
                                         system("cls");
                                         break;
                                    case 3:
                                         system("cls");
                                         mediaNotaReclamacao();
                                         system("pause");
                                         system("cls");
                                         break;
                                    case 4:
                                         system("cls");
                                         mediaNotaElogio();
                                         system("pause");
                                         system("cls");
                                    case 6:
                                         system("cls");
                                         break;
                                    case 0:
                                         cout<<"\n\n""AGRADECEMOS A PREFERENCIA\n";
                                         return 0;
                                         break;
                                    default:
                                         cout << "\n\nOP��O INV�LIDA\n";
                                         system("pause");
                                         system("cls");
                                         break;
             }
             }while(opcaoRelatorios != 6);
             system("cls");
             break;
        case 3:
             int opcaoAgendamentos;
             system("cls");
             do {
             menuAgendamentos();
             cin >> opcaoAgendamentos;
             switch(opcaoAgendamentos){
                                      case 1:
                                           system("cls");
                                           cadastrarAgendamentos();
                                           if(indiceA < totalCadA){
                                           indiceA++;
                                           }
                                           system("cls");
                                           break;
                                      case 2:
                                           system("cls");
                                           imprimirAgendamentos();
                                           system("cls");
                                           break;
                                      case 3:
                                           system("cls");
                                           alterarDataAgendamento();
                                           system("cls");
                                           break;
                                      case 4:
                                           system("cls");
                                           excluirAgendamento();
                                           system("cls");
                                           break;
                                      case 5:
                                           system("cls");
                                           break;
                                      case 0:
                                           cout<<"\n\n""AGRADECEMOS A PREFERENCIA\n";
                                           return 0;
                                           break;
                                      default:
                                           cout << "\n\nOP��O INV�LIDA\n";
                                           system("pause");
                                           system("cls");
                                           break;
             }
             }while(opcaoAgendamentos != 5);
             system("cls");
             break;
        case 4:
             system("cls");
             recuperarTodosArquivos();
             system("cls");
             break;
        case 5:
             system("cls");
             gravarTodosArquivos();
             system("cls");
             break;
        case 6:
             system("cls");
             sobre();
             system("cls");
             break;
        case 0:
             cout << "OBRIGADO PELA PREFERENCIA\n";
             break;
        default:
             cout << "OP��O INV�LIDA";
             system("pause");
             system("cls");
             break;
             }
             }
             while(opcao != 0);

    return 0;
}

