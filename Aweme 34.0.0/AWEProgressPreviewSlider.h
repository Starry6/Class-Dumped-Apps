@interface AWEProgressPreviewSlider : UIView
@property (nonatomic) UIView effectView;
@property (nonatomic) UIView playedView;
@property (nonatomic) double lastPlayTime;
- (double)lastPlayTime;
- (void)setLastPlayTime:;
- (id)playedView;
- (void)setPlayedView:;
- (void)updatePlayTime:totalTime:animated:;
- (id)effectView;
- (id)initWithFrame:;
- (void)setEffectView:;
- (void).cxx_destruct;
- (void)setupUI;
@end
