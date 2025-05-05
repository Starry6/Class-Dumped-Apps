@interface BDUPCContainer : NSObject
+ (id)navVC;
+ (id)originWindow;
+ (void)setNavVC:;
+ (void)setOriginWindow:;
+ (void)setUpcVC:;
+ (void)setUpcWindow:;
+ (id)upcVC;
+ (id)upcWindow;
+ (void)dismiss;
+ (id)topView;
@end
