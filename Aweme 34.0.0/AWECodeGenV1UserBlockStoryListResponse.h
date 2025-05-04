@interface AWECodeGenV1UserBlockStoryListResponse : AWEBaseResponseModel
@property (nonatomic) NSArray blockListModelArray;
@property (nonatomic) q lastCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSInteger total;
- (void)setLastCursor:;
- (long long)lastCursor;
- (id)blockListModelArray;
- (void)setBlockListModelArray:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (int)total;
- (void)setTotal:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
