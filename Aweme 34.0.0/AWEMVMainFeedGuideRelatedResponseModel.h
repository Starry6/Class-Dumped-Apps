@interface AWEMVMainFeedGuideRelatedResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSString wholeItemIDList;
@property (nonatomic) q waterMark;
@property (nonatomic) BOOL hasMore;
- (id)awemeList;
- (void)setAwemeList:;
- (id)wholeItemIDList;
- (void)setWholeItemIDList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setWaterMark:;
- (long long)waterMark;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
