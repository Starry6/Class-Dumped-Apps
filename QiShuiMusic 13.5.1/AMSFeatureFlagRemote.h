@interface AMSFeatureFlagRemote : AMSFeatureFlag
- (id)_preferencesKey;
- (void)_activateFlag;
- (void)_updateInternalEnabledState;
- (BOOL)isRemote;
- (long long)_developmentPhase;
- (void)_updateDevelopmentPhase;
+ (id)fetchRemoteFlagState;
@end
