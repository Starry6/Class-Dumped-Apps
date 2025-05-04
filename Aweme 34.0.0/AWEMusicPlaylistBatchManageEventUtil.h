@interface AWEMusicPlaylistBatchManageEventUtil : NSObject
@property (nonatomic) NSString playlistId;
- (id)playlistId;
- (void)setPlaylistId:;
- (void)trackLoadAllSongsWithPageCount:songCount:succuss:loadDuration:;
- (id)initWithPlaylistId:;
- (void)trackLoadAllSongsWithPageCount:songCount:;
- (void)trackDeleteSongs:chunkCount:failedChunk:duration:isSelectAll:;
- (void)trackAddSongs:isFailure:isSelectAll:;
- (void).cxx_destruct;
@end
