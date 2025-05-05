@interface ML3TruthPredicate : ML3Predicate
- (void)appendSQLToMutableString:entityClass:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)_predicateString;
- (BOOL)isTrueAlways;
- (BOOL)isFalseAlways;
+ (BOOL)supportsSecureCoding;
+ (id)falsePredicate;
+ (id)truePredicate;
@end
