@interface CSJWebViewBottomBar : UIView
@property (nonatomic) UIButton goBackButton;
@property (nonatomic) UIButton goForwardButton;
@property (nonatomic) UIButton reloadButton;
@property (nonatomic) UIButton safariButton;
@property (nonatomic) UIView line;
- (id)goForwardButton;
- (id)goBackButton;
- (id)reloadButton;
- (id)safariButton;
- (void)setGoBackButton:;
- (void)setGoForwardButton:;
- (void)setReloadButton:;
- (void)setSafariButton:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)line;
- (void)setLine:;
- (void)_setupUI;
@end
