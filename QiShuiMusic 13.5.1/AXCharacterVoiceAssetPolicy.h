@interface AXCharacterVoiceAssetPolicy : AXAssetPolicy
@property (nonatomic) NSString language;
- (id)assetType;
- (id)init;
- (void)setLanguage:;
- (id)language;
- (id)assetsToPurgeFromInstalledAssets:;
- (BOOL)shouldDownloadAsset:withInstalledAssets:;
- (void).cxx_destruct;
- (id)downloadOptionsForOperation:userInitiated:;
+ (id)characterVoiceAssetPolicyWithLanguage:;
@end
