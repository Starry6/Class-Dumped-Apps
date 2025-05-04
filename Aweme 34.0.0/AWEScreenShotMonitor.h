@interface AWEScreenShotMonitor : NSObject
- (void)didTakeScreenShotNotification:;
- (void)logWindowAndStatusbarInfoWithWindow:;
- (id)init;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;
+ (void)setup;
@end
