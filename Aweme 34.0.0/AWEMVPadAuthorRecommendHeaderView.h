@interface AWEMVPadAuthorRecommendHeaderView : UICollectionReusableView
@property (nonatomic) UIButton changeButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) <AWEMVPadAuthorRecommendHeaderDelegate> delegate;
- (void)orientationChange:;
- (void)changeButtonClicked:;
- (id)delegate;
- (id)initWithFrame:;
- (void)updateConstraints;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
- (id)changeButton;
- (void)setChangeButton:;
@end
