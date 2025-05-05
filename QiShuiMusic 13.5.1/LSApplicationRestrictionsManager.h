@interface LSApplicationRestrictionsManager : NSObject
@property (nonatomic) MOEffectiveSettings effectiveSettings;
- (id)init;
- (void)_pruneObsoleteTrustedSignerIdentities;
- (id)_LSResolveIdentifiers:;
- (void)setRestrictedBundleIDs:;
- (id)_MCRestrictionManager;
- (id)calculateSetDifference:and:;
- (void)handleMCEffectiveSettingsChanged;
- (void)setEffectiveSettings:;
- (void)handleSystemModeChangeTo:;
- (void)clearAllValues;
- (BOOL)_LSApplyRestrictedSet:forRestriction:;
- (void).cxx_destruct;
- (void)setAllowlistedBundleIDs:;
- (id)effectiveSettings;
- (BOOL)isFeatureAllowed:;
- (id)_MCProfileConnection;
@end
