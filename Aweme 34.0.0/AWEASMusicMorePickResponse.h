@interface AWEASMusicMorePickResponse : ACCBaseApiModel
@property (nonatomic) NSArray banners;
@property (nonatomic) NSArray playlist;
@property (nonatomic) NSArray musicCollection;
@property (nonatomic) NSString cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL playlistHasMore;
- (BOOL)playlistHasMore;
- (void)setPlaylistHasMore:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)banners;
- (void)setBanners:;
- (id)playlist;
- (void)setPlaylist:;
- (id)musicCollection;
- (void)setMusicCollection:;
+ (id)playlistJSONTransformer;
+ (id)bannersJSONTransformer;
+ (id)musicCollectionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
