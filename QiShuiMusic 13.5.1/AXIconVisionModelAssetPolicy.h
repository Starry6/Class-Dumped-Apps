@interface AXIconVisionModelAssetPolicy : AXAssetPolicy
- (id)assetType;
- (id)minSupportedFormatVersion;
- (BOOL)shouldDownloadAsset:withInstalledAssets:;
- (id)launchActivityIdentifier;
- (id)maxSupportedFormatVersion;
@end
