@interface AWEACCRecordToEditRouterCoordinatorImpl : NSObject
@property (nonatomic) ACCEditMVModel mvModel;
@property (nonatomic) ACCRecordViewControllerInputData sourceViewControllerInputData;
@property (nonatomic) ACCEditViewControllerInputData targetViewControllerInputData;
@property (nonatomic) UIViewController sourceViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mvModel;
- (void)setMvModel:;
- (id)initWithSourceViewController:targetViewControllerInputData:;
- (id)handleTargetViewControllerInputData;
- (void)routeWithAnimated:completion:;
- (id)sourceViewControllerInputData;
- (void)setSourceViewControllerInputData:;
- (id)targetViewControllerInputData;
- (void)setTargetViewControllerInputData:;
- (void)routeToNextWithAnimated:completion:;
- (void)produceClearDataWith:sourceModel:;
- (id)sourceViewController;
- (void)setSourceViewController:;
- (void).cxx_destruct;
@end
