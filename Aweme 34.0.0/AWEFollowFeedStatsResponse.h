@interface AWEFollowFeedStatsResponse : AWEBaseApiModel
@property (nonatomic) BOOL sortHasMore;
@property (nonatomic) NSString itemIDs;
@property (nonatomic) Q scene;
@property (nonatomic) BOOL isDemotion;
- (BOOL)isDemotion;
- (BOOL)sortHasMore;
- (void)setSortHasMore:;
- (void)setIsDemotion:;
- (void)setScene:;
- (unsigned long long)scene;
- (void).cxx_destruct;
- (id)itemIDs;
- (void)setItemIDs:;
+ (id)JSONKeyPathsByPropertyKey;
@end
