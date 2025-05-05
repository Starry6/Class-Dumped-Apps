@interface SAUISirilandSnippet : SAUISnippet
@property (nonatomic) NSString navigationPath;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)navigationPath;
- (void)setNavigationPath:;
+ (id)sirilandSnippet;
+ (id)sirilandSnippetWithDictionary:context:;
@end
