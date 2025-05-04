@interface AWEMusicChartLoadMoreEventModel : MTLModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSString musicId;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMusicId:;
- (id)musicId;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setSessionId:;
- (id)sessionId;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
