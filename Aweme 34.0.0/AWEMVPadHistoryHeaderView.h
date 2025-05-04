@interface AWEMVPadHistoryHeaderView : UICollectionReusableView
@property (nonatomic) UIButton moreButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) <AWEMVPadHistoryHeaderDelegate> delegate;
- (void)moreButtonClicked:;
- (id)delegate;
- (id)initWithFrame:;
- (id)moreButton;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setMoreButton:;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
@end
