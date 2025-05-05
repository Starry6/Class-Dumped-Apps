@interface ML3Predicate : NSObject
- (id)SQLJoinClausesForClass:;
- (id)databaseStatementParameters;
- (void)appendSQLToMutableString:entityClass:;
- (id)spotlightPredicate;
- (id)SQLForEntityClass:;
- (BOOL)isDynamicForEntityClass:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)containsPropertyPredicate:matchingValue:usingComparison:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)isTrueAlways;
- (BOOL)isFalseAlways;
+ (BOOL)supportsSecureCoding;
@end
