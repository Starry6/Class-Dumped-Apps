@interface AWEMusicStreamingImpl.LunaPlaylistSortTracksRequest : AWEMusicStreamingImpl.LunaRequestBaseModel
@property (nonatomic) NSString playlistID;
@property (nonatomic) NSArray media;
- (void)setPlaylistID:;
- (Class)responseModelClass;
- (id)init;
- (id)path;
- (void).cxx_destruct;
- (id)media;
- (id)params;
- (void)setMedia:;
- (id)playlistID;
@end
