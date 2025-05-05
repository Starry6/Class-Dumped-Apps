@interface BDARVNovelNormalCardView : BDARVCardView
@property (nonatomic) CAGradientLayer backgroundLayer;
- (id)titleFrameSize:;
- (void)actionBtnClick:forEvent:;
- (id)initWithFrame:source:;
- (void)layoutWithFrame:;
- (void)layoutWithWidth:;
- (void)resizeLayout;
- (void)sendShowEvent;
- (void)sendShowOverEvent:;
- (void)setupSubview;
- (void)tapAction:forEvent:;
- (void)titleTapAction:forEvent:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (id)backgroundLayer;
- (void)setBackgroundLayer:;
- (void)updateUI:;
@end
