@interface SAMPSnippet : SAUISnippet
@property (nonatomic) NSArray items;
- (id)groupIdentifier;
- (id)items;
- (void)setItems:;
- (id)encodedClassName;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
