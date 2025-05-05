@interface CNTUCallProviderManager : NSObject
@property (nonatomic) TUCallProviderManager callProviderManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setCallProviderManager:;
- (void).cxx_destruct;
- (id)callProviderManager;
- (id)observableForCallProvidersChangedWithSchedulerProvider:;
- (id)thirdPartyCallProvidersForActionType:;
- (id)thirdPartyCallProviderWithBundleIdentifier:;
- (id)providerManagerQueue;
- (BOOL)isFirstPartyCallProvider:;
- (BOOL)isActionType:supportedByProvider:;
@end
