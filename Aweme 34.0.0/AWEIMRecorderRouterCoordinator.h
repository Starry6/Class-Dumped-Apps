@interface AWEIMRecorderRouterCoordinator : NSObject
@property (nonatomic) ACCRecordViewControllerInputData sourceViewControllerInputData;
@property (nonatomic) ACCEditViewControllerInputData targetViewControllerInputData;
@property (nonatomic) UIViewController sourceViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSourceViewController:targetViewControllerInputData:;
- (id)handleTargetViewControllerInputData;
- (void)routeWithAnimated:completion:;
- (id)sourceViewControllerInputData;
- (void)setSourceViewControllerInputData:;
- (id)targetViewControllerInputData;
- (void)setTargetViewControllerInputData:;
- (id)getEditVCWithInputData:;
- (id)getTargetViewControllerInputDataWithInputData:;
- (void)p_removeMusicIfNeeded:;
- (id)sourceViewController;
- (void)setSourceViewController:;
- (void).cxx_destruct;
@end
