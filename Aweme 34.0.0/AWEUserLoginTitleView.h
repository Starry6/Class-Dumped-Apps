@interface AWEUserLoginTitleView : UIView
@property (nonatomic) AWEUserLoginTitleViewModel model;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UILabel guideTitleLabel;
- (void)setGuideTitleLabel:;
- (id)guideTitleLabel;
- (void)setupTitleLabel:font:;
- (void)updateLabelFontColor;
- (void)setupSubtitleLabel:font:;
- (void)setupGuideTitleLabel:font:;
- (void)layoutOneLabel;
- (void)layoutTwoLabel;
- (void)layoutThreeLabel;
- (void)setModel:;
- (id)initWithModel:;
- (void)setSubtitleLabel:;
- (id)model;
- (void)setTitleLabel:;
- (id)initWithText:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)subtitleLabel;
- (void)setupUI;
- (void)setupLabel;
@end
