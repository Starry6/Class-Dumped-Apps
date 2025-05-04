@interface AWENearbyHotSpotFeedListResponse : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray hotSpotFirstAwemeList;
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString hotRankVersion;
@property (nonatomic) q itemTotalCount;
- (long long)nextCursor;
- (void)setNextCursor:;
- (id)awemeList;
- (void)setAwemeList:;
- (id)hotSpotFirstAwemeList;
- (long long)itemTotalCount;
- (id)hotRankVersion;
- (void)setHotRankVersion:;
- (void)setHotSpotFirstAwemeList:;
- (void)setItemTotalCount:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)hotSpotFirstAwemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
