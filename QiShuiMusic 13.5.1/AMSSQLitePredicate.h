@interface AMSSQLitePredicate : NSObject
- (id)SQLJoinClausesForEntityClass:;
- (id)SQLForEntityClass:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)applyBinding:atIndex:;
@end
