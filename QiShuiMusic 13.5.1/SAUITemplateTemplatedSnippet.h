@interface SAUITemplateTemplatedSnippet : SAUISnippet
@property (nonatomic) NSArray templateItems;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)templateItems;
- (void)setTemplateItems:;
+ (id)templatedSnippet;
+ (id)templatedSnippetWithDictionary:context:;
@end
