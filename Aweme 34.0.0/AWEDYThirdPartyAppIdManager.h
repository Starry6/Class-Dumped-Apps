@interface AWEDYThirdPartyAppIdManager : AWEThirdPartyAppIdManager
- (id)aAWEDYThirdPartyAppIdManagerCommonAdapter;
- (id)aAWEInfraConfigModuleServiceCommonAdapter;
+ (void)setupThirdPartyAccount;
+ (void)registerSDKs;
+ (id)getAwemeKey;
+ (id)getXiguaKey;
+ (id)getDouyinKey;
+ (Class)aAWEDYThirdPartyAppIdManagerCommonAdapterClass;
+ (Class)aAWEInfraConfigModuleServiceCommonAdapterClass;
+ (void)_setupThirdPartyAccountAsynchronous:completion:;
@end
