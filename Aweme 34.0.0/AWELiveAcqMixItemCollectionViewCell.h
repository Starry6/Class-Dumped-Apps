@interface AWELiveAcqMixItemCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView backView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView arrowImageView;
- (void)configWithMixVideoModel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (id)backView;
- (void).cxx_destruct;
- (void)setBackView:;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
