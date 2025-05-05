@interface IESLiveSaaSHYRouterIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)p_forceUpdateToPortraitIfNeeded;
- (void)p_addChildViewController:fromVC:targetView:animated:completion:;
- (void)makeTransitionForVC:fromVC:animateOptions:completion:;
- (id)p_containerController:;
- (void)p_presentViewController:fromVC:animated:completion:;
- (void)p_pushViewController:fromVC:animated:completion:;
- (void)p_pushViewController:fromVC:animated:removePageTag:completion:;
@end
