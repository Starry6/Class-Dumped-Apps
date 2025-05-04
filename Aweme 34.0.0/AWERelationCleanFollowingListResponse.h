@interface AWERelationCleanFollowingListResponse : AWEBaseApiModel
@property (nonatomic) NSArray cleanList;
@property (nonatomic) q index;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q total;
@property (nonatomic) q vcdCount;
@property (nonatomic) q hotsoonHasMore;
@property (nonatomic) NSString hotsoonText;
- (void)setHotsoonHasMore:;
- (void)setHotsoonText:;
- (long long)hotsoonHasMore;
- (id)hotsoonText;
- (id)cleanList;
- (void)setCleanList:;
- (long long)vcdCount;
- (void)setVcdCount:;
- (void)setIndex:;
- (long long)index;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
+ (id)cleanListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
