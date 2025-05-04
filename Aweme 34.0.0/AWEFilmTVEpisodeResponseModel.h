@interface AWEFilmTVEpisodeResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray list;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber total;
- (id)cursor;
- (void)setList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (id)list;
- (void).cxx_destruct;
- (id)total;
- (void)setTotal:;
+ (id)coverJSONTransformer;
+ (id)listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
