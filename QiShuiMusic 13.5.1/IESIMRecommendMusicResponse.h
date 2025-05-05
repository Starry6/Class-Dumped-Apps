@interface IESIMRecommendMusicResponse : IESIMBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray musicList;
- (id)musicList;
- (void)setMusicList:;
- (id)cursor;
- (void)setHasMore:;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)hasMoreJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
