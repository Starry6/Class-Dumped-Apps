@interface AXAudiogramIngestionAssetPolicy : AXAssetPolicy
- (id)assetType;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)assetsToPurgeFromInstalledAssets:;
- (id)minSupportedFormatVersion;
- (BOOL)shouldCopyLocally;
- (BOOL)_assetsUsedInLastSixMonths;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
@end
