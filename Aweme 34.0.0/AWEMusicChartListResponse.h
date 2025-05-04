@interface AWEMusicChartListResponse : AWEBaseApiModel
@property (nonatomic) NSString cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString releaseDate;
@property (nonatomic) NSString detailUrl;
@property (nonatomic) NSArray musicList;
- (void)setDetailUrl:;
- (id)detailUrl;
- (id)musicList;
- (void)setMusicList:;
- (id)cursor;
- (id)releaseDate;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setReleaseDate:;
+ (id)hasMoreJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
