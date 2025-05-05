@interface IESLiveVideoPlayerManager : NSObject
@property (nonatomic) NSHashTable videoPlayerTable;
@property (nonatomic) BOOL enableEyesProtect;
@property (nonatomic) double eyesProtectFilterValue;
@property (nonatomic) @? eyesProtectLutImageBlock;
- (id)createVideoPlayer;
- (id)createVideoWithVideoId:;
- (BOOL)enableEyesProtect;
- (double)eyesProtectFilterValue;
- (id)eyesProtectLutImageBlock;
- (void)p_appendManagerPlayer:;
- (void)setEnableEyesProtect:;
- (void)setEyesProtectFilterValue:;
- (void)setEyesProtectLutImageBlock:;
- (void)setVideoPlayerTable:;
- (void)updateLivePlayersEyesProtectState:intensityValue:;
- (id)videoPlayerTable;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
