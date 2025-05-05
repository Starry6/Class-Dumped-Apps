@interface ML3CompoundPredicate : ML3Predicate
@property (nonatomic) NSArray predicates;
@property (nonatomic) NSString compoundOperatorJoiner;
- (id)SQLJoinClausesForClass:;
- (void)setPredicates:;
- (id)databaseStatementParameters;
- (id)initWithPredicates:;
- (void)appendSQLToMutableString:entityClass:;
- (id)predicates;
- (id)spotlightPredicate;
- (BOOL)isDynamicForEntityClass:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)containsPropertyPredicate:matchingValue:usingComparison:;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateMatchingPredicates:;
@end
