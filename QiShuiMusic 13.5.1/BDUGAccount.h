@interface BDUGAccount : NSObject
@property (nonatomic) BOOL isLoginInOtherApps;
- (void)accountDidLoginNotification;
- (void)accountDidLogoutNotification;
- (void)accountSessionExpiredNotification;
- (void)bindPhoneNotification;
- (BOOL)isLoginInOtherApps;
- (void)rebindPhoneNotification;
- (void)setIsLoginInOtherApps:;
+ (id)sharedInstance;
@end
