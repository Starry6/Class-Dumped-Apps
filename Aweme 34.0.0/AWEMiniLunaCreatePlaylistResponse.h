@interface AWEMiniLunaCreatePlaylistResponse : AWEBaseApiModel
@property (nonatomic) AWEMiniLunaPlaylistInfoModel playlist;
- (void).cxx_destruct;
- (id)playlist;
- (void)setPlaylist:;
+ (id)playlistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
