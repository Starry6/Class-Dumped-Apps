@interface BDARVNovelVideoCardView : BDARVCardView
@property (nonatomic) CAGradientLayer backgroundLayer;
- (id)titleFrameSize:;
- (void)actionBtnClick:forEvent:;
- (id)btnNormalColor;
- (id)initWithFrame:source:;
- (void)layoutWithFrame:;
- (void)layoutWithWidth:;
- (void)resizeLayout;
- (void)sendShowEvent;
- (void)sendShowOverEvent:;
- (void)setBtnNormalColor:;
- (void)setupSubview;
- (void)tapAction:forEvent:;
- (id)timeFormatted:;
- (void)titleTapAction:forEvent:;
- (BOOL)hasVideo;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (id)backgroundLayer;
- (void)setBackgroundLayer:;
- (void)updateUI:;
@end
