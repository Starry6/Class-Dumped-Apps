@interface SAUILParsedExpression : SADomainObject
@property (nonatomic) SAUILParseableExpression parseableExpression;
@property (nonatomic) NSString parsedOutput;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)parseableExpression;
- (void)setParseableExpression:;
- (id)parsedOutput;
- (void)setParsedOutput:;
+ (id)parsedExpression;
+ (id)parsedExpressionWithDictionary:context:;
@end
