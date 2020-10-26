#ifndef GRAMMAR_H
#define GRAMMAR_H
#define NUM_RULES 59

typedef struct SymList {
	char* val;
	struct SymList* next;
} SymList;

typedef struct Rule {
	char* lhs;
	SymList* rhs;
} Rule;

char* getSymbolName(char* symbolBuffer);
void addRule(Rule* grammar, int index, char* ruleBuffer);
Rule* readGrammar(char* grammar_path, int num_rules);
void printGrammar(Rule* grammar, int num_rules);

#endif