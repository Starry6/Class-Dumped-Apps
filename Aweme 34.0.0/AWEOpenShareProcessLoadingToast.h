@interface AWEOpenShareProcessLoadingToast : NSObject
+ (void)tryInit;
+ (void)showLoadingViewWithProcess:withID:;
+ (void)hideLoadingViewAnimated:withID:;
+ (void)updateLoadingProcess:withID:;
@end
