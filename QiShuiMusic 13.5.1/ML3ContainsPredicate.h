@interface ML3ContainsPredicate : ML3PropertyPredicate
@property (nonatomic) @ values;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:entityClass:;
- (id)values;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithProperty:values:;
- (void).cxx_destruct;
- (BOOL)containsPropertyPredicate:matchingValue:usingComparison:;
- (id)description;
- (void)setValues:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:values:;
+ (id)predicateWithProperty:valueSet:;
@end
