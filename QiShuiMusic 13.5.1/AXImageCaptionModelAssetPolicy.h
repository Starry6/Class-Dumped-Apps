@interface AXImageCaptionModelAssetPolicy : AXAssetPolicy
- (id)assetType;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (void)_partitionAssets:intoValidAssets:invalidAssets:;
- (id)assetsToPurgeFromInstalledAssets:;
- (id)assetsToDownloadFromRefreshedAssets:;
- (id)launchActivityIdentifier;
+ (long long)minimumCompatibilityVersion;
+ (long long)maximumCompatibilityVersion;
+ (id)assertionForNewsestCompatibleImageCaptionModelAssetWithStage:language:clientIdentifier:;
@end
