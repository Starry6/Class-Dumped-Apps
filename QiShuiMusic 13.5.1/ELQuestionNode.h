@interface ELQuestionNode : ELBaseNode
@property (nonatomic) ELBaseNode conditionNode;
@property (nonatomic) ELBaseNode leftOperand;
@property (nonatomic) ELBaseNode rightOperand;
- (void)setLeftOperand:;
- (id)nodeStringValue;
- (id)calcuateWtihJSON:;
- (id)conditionNode;
- (id)leftOperand;
- (id)rightOperand;
- (void)setConditionNode:;
- (void)setRightOperand:;
- (void).cxx_destruct;
@end
