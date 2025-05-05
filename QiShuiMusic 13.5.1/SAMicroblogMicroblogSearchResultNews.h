@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost
@property (nonatomic) NSURL articleURL;
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (id)descriptionText;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (void)setDescriptionText:;
- (id)articleURL;
- (void)setArticleURL:;
+ (id)microblogSearchResultNews;
+ (id)microblogSearchResultNewsWithDictionary:context:;
@end
