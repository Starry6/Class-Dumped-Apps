@interface VNSmartCam5CompoundRequestGroupingConfiguration : NSObject
- (void)setDetectorConfigurationOption:value:;
- (void).cxx_destruct;
- (id)detectorConfigurationOptions;
- (id)originalRequests;
- (unsigned long long)imageCropAndScaleOption;
- (BOOL)preferBackgroundProcessing;
- (id)processingDevice;
- (id)initWithImageCropAndScaleOption:;
- (void)addOriginalRequest:;
@end
