@interface IESECLiveCouponTagButton : IESECButton
@property (nonatomic) IESECGoodsPaddingLabel tagLabel;
@property (nonatomic) CAShapeLayer dashline;
@property (nonatomic) Q style;
@property (nonatomic) UIColor themeColor;
@property (nonatomic) NSString tagHeader;
@property (nonatomic) NSString tagContent;
- (id)tagFont;
- (id)dashline;
- (void)setDashline:;
- (void)setTagContent:;
- (void)setTagHeader:;
- (void)setTagLabel:;
- (id)tagEdgeInsets;
- (double)tagFullHeight;
- (id)tagHeader;
- (id)tagLabel;
- (double)tagTextPadding;
- (id)themeColor;
- (void)updateContent;
- (void)layoutSubviews;
- (void)setStyle:;
- (id)initWithFrame:;
- (void)setThemeColor:;
- (void).cxx_destruct;
- (unsigned long long)style;
- (id)tagContent;
- (id)tagBackgroundColor;
@end
