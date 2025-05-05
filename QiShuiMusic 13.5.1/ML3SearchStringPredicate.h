@interface ML3SearchStringPredicate : ML3Predicate
@property (nonatomic) NSArray properties;
@property (nonatomic) NSString searchString;
- (id)SQLJoinClausesForClass:;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:entityClass:;
- (void)setSearchString:;
- (BOOL)isDynamicForEntityClass:;
- (id)searchString;
- (void)setProperties:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)properties;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithConcatenatedProperties:searchString:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithConcatenatedProperties:searchString:;
@end
