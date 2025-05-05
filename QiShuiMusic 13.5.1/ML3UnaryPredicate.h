@interface ML3UnaryPredicate : ML3Predicate
@property (nonatomic) ML3Predicate predicate;
- (id)SQLJoinClausesForClass:;
- (id)databaseStatementParameters;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)predicate;
- (void)encodeWithCoder:;
- (void)setPredicate:;
- (void).cxx_destruct;
- (id)initWithPredicate:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithPredicate:;
@end
