@interface BDREAndGraphNode : BDREGraphNode
@property (nonatomic) BDREAndDelegateGraphNode leftDelegateNode;
@property (nonatomic) BDREAndDelegateGraphNode rightDelegateNode;
- (BOOL)canPassWithFootPrint:;
- (id)leftDelegateNode;
- (id)rightDelegateNode;
- (void)setLeftDelegateNode:;
- (void)setLeftNode:rightNode:;
- (void)setRightDelegateNode:;
- (void)updateIndex:;
- (void).cxx_destruct;
@end
