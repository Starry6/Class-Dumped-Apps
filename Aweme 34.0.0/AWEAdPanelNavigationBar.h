@interface AWEAdPanelNavigationBar : UIView
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIButton backButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton reportButton;
@property (nonatomic) UIButton moreButton;
@property (nonatomic) UIView bottomSeparator;
- (id)reportButton;
- (void)setReportButton:;
- (id)backButton;
- (id)intrinsicContentSize;
- (void)setBackButton:;
- (id)initWithFrame:;
- (id)moreButton;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setMoreButton:;
- (id)bottomSeparator;
- (id)titleLabel;
- (void)setCloseButton:;
- (id)closeButton;
- (void)setBottomSeparator:;
@end
