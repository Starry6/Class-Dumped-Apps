@interface AWERecordBeautyNavigationController : UINavigationController
@property (nonatomic) AWERecordBeautyVCContext context;
@property (nonatomic) @? beautyNavigationControllerDidTapBackAction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (id)initWithRootViewController:context:;
- (id)beautyNavigationControllerDidTapBackAction;
- (void)setBeautyNavigationControllerDidTapBackAction:;
- (id)navigationController:animationControllerForOperation:fromViewController:toViewController:;
- (void)pushViewController:animated:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)popViewControllerAnimated:;
- (id)context;
@end
