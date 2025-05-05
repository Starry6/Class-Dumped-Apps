@interface AXUltronModelAssetPolicy : AXAssetPolicy
- (id)assetType;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (id)assetsToPurgeFromInstalledAssets:;
- (BOOL)shouldCopyLocally;
- (id)assetsToDownloadFromRefreshedAssets:;
- (id)launchActivityIdentifier;
+ (BOOL)_isUltronAssetCompatible:;
+ (id)ultronAssetType;
+ (long long)minimumCompatibilityVersion;
+ (id)assetsToDownloadFromAssets:;
+ (id)compatibleAssetsFromRefreshedAssets:;
+ (long long)maximumCompatibilityVersion;
+ (id)newestCompatiableAssetsFromAssets:;
@end
