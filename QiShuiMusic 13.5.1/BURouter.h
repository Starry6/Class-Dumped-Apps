@interface BURouter : NSObject
+ (void)pbu_presentFromViewController:toViewController:completion:;
+ (void)presentFromViewController:toViewController:;
+ (void)presentFromViewController:toViewController:style:completion:;
+ (void)presentFromViewControllerOverFullScreen:toViewController:;
@end
