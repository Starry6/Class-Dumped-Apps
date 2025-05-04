@interface AWENearbyHalfScreenLeftCloseViewInjector : NSObject
@property (nonatomic) UIViewController<AWENearbyHalfScreenContainerProtocol> targetVC;
@property (nonatomic) UIView injectedView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)targetVC;
- (void)setTargetVC:;
- (id)initWithTargetVC:;
- (void)willBecomeHalfScreen:targetVC:;
- (void)willBecomeFullScreen:targetVC:;
- (void)didBecomeFullScreen:targetVC:;
- (void)didAddContentView:targetVC:;
- (id)injectedView;
- (void)closeClicked:;
- (void)setInjectedView:;
- (void).cxx_destruct;
@end
