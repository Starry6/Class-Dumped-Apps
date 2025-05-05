@interface SAMicroblogMicroblogSearchResultBase : SADomainObject
@property (nonatomic) SAMicroblogTwitterPostAuthor author;
- (id)groupIdentifier;
- (id)author;
- (id)encodedClassName;
- (void)setAuthor:;
+ (id)microblogSearchResultBase;
+ (id)microblogSearchResultBaseWithDictionary:context:;
@end
