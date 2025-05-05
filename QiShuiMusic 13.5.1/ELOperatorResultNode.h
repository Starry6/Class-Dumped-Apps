@interface ELOperatorResultNode : ELBaseNode
@property (nonatomic) ELBaseNode leftOperand;
@property (nonatomic) ELBaseNode rightOperand;
@property (nonatomic) ELBaseNode operatorNode;
- (void)setLeftOperand:;
- (id)nodeStringValue;
- (id)leftOperand;
- (id)operatorNode;
- (id)rightOperand;
- (void)setOperatorNode:;
- (void)setRightOperand:;
- (void).cxx_destruct;
@end
