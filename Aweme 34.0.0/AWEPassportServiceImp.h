@interface AWEPassportServiceImp : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)login:;
- (void)login:withTrackerInformation:;
- (BOOL)isVCDEnable;
- (BOOL)enableAccountSDK;
- (void)convertOpenIDToUIDWithinCurrentUserList:clientKey:completion:;
- (void)trackAccountDrop:scene:error:extraParams:;
- (id)currentUser;
- (BOOL)isLogin;
@end
