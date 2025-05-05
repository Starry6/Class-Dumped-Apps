@interface NEAppProxyProviderManager : NETunnelProviderManager
- (id)init;
+ (void)loadAllFromPreferencesWithCompletionHandler:;
@end
