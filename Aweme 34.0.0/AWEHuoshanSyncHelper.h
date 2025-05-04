@interface AWEHuoshanSyncHelper : NSObject
@property (nonatomic) <AWEAccountManagerProtocol> accountManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)turnOnSyncWithCompletion:;
- (void)requestTurnOffSyncWithCompletion:;
- (id)thirdPartyUsernameForBindType:;
- (id)displayNameForBindType:;
- (id)loginInfo;
- (id)hideMiddleDigitsOfPhoneNumber:;
- (id)accountManager;
- (void).cxx_destruct;
- (void)setAccountManager:;
+ (id)sharedInstance;
@end
