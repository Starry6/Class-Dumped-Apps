@interface IMExtensionNotificationManager : NSObject
@property (nonatomic) NSMutableArray notificationsContext;
- (id)notificationsContext;
- (id)init;
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:;
- (void)setNotificationsContext:;
- (id)notificationCategories;
- (void)populateUserInfoForNotificationContent:messageBalloonBundleID:payloadData:;
- (void).cxx_destruct;
- (BOOL)shouldRetractedMessageForBalloonBundleID:;
+ (id)sharedInstance;
@end
