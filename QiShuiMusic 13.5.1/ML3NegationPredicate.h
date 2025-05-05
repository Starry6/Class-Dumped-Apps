@interface ML3NegationPredicate : ML3UnaryPredicate
- (void)appendSQLToMutableString:entityClass:;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
