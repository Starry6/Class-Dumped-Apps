@interface BSXPCServiceConnectionProxy<ACActivityAuthorizationXPCServer> : BSXPCServiceConnectionProxy
- (BOOL)areFrequentPushesEnabledForBundleIdentifier:;
- (BOOL)areFrequentPushesEnabledForCurrentProcess;
- (BOOL)areActivitiesEnabledForBundleIdentifier:;
- (BOOL)areActivitiesEnabledForCurrentProcess;
- (BOOL)setFrequentPushesEnabledForBundleIdentifier:options:error:;
- (BOOL)setActivitiesAuthorizationForBundleIdentifier:options:error:;
@end
