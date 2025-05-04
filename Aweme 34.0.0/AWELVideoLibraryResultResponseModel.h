@interface AWELVideoLibraryResultResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray albumList;
@property (nonatomic) q limit;
@property (nonatomic) q offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q miniappOffset;
- (unsigned long long)miniappOffset;
- (void)setMiniappOffset:;
- (void)setAlbumList:;
- (long long)limit;
- (void)setLimit:;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)albumList;
+ (id)albumListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
