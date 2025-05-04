@interface AWEMateOnboardingNavigationBarTitleView : UIView
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) NSLayoutConstraint emptySubtitleHeightConstraint;
- (void)initView;
- (void)setEmptySubtitleHeightConstraint:;
- (id)emptySubtitleHeightConstraint;
- (id)initWithFrame:title:subtitle:;
- (void)updateViewWithTitle:subtitle:;
- (id)subtitle;
- (void)setSubtitleLabel:;
- (void)setSubtitle:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setTitle:;
- (id)subtitleLabel;
- (void)setupLayout;
@end
