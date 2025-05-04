@interface AWEPizzaSwiftImpl.PizzaDataManager : NSObject
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)handleConnectionChanged:;
- (void)onAccountPrivacyPolicyAgreeNotification:;
- (id)init;
- (void)dealloc;
- (void)appWillEnterForeground:;
- (void).cxx_destruct;
@end
