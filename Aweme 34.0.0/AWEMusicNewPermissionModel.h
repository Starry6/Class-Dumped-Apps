@interface AWEMusicNewPermissionModel : AWEBaseDataModel
@property (nonatomic) BOOL shareEnable;
@property (nonatomic) BOOL storyShare;
@property (nonatomic) BOOL dspPlay;
@property (nonatomic) BOOL playlistAvailable;
@property (nonatomic) BOOL collectEnable;
@property (nonatomic) BOOL downloadEnable;
- (void)setShareEnable:;
- (void)setStoryShare:;
- (void)setDspPlay:;
- (void)setPlaylistAvailable:;
- (void)setCollectEnable:;
- (void)setDownloadEnable:;
- (BOOL)shareEnable;
- (BOOL)storyShare;
- (BOOL)collectEnable;
- (BOOL)downloadEnable;
- (BOOL)playlistAvailable;
- (BOOL)dspPlay;
+ (id)JSONKeyPathsByPropertyKey;
@end
