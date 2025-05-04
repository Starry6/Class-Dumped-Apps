@interface AWEFavoriteAwemeListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)awemeList;
- (void)setAwemeList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
