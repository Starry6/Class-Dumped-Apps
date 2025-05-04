@interface AWEPOIAlbumVideoPageModel : AWEBaseApiModel
@property (nonatomic) q nextPage;
@property (nonatomic) NSMutableArray awemeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q totalCount;
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString backendType;
- (id)poiID;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setPoiID:;
- (void)setBackendType:;
- (id)backendType;
- (long long)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setTotalCount:;
- (long long)nextPage;
- (void)setNextPage:;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
