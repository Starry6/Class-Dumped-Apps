@interface AWELongVideoPlusEpisodeListResponse : MTLModel
@property (nonatomic) NSArray episodeList;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)minCursor;
- (void)setMinCursor:;
- (id)episodeList;
- (void)setEpisodeList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)episodeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
