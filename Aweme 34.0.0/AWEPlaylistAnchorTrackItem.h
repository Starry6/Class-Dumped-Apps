@interface AWEPlaylistAnchorTrackItem : NSObject
@property (nonatomic) NSMutableSet createdPlaylists;
@property (nonatomic) NSDictionary musicianTrackerParams;
@property (nonatomic) NSString playlistActivityName;
- (id)createdPlaylists;
- (void)setMusicianTrackerParams:;
- (void)setPlaylistActivityName:;
- (id)trackParamsWithPlaylistID:;
- (id)musicianTrackerParams;
- (id)playlistActivityName;
- (void)setCreatedPlaylists:;
- (void).cxx_destruct;
@end
