@interface PrivacyProxyClient : NSObject
+ (void)setForceFallback:queue:completionHandler:;
+ (void)getServiceStatusTimeline:completionHandler:;
+ (void)setFreeUserTierUntilTomorrow:completionHandler:;
+ (void)overridePreferredProxy:queue:completionHandler:;
+ (void)setUserTier:queue:completionHandler:;
+ (void)getPreferredProxy:completionHandler:;
+ (void)reportCellularNetworkStatus:networkName:queue:completionHandler:;
+ (void)getUserTierExtended:completionHandler:;
+ (void)getPreferredResolver:completionHandler:;
+ (void)setTrafficState:proxyTraffic:queue:completionHandler:;
+ (void)overrideIngressProxy:fallbackProxy:key:queue:completionHandler:;
+ (void)setGeohashSharingPreference:queue:completionHandler:;
+ (void)getUserTier:completionHandler:;
+ (void)getGeohashSharingPreference:completionHandler:;
+ (void)getEffectiveUserTier:completionHandler:;
+ (void)getStatus:completionHandler:;
+ (void)getOverriddeIngressProxy:completionHandler:;
+ (void)getForceFallback:completionHandler:;
+ (void)setEnabled:queue:completionHandler:;
+ (void)setPrivateAccessTokensEnabled:queue:completionHandler:;
+ (void)getServiceStatus:completionHandler:;
+ (void)getPrivateAccessTokensEnabled:completionHandler:;
+ (void)getPrivacyProxyAccountType:completionHandler:;
+ (void)reportWiFiNetworkStatus:networkName:queue:completionHandler:;
+ (void)overridePreferredResolver:queue:completionHandler:;
+ (void)getTrafficState:completionandler:;
@end
