@interface IESECWinRecommendTitleCell : UICollectionViewCell
@property (nonatomic) UIImageView leftBar;
@property (nonatomic) UIImageView rightBar;
@property (nonatomic) UILabel titleLabel;
- (id)leftBar;
- (void)bindWithModel:;
- (id)rightBar;
- (void)setLeftBar:;
- (void)setRightBar:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
