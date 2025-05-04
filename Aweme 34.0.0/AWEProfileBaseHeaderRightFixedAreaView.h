@interface AWEProfileBaseHeaderRightFixedAreaView : UIView
@property (nonatomic) UIView bgView;
@property (nonatomic) UIView leftGradientView;
@property (nonatomic) NSArray displayingViewArray;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) double viewWidth;
- (void)setViewWidth:;
- (id)leftGradientView;
- (void)setLeftGradientView:;
- (void)reloadRightFixedAreaWithViewsArray:;
- (id)displayingViewArray;
- (void)clearAllElements;
- (void)setDisplayingViewArray:;
- (double)heightWithCGFloatNormalValue:middleValue:largeValue:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)gradientLayer;
- (id)bgView;
- (void)setBgView:;
- (void)setGradientLayer:;
- (void)setupUI;
- (double)viewWidth;
@end
