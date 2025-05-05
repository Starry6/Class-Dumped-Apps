@interface NSExpressionDescription : NSPropertyDescription
@property (nonatomic) NSString attributeValueClassName;
@property (nonatomic) NSString valueTransformerName;
@property (nonatomic) NSExpression expression;
@property (nonatomic) Q expressionResultType;
- (unsigned long long)_propertyType;
- (id)init;
- (id)expression;
- (void)dealloc;
- (void)setExpression:;
- (void)_writeIntoData:propertiesDict:uniquedPropertyNames:uniquedStrings:uniquedData:entitiesSlots:fetchRequests:;
- (id)initWithCoder:;
- (id)attributeValueClassName;
- (void)encodeWithCoder:;
- (id)valueTransformerName;
- (unsigned long long)expressionResultType;
- (id)description;
- (id)copyWithZone:;
- (void)setExpressionResultType:;
+ (BOOL)supportsSecureCoding;
@end
