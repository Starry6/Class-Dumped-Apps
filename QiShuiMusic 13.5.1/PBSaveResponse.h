@interface PBSaveResponse : NSObject
@property (nonatomic) Q notificationState;
@property (nonatomic) q changeCount;
@property (nonatomic) UISPasteSharingToken sharingToken;
- (long long)changeCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)notificationState;
- (id)sharingToken;
- (id)initWithNotificationState:changeCount:sharingToken:;
+ (BOOL)supportsSecureCoding;
@end
