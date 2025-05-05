@interface IESECMallShopMomentStatusView : UIView
@property (nonatomic) IESECMallShopMomentContext context;
@property (nonatomic) IESECMallShopMomentErrorView errorView;
@property (nonatomic) IESECMallShopMomentSkeletonView skeletonView;
@property (nonatomic) @? retryBlock;
- (void)setSkeletonView:;
- (id)skeletonView;
- (void)dismiss;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
- (void)showError;
- (id)errorView;
- (void)setErrorView:;
- (id)retryBlock;
- (void)setRetryBlock:;
- (void)showLoading;
@end
