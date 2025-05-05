@interface AXVoiceTriggerAssetPolicy : AXAssetPolicy
- (id)assetType;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)assetsToPurgeFromInstalledAssets:;
- (id)minSupportedFormatVersion;
- (BOOL)shouldCopyLocally;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
+ (BOOL)_assetsUsedInLastSixMonths;
+ (BOOL)_soundSwitchesEnabled;
@end
