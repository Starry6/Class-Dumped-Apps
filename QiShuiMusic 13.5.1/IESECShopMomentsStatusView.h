@interface IESECShopMomentsStatusView : UIView
@property (nonatomic) UIImageView skeletonView;
@property (nonatomic) UIImageView statusImageView;
- (void)setSkeletonView:;
- (void)showEmptyView;
- (void)showSkeletonView;
- (id)skeletonView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupViews;
- (id)statusImageView;
- (void)showErrorView;
- (void)setStatusImageView:;
@end
