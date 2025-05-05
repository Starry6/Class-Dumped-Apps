@interface SAEmailSnippet : SAUISnippet
@property (nonatomic) NSArray emails;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)emails;
- (void)setEmails:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
