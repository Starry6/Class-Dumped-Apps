@interface AWEMusicStreamingImpl.LunaPlaylistDetailResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString nextCursor;
@property (nonatomic) AWEMiniLunaPlaylistInfoModel playlist;
@property (nonatomic) NSArray mediaResources;
- (id)nextCursor;
- (void)setNextCursor:;
- (id)mediaResources;
- (void)setMediaResources:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)playlist;
- (void)setPlaylist:;
+ (id)playlistJSONTransformer;
+ (id)mediaResourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
