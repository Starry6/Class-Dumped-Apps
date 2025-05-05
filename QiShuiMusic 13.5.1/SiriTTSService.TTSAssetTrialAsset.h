@interface SiriTTSService.TTSAssetTrialAsset : TTSAsset
@property (nonatomic) TTSAssetSource assetSource;
@property (nonatomic) q versionNumber;
@property (nonatomic) NSString versionDescription;
@property (nonatomic) NSNumber diskSize;
@property (nonatomic) NSArray supportedLanguages;
@property (nonatomic) NSBundle bundle;
@property (nonatomic) BOOL downloading;
@property (nonatomic) BOOL purgeable;
@property (nonatomic) BOOL locallyAvailable;
- (void)purge;
- (id)init;
- (id)supportedLanguages;
- (BOOL)locallyAvailable;
- (id)diskSize;
- (id)versionDescription;
- (void)cancelDownloadingThen:;
- (id)bundle;
- (id)assetSource;
- (BOOL)downloading;
- (void).cxx_destruct;
- (void)downloadWithReservation:useBattery:progress:then:;
- (BOOL)purgeable;
- (long long)versionNumber;
- (void)purgeImmediately:;
@end
