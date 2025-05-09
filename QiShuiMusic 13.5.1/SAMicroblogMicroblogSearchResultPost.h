@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase
@property (nonatomic) NSDate creationTime;
@property (nonatomic) SADecoratedString decoratedContent;
@property (nonatomic) NSArray embeddedHashtags;
@property (nonatomic) NSArray embeddedImages;
@property (nonatomic) NSArray embeddedLinks;
@property (nonatomic) NSArray embeddedMentions;
@property (nonatomic) q favoritesCount;
@property (nonatomic) NSString location;
@property (nonatomic) SAUIAppPunchOut punchOut;
@property (nonatomic) SAMicroblogTwitterPostAuthor retweetAuthor;
@property (nonatomic) q retweetCount;
@property (nonatomic) NSURL webAddress;
- (long long)favoritesCount;
- (id)groupIdentifier;
- (void)setCreationTime:;
- (id)creationTime;
- (void)setFavoritesCount:;
- (id)location;
- (id)encodedClassName;
- (void)setLocation:;
- (void)setPunchOut:;
- (id)punchOut;
- (id)webAddress;
- (void)setWebAddress:;
- (id)decoratedContent;
- (void)setDecoratedContent:;
- (id)embeddedHashtags;
- (void)setEmbeddedHashtags:;
- (id)embeddedImages;
- (void)setEmbeddedImages:;
- (id)embeddedLinks;
- (void)setEmbeddedLinks:;
- (id)embeddedMentions;
- (void)setEmbeddedMentions:;
- (id)retweetAuthor;
- (void)setRetweetAuthor:;
- (long long)retweetCount;
- (void)setRetweetCount:;
+ (id)microblogSearchResultPost;
+ (id)microblogSearchResultPostWithDictionary:context:;
@end
