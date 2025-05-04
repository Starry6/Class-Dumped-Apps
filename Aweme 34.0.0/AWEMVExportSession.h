@interface AWEMVExportSession : NSObject
@property (nonatomic) NSString presetName;
@property (nonatomic) @? downloaders;
@property (nonatomic) Q assetModelCount;
@property (nonatomic) NSString outputPath;
@property (nonatomic) {CGSize=dd} outputSize;
@property (nonatomic) NSString fillMode;
- (unsigned long long)assetModelCount;
- (void)exportAsynchronouslyWithProcessedImage:completionHandler:;
- (id)initWithAssetModels:presetName:;
- (id)initWithImageDownloaders:presetName:;
- (id)initWithImage:presetName:;
- (id)p_processImageWithBlackEdgeWithOutputSize:sourceImage:;
- (id)downloaders;
- (void)p_saveUIImages:toSandboxWithCompletionHandler:;
- (void)setDownloaders:;
- (id)outputSize;
- (id)fillMode;
- (void).cxx_destruct;
- (void)setFillMode:;
- (id)outputPath;
- (id)presetName;
- (void)setOutputPath:;
- (void)setOutputSize:;
- (void)setPresetName:;
@end
