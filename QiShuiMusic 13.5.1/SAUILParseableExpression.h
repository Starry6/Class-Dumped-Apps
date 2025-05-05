@interface SAUILParseableExpression : SADomainObject
@property (nonatomic) SADomainObject context;
@property (nonatomic) NSString expressionString;
- (id)groupIdentifier;
- (id)context;
- (id)encodedClassName;
- (void)setContext:;
- (id)expressionString;
- (void)setExpressionString:;
+ (id)parseableExpression;
+ (id)parseableExpressionWithDictionary:context:;
@end
