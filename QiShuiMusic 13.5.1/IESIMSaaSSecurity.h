@interface IESIMSaaSSecurity : NSObject
- (BOOL)checkAndShowBindPhoneAlertOnIMWithConfirmBlock:cancelBlock:;
+ (id)sharedInstance;
@end
