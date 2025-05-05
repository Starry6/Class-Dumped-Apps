@interface IESECStoreExtensionAreaDragDownView : UIView
@property (nonatomic) UIView leftLine;
@property (nonatomic) UILabel dragDownTextLabel;
@property (nonatomic) LOTAnimationView dragDownIconLottieView;
@property (nonatomic) UIView rightLine;
- (id)dragDownIconLottieView;
- (id)dragDownTextLabel;
- (id)leftLine;
- (id)p_dragDownIconLottieFilePath;
- (id)rightLine;
- (void)setDragDownIconLottieView:;
- (void)setDragDownTextLabel:;
- (void)setLeftLine:;
- (void)setRightLine:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateText:;
- (void)setupViews;
@end
