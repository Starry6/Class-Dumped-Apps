@interface SSSQLiteCompoundPredicate : SSSQLitePredicate
@property (nonatomic) NSArray predicates;
- (void)bindToStatement:bindingIndex:;
- (id)SQLJoinClausesForEntityClass:;
- (id)predicates;
- (id)SQLForEntityClass:;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)predicateMatchingAllPredicates:;
+ (id)predicateWithProperty:values:comparisonType:;
+ (id)predicateMatchingAnyPredicates:;
@end
