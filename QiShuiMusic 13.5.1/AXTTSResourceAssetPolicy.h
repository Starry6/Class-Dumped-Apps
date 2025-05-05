@interface AXTTSResourceAssetPolicy : AXAssetPolicy
- (id)assetType;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)_voiceIdentifierForAsset:;
- (BOOL)shouldDownloadAsset:withInstalledAssets:;
- (id)downloadOptionsForOperation:userInitiated:;
- (id)launchActivityIdentifier;
- (id)assetsToPurgeFromInstalledAssets:withRefreshedAssets:;
@end
