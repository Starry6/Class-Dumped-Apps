@interface RBSProcessEverythingPredicate : RBSProcessPredicateImpl
- (BOOL)matchesProcess:;
- (BOOL)isEqual:;
+ (id)everythingPredicate;
@end
