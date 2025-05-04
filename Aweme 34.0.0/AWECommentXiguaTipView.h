@interface AWECommentXiguaTipView : UIView
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) UIImageView xiguaIcon;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIImageView arrowIcon;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) @? openXiguaBlock;
- (void)setIsBGColorWhite:;
- (BOOL)isBGColorWhite;
- (id)initWithFrame:isBGWhiteColor:;
- (void)__setupUI;
- (id)xiguaIcon;
- (id)arrowIcon;
- (void)openXigua;
- (id)openXiguaBlock;
- (void)setIsBGWhiteColor:;
- (void)setOpenXiguaBlock:;
- (void)setXiguaIcon:;
- (void)setArrowIcon:;
- (void)refreshUI;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setTipLabel:;
- (id)tipLabel;
@end
