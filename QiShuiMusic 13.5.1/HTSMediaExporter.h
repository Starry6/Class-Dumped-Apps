@interface HTSMediaExporter : NSObject
@property (nonatomic) AVAssetExportSession assetExporter;
@property (nonatomic) q status;
@property (nonatomic) NSString presetName;
@property (nonatomic) @ exportBlock;
- (void)setExportBlock:;
- (void)cancelExporting;
- (id)assetExporter;
- (BOOL)conbineVideoAndAudio:waterMarkExporter:saveToPath:completion:;
- (id)exportBlock;
- (BOOL)mergeAudio:saveToPath:completion:;
- (BOOL)mergeVideoFragments:saveToPath:completion:;
- (void)setAssetExporter:;
- (void)setStatus:;
- (id)init;
- (void).cxx_destruct;
- (long long)status;
- (void)video:didFinishSavingWithError:contextInfo:;
- (id)presetName;
- (void)setPresetName:;
+ (id)exportAsset:audioMix:videoCompostion:saveToFile:presetName:completion:;
+ (id)exporter;
@end
