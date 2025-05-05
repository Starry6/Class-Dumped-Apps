@interface SAUIErrorSnippet : SAUISnippet
@property (nonatomic) NSString message;
- (id)groupIdentifier;
- (void)setMessage:;
- (id)encodedClassName;
- (id)message;
+ (id)errorSnippet;
+ (id)errorSnippetWithDictionary:context:;
@end
