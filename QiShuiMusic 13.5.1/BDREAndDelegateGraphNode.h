@interface BDREAndDelegateGraphNode : BDREGraphNode
@property (nonatomic) BDREAndGraphNode andNode;
- (id)andNode;
- (BOOL)canPassWithFootPrint:;
- (id)initWithAndNode:;
- (id)pointNodes;
- (void)setAndNode:;
- (long long)maxIndex;
- (void).cxx_destruct;
@end
