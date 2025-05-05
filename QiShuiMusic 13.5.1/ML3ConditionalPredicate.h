@interface ML3ConditionalPredicate : ML3Predicate
@property (nonatomic) ML3Predicate conditionPredicate;
@property (nonatomic) ML3Predicate thenPredicate;
@property (nonatomic) ML3Predicate elsePredicate;
- (id)SQLJoinClausesForClass:;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:entityClass:;
- (id)spotlightPredicate;
- (BOOL)isDynamicForEntityClass:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithConditionPredicate:thenPredicate:elsePredicate:;
- (id)conditionPredicate;
- (id)thenPredicate;
- (id)elsePredicate;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithConditionPredicate:thenPredicate:elsePredicate:;
@end
