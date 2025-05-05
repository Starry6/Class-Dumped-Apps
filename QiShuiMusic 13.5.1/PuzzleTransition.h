@interface PuzzleTransition : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_addChildViewController:fromVC:targetView:animated:completion:;
- (void)makeTransitionForVC:fromVC:animateOptions:completion:;
- (void)p_presentViewController:fromVC:animated:context:completion:;
- (void)p_pushViewController:fromVC:animated:context:completion:;
- (void)p_pushViewController:fromVC:animated:context:removePageTag:completion:;
@end
