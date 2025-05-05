@interface SASemanticValue : AceObject
@property (nonatomic) NSString semanticValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)semanticValue;
- (void)setSemanticValue:;
+ (id)semanticValue;
+ (id)semanticValueWithDictionary:context:;
@end
