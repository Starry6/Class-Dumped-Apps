@interface InAppViewDebugger.InAppViewDebugger : NSObject
- (id)init;
+ (void)presentForView:configuration:completion:;
+ (void)presentForViewController:configuration:completion:;
+ (void)presentForWindow:configuration:completion:;
+ (void)presentWithSnapshot:rootViewController:configuration:completion:;
+ (void)present;
@end
