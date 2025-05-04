@interface AWECKAAAssetResponseModel : NSObject
@property (nonatomic) <AWEInTodayAlbumModelProtocol> album;
@property (nonatomic) q offset;
@property (nonatomic) BOOL hasMore;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setAlbum:;
- (void).cxx_destruct;
- (id)album;
@end
