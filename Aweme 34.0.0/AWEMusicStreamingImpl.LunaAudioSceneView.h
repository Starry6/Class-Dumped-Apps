@interface AWEMusicStreamingImpl.LunaAudioSceneView : UIView
@property (nonatomic) BOOL anchorShow;
- (BOOL)anchorShow;
- (void)clearShrtLyric;
- (void)lyricViewHidden:;
- (void)updateShortLyricView;
- (id)topSceneView;
- (void)updateSceneInfo:;
- (void)itemDidAppear;
- (id)initWithDelegate:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)updateProgress:;
- (void)updateDuration:;
@end
