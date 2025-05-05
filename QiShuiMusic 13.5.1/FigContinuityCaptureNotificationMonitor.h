@interface FigContinuityCaptureNotificationMonitor : NSObject
- (id)init;
- (void)dealloc;
- (void)_handleContinuityCaptureNotification:;
+ (id)sharedInstance;
@end
