@interface AWEHangoutSingleFeedResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)awemeList;
- (void)setMiniDetail:;
- (void)setAwemeList:;
- (void)setIsOuter:;
- (void)setResponseTimestampToNow;
- (void)setHasMore:;
- (id)extra;
- (BOOL)hasMore;
- (void)setDataSourceType:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
