@interface AWEMusicChartMusicDetailResponse : AWEBaseApiModel
@property (nonatomic) NSString version;
@property (nonatomic) NSString cursor;
@property (nonatomic) NSString startCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) AWEMusicChartDetailModel chartDetail;
- (void)setStartCursor:;
- (id)chartDetail;
- (void)setChartDetail:;
- (id)cursor;
- (void)setHasMore:;
- (id)version;
- (BOOL)hasMore;
- (void)setCursor:;
- (void)setVersion:;
- (void).cxx_destruct;
- (id)startCursor;
+ (id)hasMoreJSONTransformer;
+ (id)chartDetailListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
