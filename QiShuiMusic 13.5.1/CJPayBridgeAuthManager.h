@interface CJPayBridgeAuthManager : NSObject
@property (nonatomic) IESBridgeAuthManager authManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAuthManager:;
- (id)allowedDomainsForSDK;
- (id)authManager;
- (BOOL)authManager:isAuthorizedMethod:forURL:;
- (void)authManager:isAuthorizedMethod:success:forURL:stage:list:;
- (void)bridgeEngine:willCallbackBridgeCommand:;
- (void)bridgeEngine:willExecuteBridgeCommand:;
- (void)bridgeEngine:willFireEventWithMessage:;
- (void)installEngineOn:;
- (void)installIESAuthOn:;
- (BOOL)p_isSelfBridges:;
- (void)p_loadDomainWhiteListIfNeeded;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)shared;
@end
