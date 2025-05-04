@interface AWEThirdPlatformLoginUtils : NSObject
+ (id)getUserInfo:;
+ (id)modelForPlatform:isBeforeLogin:;
+ (BOOL)shouldContinueLoginWithThirdPlatfrom:buttonType:;
+ (void)trackAlertShow:type:;
+ (void)handleSSOLoginResult:isOAuthSuccess:;
+ (id)currenDeviceLoginHistoryUser:;
+ (BOOL)hasExceedErrorLimit:;
+ (id)modelForForPlatform:type:;
+ (id)modelForPlatform:;
+ (void)trackClickForLoginPlatform:type:;
+ (void)trackRightClickForLoginPlatform:type:;
+ (void)trackNewAlertClickForLoginPlatform:type:;
+ (void)jumpToURL:;
+ (void)jumpToRouter:;
+ (id)platformFailureLog;
+ (void)showClassisAlert:;
+ (id)getUserAvatar:;
+ (void)trackAlertShow:;
+ (id)secUIDForPlatform:;
+ (BOOL)showAlertIfNeeded:error:;
+ (void)setPlatformFailureLog:;
+ (void)showAlert:;
@end
