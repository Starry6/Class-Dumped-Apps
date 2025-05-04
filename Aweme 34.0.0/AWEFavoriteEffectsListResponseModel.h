@interface AWEFavoriteEffectsListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray stickerList;
@property (nonatomic) q minCursor;
@property (nonatomic) q maxCursor;
@property (nonatomic) BOOL hasMore;
- (long long)minCursor;
- (long long)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (id)stickerList;
- (void)setStickerList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)stickerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
