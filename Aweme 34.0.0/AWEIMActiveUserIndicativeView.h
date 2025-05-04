@interface AWEIMActiveUserIndicativeView : UIView
@property (nonatomic) UIView greenDot;
@property (nonatomic) double outerW;
@property (nonatomic) double innerW;
@property (nonatomic) BOOL isGreenDotColorChanged;
@property (nonatomic) BOOL isFromSharePanel;
- (void)updateUIStyle;
- (void)setGreenDotColor:;
- (id)initWithFrame:innerW:outerW:;
- (double)outerW;
- (double)innerW;
- (void)setOuterW:;
- (void)setInnerW:;
- (BOOL)isFromSharePanel;
- (void)setIsFromSharePanel:;
- (void)resetGreenDotFrame:;
- (id)greenDot;
- (void)setGreenDot:;
- (void)resetGreenDotColor;
- (void)setIsGreenDotColorChanged:;
- (void)setGreenDotBackGroundColor:;
- (BOOL)isGreenDotColorChanged;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
+ (id)greenDotDefaultColor;
@end
