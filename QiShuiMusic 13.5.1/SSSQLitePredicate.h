@interface SSSQLitePredicate : NSObject
- (void)bindToStatement:bindingIndex:;
- (id)SQLJoinClausesForEntityClass:;
- (id)SQLForEntityClass:;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
