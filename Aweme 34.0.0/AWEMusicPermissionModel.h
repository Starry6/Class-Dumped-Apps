@interface AWEMusicPermissionModel : AWEBaseApiModel
@property (nonatomic) BOOL shareEnable;
@property (nonatomic) BOOL storyShare;
@property (nonatomic) BOOL collectEnable;
@property (nonatomic) BOOL downloadEnable;
@property (nonatomic) BOOL playlistAvailable;
- (void)setShareEnable:;
- (void)setStoryShare:;
- (void)setPlaylistAvailable:;
- (void)setCollectEnable:;
- (void)setDownloadEnable:;
- (BOOL)shareEnable;
- (BOOL)storyShare;
- (BOOL)collectEnable;
- (BOOL)downloadEnable;
- (BOOL)playlistAvailable;
+ (id)JSONKeyPathsByPropertyKey;
@end
