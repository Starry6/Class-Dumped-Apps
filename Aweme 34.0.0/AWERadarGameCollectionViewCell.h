@interface AWERadarGameCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView baseView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
- (void)configWithIcons:title:needRadius:;
- (double)topPadding;
- (void)setBaseView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)baseView;
- (void)setIconImageView:;
- (void)setupUI;
+ (id)identifier;
@end
