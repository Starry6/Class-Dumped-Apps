@interface PLRebuildUserNotification : NSObject
@property (nonatomic) NSString message;
- (id)initWithMessage:;
- (id)message;
- (void).cxx_destruct;
- (long long)showAlertAndWaitForResponse;
- (BOOL)_shouldShowUserNotification;
- (void)_snoozeForHours:;
@end
