@interface IESLiveRoomNavigationMananger : NSObject
@property (nonatomic) BOOL enableInteractiveGes;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) <UINavigationControllerDelegate> lastNaviDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)shouldReleaseNavigationDelegate;
- (void)setNavigationInteractiveEnable:;
- (id)currentVC;
- (void)didSetAttachingDIContext;
- (BOOL)enableInteractiveGes;
- (id)lastNaviDelegate;
- (void)setEnableInteractiveGes:;
- (void)setLastNaviDelegate:;
- (void)setTrackContext:;
- (void)shouldSetNavigationDelegate;
- (id)trackContext;
- (BOOL)respondsToSelector:;
- (id)init;
- (void)navigationController:didShowViewController:animated:;
- (void)navigationController:willShowViewController:animated:;
- (void).cxx_destruct;
- (id)navigationController:animationControllerForOperation:fromViewController:toViewController:;
- (id)navigationController:interactionControllerForAnimationController:;
@end
