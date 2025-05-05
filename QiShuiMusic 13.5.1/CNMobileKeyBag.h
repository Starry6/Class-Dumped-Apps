@interface CNMobileKeyBag : NSObject
+ (BOOL)isDeviceUnlockedSinceBoot;
+ (id)firstUnlockNotificationID;
+ (BOOL)isDevicePasscodeProtected;
@end
