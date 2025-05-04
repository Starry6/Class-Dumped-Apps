@interface AWERadarCreateGroupCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView baseView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
- (void)setBaseView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void)touchesEnded:withEvent:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (id)titleLabel;
- (id)baseView;
- (void)setIconImageView:;
- (void)setupUI;
+ (id)identifier;
@end
