@interface SAUSSnippet : SAUISnippet
@property (nonatomic) NSArray sections;
- (id)sections;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setSections:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
