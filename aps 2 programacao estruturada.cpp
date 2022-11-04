#incluir<stdio.h>
#incluir<stdio.h>
#incluir<string.h>
Struct Pessoa {
  char nome[50]; 
  char endereco [50];
  char email[40];
  int CPF; 
  int data de nascimento;
  int rg;
  int telefone;
  
  }

Struct Preencher_dados Pessoa();
vazioimprimir_dados(structPessoa p);
intprincipal() {
 Struct Pessoa p;
 p=preencher_dados();
 imprimir_dados(p);
 retorno 0;
}
Struct Preencher_dados Pessoa(){
  Struct Pessoa p;
  strcpy (p.nome,"Nome Sobrenome");
  strcpy (p.endereco,"Endereco");
  strcpy (p.email,"Email");
p.cpf=52458712458;
p.data de nascimento=02102001;
p.rg=4587125689;
p.telefone=35687420;

  retornop;
}
vazioimprimir_dados(structPessoa p){
  printf ("Nome:%s\n", p.nome);
  printf ("Endereco:%s\n",p.endereco);
  printf ("Email:%s\n",p.email);
  printf ("CPF:%d\n", p.cpf);
  printf ("data de nascimento\n",p.data de nascimento);
  printf ("rg\n", p.rg);
  printf ("telefone\n", p.telefone);
  
}


struct lista {
 intinformacoes;
 struct lista *dados;
};

typedefstructlista lista;

struct pilha {
lista* prim; 
}
typedefstructpilha;

Pilha*pilha_cria (vazio)
{
Pilha* p = Pilha (*)malloc(sizeof(Pilha));
 se (p==NULL)sair(1);
 p->prim = NULL;
 retornop;
}

vaziopilha_push (Pilha* p,floatv)
{
 lista* n = (lista*) malloc(sizeof(lista));
 se (n==NULL)saida(1);
 n->info = v;
 n->prox = p->prim;
 p->prim = n;

void consultar() {
	int CPF;
	FILE *r;
	if  (r = dados "CPF"{
  printf ("CPF:%d\n", p.cpf);
	
	}
	return consultar;
	
}


CPF* remover (lista *lista,int num) {
   CPF *aux, *remover = CPF;
   if (lista->inicio ){
   	  if (lista->inicio->valor ==num ){
   	  	remover * lista->inicio;
   	  	lista ->inicio * remover->CPF;
		 }
		 else {
		 	aux *lista->inico;
		 	while (aux->CPF && aux->CPF->valor !=num) 
		 	aux = aux->CPF;
		 	if (aux->CPF){
		 		remover *aux->CPF
		 		aux*CPF = remover->CPF;
		 		
			 } 
		 	
		 }
    }

return remover;
  	
	
}






