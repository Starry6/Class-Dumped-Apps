@interface AMSSQLiteCompoundPredicate : AMSSQLitePredicate
@property (nonatomic) NSArray predicates;
- (id)SQLJoinClausesForEntityClass:;
- (id)predicates;
- (id)SQLForEntityClass:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)applyBinding:atIndex:;
+ (id)predicateMatchingAllPredicates:;
+ (id)predicateWithProperty:values:comparisonType:;
+ (id)predicateMatchingAnyPredicates:;
@end
