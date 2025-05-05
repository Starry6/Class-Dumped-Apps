@interface MLCControlTreeNode : NSObject
@property (nonatomic) MLCTensor predicate;
@property (nonatomic) BOOL needToNegate;
- (id)predicate;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithTensor:needToNegate:;
- (BOOL)needToNegate;
+ (id)controlTreeNodeWithPredicate:needToNegate:;
@end
