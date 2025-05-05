@interface BDARVMPVideoCardView : BDARVCardView
@property (nonatomic) UIImageView playIcon;
@property (nonatomic) double titleScaleRate;
- (id)initWithSource:scaleRate:;
- (id)playIcon;
- (void)resizeLayout;
- (void)sendShowEvent;
- (void)sendShowOverEvent:;
- (void)setPlayIcon:;
- (void)setTitleScaleRate:;
- (void)setupSubview;
- (void)tapAction:forEvent:;
- (double)titleScaleRate;
- (BOOL)hasVideo;
- (void).cxx_destruct;
- (void)updateUI:;
@end
