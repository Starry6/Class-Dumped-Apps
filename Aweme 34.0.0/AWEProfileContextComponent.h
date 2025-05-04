@interface AWEProfileContextComponent : AWEProfileBaseComponent
@property (nonatomic) NSMutableDictionary noNeedParsedParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)willStartSwitchAccountWithUser:;
- (BOOL)onConfigWithRouterParamDict:;
- (id)noNeedParsedParamsToServer;
- (void)setNoNeedParsedParams:;
- (id)noNeedParsedParams;
- (void)clearContextWhileSwitchingAccount;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)onInit;
@end
