@interface AWEACCEditToPublishRouterCoordinatorImpl : NSObject
@property (nonatomic) ACCEditViewControllerInputData sourceViewControllerInputData;
@property (nonatomic) ACCPublishViewControllerInputData targetViewControllerInputData;
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
- (id)sourceViewController;
- (void)setSourceViewController:;
- (void).cxx_destruct;
@end
