@interface SAUISiriSearchJSONSnippet : SAUISnippet
@property (nonatomic) NSString clientTemplate;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)clientTemplate;
- (void)setClientTemplate:;
+ (id)siriSearchJSONSnippet;
+ (id)siriSearchJSONSnippetWithDictionary:context:;
@end
