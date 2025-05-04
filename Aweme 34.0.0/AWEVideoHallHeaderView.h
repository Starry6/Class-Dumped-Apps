@interface AWEVideoHallHeaderView : UICollectionReusableView
@property (nonatomic) UIView imageViewContainer;
@property (nonatomic) @? didClickAction;
@property (nonatomic) UIImageView rightImageView;
@property (nonatomic) UILabel titleLabel;
- (id)didClickAction;
- (id)imageViewContainer;
- (void)setImageViewContainer:;
- (void)setDidClickAction:;
- (void)didClickRightImageViewAction;
- (void)setRightImageViewClickAction:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)configureSubviews;
- (void)configureConstraints;
- (id)rightImageView;
- (void)setRightImageView:;
@end
