@interface TTAccountDeviceLoginInfo : NSObject
@property (nonatomic) TTADeviceLoginUserInfo loginOnlyInfo;
- (id)currentloginOnlyInfo;
- (id)loginOnlyInfo;
- (void)setCurrentloginOnlyInfoWithType:accountInfo:;
- (void)setLoginOnlyInfo:;
- (void)updateLastLoginInfo:accountInfo:isLoginContinue:userEntity:;
- (void).cxx_destruct;
+ (void)updateLastLoginInfoWithContinue;
+ (id)canDeviceOnekeyLoginWithCompleted:;
+ (id)canDeviceOnekeyLoginWithModel:completed:;
+ (id)fetchDeviceLoginInfoWithType:timeRange:completetion:;
+ (id)fetchHistoryLoginInfoWithDuplicateUid:;
+ (void)insertLoginInfo:;
+ (id)latestLocalDeviceLoginInfo;
+ (void)matchLoginInfoWithType:infoDic:results:;
+ (BOOL)matchWithUserInfo:;
+ (id)trustedDeviceOnekeyLoginContinueWithTicket:completed:;
+ (id)trustedDeviceOnekeyLoginWithCompleted:;
+ (id)trustedDeviceOnekeyLoginWithModel:completed:;
+ (void)updateLastLoginType:accountInfo:;
+ (void)updateLastLoginType:accountInfo:user:;
+ (void)updateLatestedLocalDeviceLoginInfo:;
+ (id)sharedInstance;
@end
