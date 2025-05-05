@interface GKDecisionNode : NSObject
- (void)dealloc;
- (void)setAttribute:;
- (id)attribute;
- (void).cxx_destruct;
- (id)description;
- (id)branches;
- (id)initWithNode:tree:;
- (id)createChildWithAttribute:randomSource:withBranch:;
- (id)createBranchWithValue:attribute:;
- (id)createBranchWithPredicate:attribute:;
- (id)createBranchWithWeight:attribute:;
- (id)getNodeAtBranch:;
@end
