@interface AWEPOISkeletonView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) AWEPOISkeletonViewModel vm;
- (void)setupWithModel:;
- (id)vm;
- (void)setVm:;
- (void)showSkeletonOnView:;
- (void)hideSkeletonView;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)updateWithFrame:;
+ (id)skeletonViewWithRawData:delegate:trackParams:;
@end
