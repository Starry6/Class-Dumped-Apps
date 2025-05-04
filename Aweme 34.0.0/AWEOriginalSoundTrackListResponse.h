@interface AWEOriginalSoundTrackListResponse : AWEBaseApiModel
@property (nonatomic) NSArray ostList;
@property (nonatomic) NSArray chartList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSArray mediaList;
@property (nonatomic) NSArray chartMediaList;
@property (nonatomic) BOOL hasMore;
- (id)mediaList;
- (void)setMediaList:;
- (id)chartMediaList;
- (void)setChartMediaList:;
- (id)ostList;
- (void)setOstList:;
- (id)chartList;
- (void)setChartList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)hasMoreJSONTransformer;
+ (id)mediaListJSONTransformer;
+ (id)ostListJSONTransformer;
+ (id)chartListJSONTransformer;
+ (id)chartMediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
