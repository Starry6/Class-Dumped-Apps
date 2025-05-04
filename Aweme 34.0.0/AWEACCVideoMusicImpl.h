@interface AWEACCVideoMusicImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchLocalURLForMusic:withProgress:completion:;
- (BOOL)downloadedMusic:;
- (void)fetchLocalURLForMusic:enableDownloadOpt:withProgress:completion:;
- (void)fetchLocalURLForMusic:lyricURL:extraTrack:withProgress:completion:;
- (void)fetchLocalURLForMusic:lyricURL:withProgress:completion:;
- (void)fetchLocalURLForMusic:lyricURL:enableDownloadOpt:withProgress:completion:;
- (void)requestMusicItemWithID:completion:;
- (void)requestMusicItemWithID:basicParams:completion:;
- (void)requestMusicItemWithID:additionalParams:completion:;
- (id)localURLForMusic:;
- (id)localLyricURLForMusic:;
- (id)fetchPlayerMusicCacheIfNeedWithMusic:;
- (void)downloadMusicModel:params:extraTrack:progress:playingHandler:completion:;
- (void)refreshMusicItem:completion:;
- (void)dislikeMusicWithMusicID:channelID:completion:;
- (void)requestCollectingMusicsWithCursor:count:channelID:completion:;
- (void)downloadMusicModel:playingHandler:completion:;
- (void)downloadMusicModel:extraTrack:playingHandler:completion:;
- (void)requestCollectingMusicWithID:collect:completion:;
@end
