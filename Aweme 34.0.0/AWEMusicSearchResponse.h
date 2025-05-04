@interface AWEMusicSearchResponse : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString requestId;
@property (nonatomic) NSArray results;
- (id)cursor;
- (void)setResults:;
- (id)results;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setRequestId:;
- (id)requestId;
+ (id)resultsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
