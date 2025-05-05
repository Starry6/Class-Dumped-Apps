@interface SACardSnippet : SAUISnippet
@property (nonatomic) NSData cardData;
@property (nonatomic) NSData compactSizeCardData;
@property (nonatomic) NSArray contextItems;
@property (nonatomic) NSArray referencedCommands;
@property (nonatomic) NSArray referencedSnippets;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)cardData;
- (void)setCardData:;
- (id)compactSizeCardData;
- (void)setCompactSizeCardData:;
- (id)contextItems;
- (void)setContextItems:;
- (id)referencedCommands;
- (void)setReferencedCommands:;
- (id)referencedSnippets;
- (void)setReferencedSnippets:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
