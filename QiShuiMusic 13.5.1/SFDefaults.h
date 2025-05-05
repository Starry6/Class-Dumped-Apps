@interface SFDefaults : NSObject
+ (unsigned long long)siriNotificationsPrompted;
+ (void)setSiriNotificationsPrompted:;
+ (BOOL)hasSeenAnnounceNotifications;
+ (void)setHasSeenAnnounceNotifications:;
@end
