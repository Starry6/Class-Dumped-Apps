@interface AWEMiniLunaPlaylistDetailResponse : AWEBaseApiModel
@property (nonatomic) NSString nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) AWEMiniLunaPlaylistInfoModel playlist;
@property (nonatomic) NSArray mediaResources;
- (id)nextCursor;
- (void)setNextCursor:;
- (id)mediaResources;
- (void)setMediaResources:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)playlist;
- (void)setPlaylist:;
+ (id)mediaResourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
