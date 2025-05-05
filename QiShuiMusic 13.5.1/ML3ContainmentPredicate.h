@interface ML3ContainmentPredicate : ML3PropertyPredicate
@property (nonatomic) NSSet values;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:entityClass:;
- (id)values;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)_orderedValues;
- (void)encodeWithCoder:;
- (id)initWithProperty:values:;
- (void).cxx_destruct;
- (BOOL)containsPropertyPredicate:matchingValue:usingComparison:;
- (id)description;
- (void)setValues:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)predicateWithProperty:values:;
@end
