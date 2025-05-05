@interface NSPPrivacyProxyPolicyHandler : NSObject
- (id)init;
- (void)wifiDisabled:;
- (void)remove:;
- (void)interface:disabled:;
- (void)replaceDisabledInterfaces:;
- (void)removeObliviousProxyAgentForHostname:apply:;
- (void)handleAppUninstallation:;
- (BOOL)addPoliciesForMPTCPConverterProxy:;
- (void)addObliviousProxyAgent:hostname:;
- (void).cxx_destruct;
- (id)currentPolicy;
- (void)addPreferredProxy:agentUUID:withDomainFilter:;
- (void)handleAppInstallation:;
- (BOOL)addPoliciesForProbing;
- (void)removePoliciesForMPTCPConverterProxy:;
- (void)removePreferredProxy:apply:;
- (BOOL)set:flowDivertHandle:ingressProxyURL:ingressFallbackProxyURL:captivePluginBundleIDs:;
- (void)cellularDisabled:;
+ (id)sharedHandler;
@end
