@interface JHPP : NSObject
+ (id)currentViewController;
+ (void)pushVC:from:;
+ (void)pushVC:from:animated:;
+ (void)pushVC:paramter:from:;
+ (void)pushVC:paramter:from:animated:;
+ (void)presentVC:from:;
+ (void)presentVC:from:animated:;
+ (void)presentVC:from:navigation:;
+ (void)presentVC:from:navigation:animated:;
+ (void)presentVC:paramter:from:;
+ (void)presentVC:paramter:from:animated:;
+ (void)presentVC:paramter:from:navigation:;
+ (void)presentVC:paramter:from:navigation:animated:;
+ (id)fetchViewController:;
+ (id)fetchViewControllerFromView:;
+ (id)fetchViewControllerFromRootViewController;
@end
