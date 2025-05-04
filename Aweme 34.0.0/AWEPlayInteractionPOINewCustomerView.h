@interface AWEPlayInteractionPOINewCustomerView : UIView
@property (nonatomic) UIView centerView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
- (void)p_setupUI;
- (void)configWithTitle:iconURLs:;
- (id)centerView;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setCenterView:;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setIconImageView:;
@end
