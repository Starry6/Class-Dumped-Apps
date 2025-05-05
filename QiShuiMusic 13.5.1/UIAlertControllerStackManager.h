@interface UIAlertControllerStackManager : NSObject
@property (nonatomic) UIScene _scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_scene;
- (id)initWithScene:;
- (void)_alertControllerDidAppear:;
- (void)_setScene:;
- (BOOL)_alertControllerShouldBeTrackedInStack:;
- (void)_alertControllerWillDisappear:;
- (void)_showHiddenStackedAlertControllers;
- (void)_didHideAlertController:;
- (id)_topAlertControllerInStack;
- (void)_willHideAlertController:;
- (void)_hideStackedAlertControllers;
- (void)_addAlertControllerToStack:;
- (void)_removeAlertControllerFromStack:;
- (void)_alertControllerWillAppear:;
- (void).cxx_destruct;
- (void)_willShowAlertController:;
- (void)_alertControllerDidDisappear:;
- (long long)_alertControllerStackCount;
@end
