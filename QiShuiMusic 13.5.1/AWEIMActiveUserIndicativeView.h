@interface AWEIMActiveUserIndicativeView : UIView
@property (nonatomic) UIView greenDot;
@property (nonatomic) BOOL isWhiteBG;
@property (nonatomic) double outerW;
@property (nonatomic) double innerW;
- (id)greenDot;
- (void)iesim_themeReload;
- (id)initWithFrame:isWhiteBG:innerW:outerW:;
- (double)innerW;
- (BOOL)isWhiteBG;
- (double)outerW;
- (void)setGreenDot:;
- (void)setInnerW:;
- (void)setIsWhiteBG:;
- (void)setOuterW:;
- (void)updateUIStyle;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupUI;
@end
