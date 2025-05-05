@interface SANoteSnippet : SAUISnippet
@property (nonatomic) NSArray notes;
- (id)notes;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setNotes:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
