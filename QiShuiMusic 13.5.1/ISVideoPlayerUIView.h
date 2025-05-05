@interface ISVideoPlayerUIView : UIView
@property (nonatomic) ISWrappedAVPlayer videoPlayer;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} contentsRect;
@property (nonatomic) @? videoLayerReadyForDisplayChangeHandler;
@property (nonatomic) BOOL videoLayerReadyForDisplay;
- (id)videoPlayer;
- (id)contentsRect;
- (id)playerLayer;
- (void)setVideoPlayer:;
- (id)videoLayerReadyForDisplayChangeHandler;
- (BOOL)videoLayerReadyForDisplay;
- (void)_ISVideoPlayerUIView_commonInitialization;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)_updateVideoGravity;
- (void)setContentsRect:;
- (void).cxx_destruct;
- (void)setVideoLayerReadyForDisplayChangeHandler:;
- (void)setContentMode:;
@end
