@interface AWEAdSearchUserStrongButton : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) AWECommerceInsetsLabel conversionLabel;
- (void)updateWithAweme:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)configureUI;
- (void)setupLayouts;
- (id)conversionLabel;
- (void)setConversionLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
@end
