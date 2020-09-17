#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED

class ProgramNode;
class ClassListNode;
class VarDeclNode;
class IdListNode;
class TypeNode;
class FunctionDeclNode;
class TypeListNode;
class PointerNode;
class StatementListNode;
class VarStmtNode;
class VarFuncListNode;
class IfNode;
class WhileNode;
class SwitchNode;
class BreakNode;
class PrintlnNode;
class ReadNode;
class ReturnNode;
class CaseBlockNode;
class ThrowNode;
class ExpListNode;
class TryNode;
class IdentifierNode;
class IntegerNode;
class RealNode;
class LiteralNode;
class CharacterNode;
class PrimaryNode;
class FunctionCallNode;
class FieldAccessNode;
class PointerAccessNode;
class AddressValueNode;
class PointerValueNode;
class ArrayAccessNode;
class ArrayDeclNode;
class AssignNode;
class RelationalOpNode;
class AdditionOpNode;
class MultiplicationOpNode;
class BooleanOpNode;
class BitwiseOpNode;
class NewNode;
class NotNode;
class SignNode;
class TrueNode;
class FalseNode;
class ThisNode;
class FormalListNode;

class Visitor {
  public:
    virtual ~Visitor() {};
    virtual void visit(ProgramNode *node) = 0;
    virtual void visit(ClassListNode *node) = 0;
    virtual void visit(VarDeclNode *node) = 0;
    virtual void visit(IdListNode *node) = 0;
    virtual void visit(TypeNode *node) = 0;
    virtual void visit(FunctionDeclNode *node) = 0;
    virtual void visit(TypeListNode *node) = 0;
    virtual void visit(PointerNode *node) = 0;
    virtual void visit(StatementListNode *node) = 0;
    virtual void visit(VarStmtNode *node) = 0;
    virtual void visit(VarFuncListNode *node) = 0;
    virtual void visit(IfNode *node) = 0;
    virtual void visit(WhileNode *node) = 0;
    virtual void visit(SwitchNode *node) = 0;
    virtual void visit(BreakNode *node) = 0;
    virtual void visit(PrintlnNode *node) = 0;
    virtual void visit(ReadNode *node) = 0;
    virtual void visit(ReturnNode *node) = 0;
    virtual void visit(CaseBlockNode *node) = 0;
    virtual void visit(ThrowNode *node) = 0;
    virtual void visit(ExpListNode *node) = 0;
    virtual void visit(TryNode *node) = 0;
    virtual void visit(IdentifierNode *node) = 0;
    virtual void visit(IntegerNode *node) = 0;
    virtual void visit(RealNode *node) = 0;
    virtual void visit(LiteralNode *node) = 0;
    virtual void visit(CharacterNode *node) = 0;
    virtual void visit(PrimaryNode *node) = 0;
    virtual void visit(FunctionCallNode *node) = 0;
    virtual void visit(FieldAccessNode *node) = 0;
    virtual void visit(PointerAccessNode *node) = 0;
    virtual void visit(AddressValueNode *node) = 0;
    virtual void visit(PointerValueNode *node) = 0;
    virtual void visit(ArrayAccessNode *node) = 0;
    virtual void visit(ArrayDeclNode *node) = 0;
    virtual void visit(AssignNode *node) = 0;
    virtual void visit(RelationalOpNode *node) = 0;
    virtual void visit(AdditionOpNode *node) = 0;
    virtual void visit(MultiplicationOpNode *node) = 0;
    virtual void visit(BooleanOpNode *node) = 0;
    virtual void visit(BitwiseOpNode *node) = 0;
    virtual void visit(NewNode *node) = 0;
    virtual void visit(NotNode *node) = 0;
    virtual void visit(SignNode *node) = 0;
    virtual void visit(TrueNode *node) = 0;
    virtual void visit(FalseNode *node) = 0;
    virtual void visit(ThisNode *node) = 0;
    virtual void visit(FormalListNode *node) = 0;
};

class PrintASTVisitor : public Visitor {
  private:
    unsigned int indentation;
    void indent();
    void print(const char *s);
    void increase_indent();
    void decrease_indent();
  public:
    PrintASTVisitor();

    virtual ~PrintASTVisitor() {};
    virtual void visit(ProgramNode *node);
    virtual void visit(ClassListNode *node);
    virtual void visit(VarDeclNode *node);
    virtual void visit(IdListNode *node);
    virtual void visit(TypeNode *node);
    virtual void visit(FunctionDeclNode *node);
    virtual void visit(TypeListNode *node);
    virtual void visit(PointerNode *node);
    virtual void visit(StatementListNode *node);
    virtual void visit(VarStmtNode *node);
    virtual void visit(VarFuncListNode *node);
    virtual void visit(IfNode *node);
    virtual void visit(WhileNode *node);
    virtual void visit(SwitchNode *node);
    virtual void visit(BreakNode *node);
    virtual void visit(PrintlnNode *node);
    virtual void visit(ReadNode *node);
    virtual void visit(ReturnNode *node);
    virtual void visit(CaseBlockNode *node);
    virtual void visit(ThrowNode *node);
    virtual void visit(ExpListNode *node);
    virtual void visit(TryNode *node);
    virtual void visit(IdentifierNode *node);
    virtual void visit(IntegerNode *node);
    virtual void visit(RealNode *node);
    virtual void visit(LiteralNode *node);
    virtual void visit(CharacterNode *node);
    virtual void visit(PrimaryNode *node);
    virtual void visit(FunctionCallNode *node);
    virtual void visit(FieldAccessNode *node);
    virtual void visit(PointerAccessNode *node);
    virtual void visit(AddressValueNode *node);
    virtual void visit(PointerValueNode *node);
    virtual void visit(ArrayAccessNode *node);
    virtual void visit(ArrayDeclNode *node);
    virtual void visit(AssignNode *node);
    virtual void visit(RelationalOpNode *node);
    virtual void visit(AdditionOpNode *node);
    virtual void visit(MultiplicationOpNode *node);
    virtual void visit(BooleanOpNode *node);
    virtual void visit(BitwiseOpNode *node);
    virtual void visit(NewNode *node);
    virtual void visit(NotNode *node);
    virtual void visit(SignNode *node);
    virtual void visit(TrueNode *node);
    virtual void visit(FalseNode *node);
    virtual void visit(ThisNode *node);
    virtual void visit(FormalListNode *node);
};

#endif //VISITOR_H_INCLUDED
