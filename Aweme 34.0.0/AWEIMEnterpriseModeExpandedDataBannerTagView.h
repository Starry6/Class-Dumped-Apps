@interface AWEIMEnterpriseModeExpandedDataBannerTagView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEIMEnterpriseModeDataBannerTagConfig tagConfig;
- (id)initWithTagConfig:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setTagConfig:;
- (id)tagConfig;
- (void)setupLayout;
@end
