@interface AWEIMPolymerizationDiggResponseModel : AWEBaseApiModel
@property (nonatomic) q maxCursor;
@property (nonatomic) q minCursor;
@property (nonatomic) NSArray diggList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q total;
- (long long)minCursor;
- (long long)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (id)diggList;
- (void)setDiggList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
+ (id)diggListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
