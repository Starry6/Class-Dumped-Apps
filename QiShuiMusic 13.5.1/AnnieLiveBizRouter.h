@interface AnnieLiveBizRouter : NSObject
@property (nonatomic) double animationDuration;
@property (nonatomic) NSDictionary routerParams;
- (void)_addChildViewController:fromVC:targetView:animated:completion:;
- (void)_presentViewController:fromVC:animated:context:completion:;
- (unsigned long long)_transitionOptionsWithSchema:;
- (id)getQueryItemsWithSchema:;
- (void)makeTransitionForSchema:controller:fromVC:context:completion:error:;
- (void)p_postWillShowNotificaion:container:;
- (void)p_pushViewController:fromVC:animated:context:completion:;
- (void)p_pushViewController:fromVC:animated:context:removePageTag:completion:;
- (id)routerParams;
- (void)setRouterParams:;
- (void)showContainer:fromVC:animated:completion:;
- (id)init;
- (double)animationDuration;
- (void)setAnimationDuration:;
- (void).cxx_destruct;
@end
