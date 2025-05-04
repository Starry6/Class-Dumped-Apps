@interface AWEFollowListRecommendCardHeader : UICollectionReusableView
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <AWEFollowListRecommendCardHeaderDelegate> delegate;
- (void)closeButtonClicked:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
