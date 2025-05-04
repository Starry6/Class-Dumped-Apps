@interface AWEDetailAwemeResponse : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray trendsAwemeList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)awemeList;
- (void)setAwemeList:;
- (id)trendsAwemeList;
- (void)setTrendsAwemeList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)trendsAwemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
