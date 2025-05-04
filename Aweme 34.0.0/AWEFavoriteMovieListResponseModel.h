@interface AWEFavoriteMovieListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray collectionList;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber cursor;
- (id)awemeList;
- (void)setAwemeList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)collectionList;
- (void)setCollectionList:;
+ (id)awemeListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)collectionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
