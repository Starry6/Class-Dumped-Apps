@interface EDUserNotificationFilter : NSObject
@property (nonatomic) <EMBlockedSenderReader> blockedSenderReader;
@property (nonatomic) <EMVIPReader> vipReader;
- (void).cxx_destruct;
- (id)vipReader;
- (id)initWithBlockedSenderReader:vipReader:;
- (id)messagesNeedingNotification:;
- (BOOL)_messageNeedsNotification:;
- (id)blockedSenderReader;
@end
