@interface AWEFamiliarRecommendWorkModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) BOOL hasMore;
- (id)awemeList;
- (id)minCursor;
- (void)setAwemeList:;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
