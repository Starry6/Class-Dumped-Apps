@interface SiriTTSService.TTSAssetMACompactAsset : SiriTTSService.TTSAssetMAAsset
@property (nonatomic) TTSAssetQuality quality;
@property (nonatomic) NSBundle bundle;
@property (nonatomic) BOOL locallyAvailable;
@property (nonatomic) BOOL purgeable;
- (void)purge;
- (id)quality;
- (BOOL)locallyAvailable;
- (id)bundle;
- (BOOL)purgeable;
@end
