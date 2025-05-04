@interface AWEInvalidViewChecker : NSObject
+ (id)viewWithRecursiveSubviews:depth:clipsViewArray:superViewArray:;
+ (BOOL)checkIfViewInWindow:;
+ (BOOL)checkIfViewClipped:withClipsViewArray:;
+ (BOOL)checkIfSuperViewCovered:withSuperViewArray:;
+ (void)printView:depth:info:;
+ (id)ivarNameForView:;
+ (id)ivarNameForView:withSuperView:;
+ (id)ivarNameFormSuperView:subView:;
+ (id)viewControllerFromView:;
+ (void)checkInvalidViewInKeyWindow;
@end
