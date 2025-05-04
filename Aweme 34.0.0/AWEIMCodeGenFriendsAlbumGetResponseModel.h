@interface AWEIMCodeGenFriendsAlbumGetResponseModel : AWEBaseResponseModel
@property (nonatomic) NSArray mediaListModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q nextCursor;
- (long long)nextCursor;
- (void)setNextCursor:;
- (id)mediaListModelArray;
- (void)setMediaListModelArray:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
