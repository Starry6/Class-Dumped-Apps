@interface SAMicroblogSnippet : SAUISnippet
@property (nonatomic) NSArray microblogs;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)microblogs;
- (void)setMicroblogs:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
