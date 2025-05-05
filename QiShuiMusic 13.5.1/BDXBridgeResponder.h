@interface BDXBridgeResponder : NSObject
+ (void)closeContainer:animated:completionHandler:;
+ (void)closeContainerIDs:animated:completionHandler:;
+ (BOOL)isInHirForViewController:;
+ (void)reloadContainer:;
+ (id)viewControllerForResponder:;
@end
