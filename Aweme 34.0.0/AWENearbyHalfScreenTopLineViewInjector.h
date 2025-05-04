@interface AWENearbyHalfScreenTopLineViewInjector : NSObject
@property (nonatomic) UIViewController<AWENearbyHalfScreenContainerProtocol> targetVC;
@property (nonatomic) UIView injectedView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)targetVC;
- (void)setTargetVC:;
- (id)initWithTargetVC:;
- (void)willBecomeFullScreen:targetVC:;
- (void)didBecomeFullScreen:targetVC:;
- (void)didAddContentView:targetVC:;
- (id)injectedView;
- (void)setInjectedView:;
- (void).cxx_destruct;
@end
