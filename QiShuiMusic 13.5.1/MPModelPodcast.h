@interface MPModelPodcast : MPModelObject
@property (nonatomic) NSString title;
@property (nonatomic) NSURL feedURL;
@property (nonatomic) NSURL shareURL;
@property (nonatomic) BOOL supportsSubscription;
@property (nonatomic) MPModelPodcastAuthor author;
@property (nonatomic) @? artworkCatalogBlock;
- (id)humanDescription;
- (id)artworkCatalog;
+ (id)kindWithEpisodeKind:;
+ (id)__artworkCatalogBlock_KEY;
+ (long long)genericObjectType;
+ (id)__title_KEY;
+ (id)__feedURL_KEY;
+ (id)__shareURL_KEY;
+ (id)__supportsSubscription_KEY;
+ (id)__author_KEY;
@end
