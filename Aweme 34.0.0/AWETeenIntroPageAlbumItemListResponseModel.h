@interface AWETeenIntroPageAlbumItemListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) q minCursor;
@property (nonatomic) q maxCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString pageToken;
- (id)awemeList;
- (long long)minCursor;
- (void)setAwemeList:;
- (long long)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (id)pageToken;
- (void)setPageToken:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
