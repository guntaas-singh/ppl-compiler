#ifndef TRAVERSE_H
#define TRAVERSE_H

void traverseParseTree(TreeNode* root);
void traverseDecList(TreeNode* root);
void processDecStmt(TreeNode* decStmt);
void processPrimDecStmt(TreeNode* primDecStmt);
void processRectDecStmt(TreeNode* rectDecStmt);
void processJagg2DDecStmt(TreeNode * jaggDecStmt);
void processJagg3DDecStmt(TreeNode * jaggDecStmt);
void propagateTypeExp(TreeNode* node);
void populateTable(TreeNode* root , TypeExpTable* head);
void printTypeExpressionTable(TypeExpTable* table);
void printTypeExp(TypeExp t, typeExpTag tag);
void traverseAsgList(TreeNode* root, TypeExpTable* table);
void processAsgStmt(TreeNode* asgStmt, TypeExpTable* table);
void processExpression(TreeNode* expr, TypeExpTable* table);
bool isArrayVariable(TreeNode* node);
void processArrayVariable(TreeNode* arrVar, TypeExpTable* table);
void getTypeExp(TreeNode* id, TypeExpTable* table);
bool equalTypeExp(TypeExp a, typeExpTag atag, TypeExp b, typeExpTag btag);
bool checkOperands(TreeNode* lhs, char* op, TreeNode* rhs);
void printError(int line_no, bool asgnStmt, char* op, TreeNode* lhs, TreeNode* rhs, int depth, char* msg);

#endif