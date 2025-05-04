@interface AWERLViewPoolManager : NSObject
@property (nonatomic) AWERLViewReusePoolMap map;
@property (nonatomic) UIView view;
@property (nonatomic) <AWERLVirtualNodeAnimationProtocol> animator;
- (id)initWithContainerView:animator:;
- (void)refreshSelfHostView:;
- (id)viewForVirtualNodeClass:props:;
- (id)animator;
- (void)setAnimator:;
- (id)view;
- (id)map;
- (void)setView:;
- (void)setMap:;
- (void).cxx_destruct;
- (void)resetIfNeeded;
@end
