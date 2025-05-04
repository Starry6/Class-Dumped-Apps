@interface AWEIMBlockListResponse : AWEBaseApiModel
@property (nonatomic) NSArray blockList;
@property (nonatomic) q index;
@property (nonatomic) NSNumber hasMore;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSString hotsoonText;
@property (nonatomic) q hotsoonFilterCount;
@property (nonatomic) q hotsoonHasMore;
- (void)setHotsoonHasMore:;
- (void)setHotsoonText:;
- (void)setHotsoonFilterCount:;
- (long long)hotsoonHasMore;
- (long long)hotsoonFilterCount;
- (id)hotsoonText;
- (void)setIndex:;
- (long long)index;
- (void)setCount:;
- (void)setHasMore:;
- (id)count;
- (id)hasMore;
- (void).cxx_destruct;
- (id)blockList;
- (void)setBlockList:;
+ (id)blockListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
