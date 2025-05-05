@interface EAPostAlert : NSObject
+ (void)EANotificationPostAccessoryNotification:forMsg:forDefaultButton:withAlternateButton:forNotification:withCallback:andTimeout:;
+ (void)EATearDownAccessoryNotification:;
+ (id)CopyLocalizedString:;
@end
