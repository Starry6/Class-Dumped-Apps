@interface ML3PropertyPredicate : ML3Predicate
@property (nonatomic) NSString property;
- (id)SQLJoinClausesForClass:;
- (void)setProperty:;
- (void)appendSQLToMutableString:entityClass:;
- (BOOL)isDynamicForEntityClass:;
- (id)initWithProperty:;
- (id)property;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:;
@end
