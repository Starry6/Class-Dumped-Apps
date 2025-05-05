@interface SAUISnippetAttributeOpened : SAUISnippetInteraction
@property (nonatomic) NSString attributeName;
@property (nonatomic) NSString attributeValue;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)attributeValue;
- (void)setAttributeValue:;
- (id)attributeName;
- (void)setAttributeName:;
+ (id)snippetAttributeOpened;
+ (id)snippetAttributeOpenedWithDictionary:context:;
@end
