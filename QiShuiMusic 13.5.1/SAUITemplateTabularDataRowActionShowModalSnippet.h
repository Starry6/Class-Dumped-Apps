@interface SAUITemplateTabularDataRowActionShowModalSnippet : SAUITemplateTabularDataRowAction
@property (nonatomic) <SAServerBoundCommand> fetchContentCommand;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)fetchContentCommand;
- (void)setFetchContentCommand:;
+ (id)tabularDataRowActionShowModalSnippet;
+ (id)tabularDataRowActionShowModalSnippetWithDictionary:context:;
@end
