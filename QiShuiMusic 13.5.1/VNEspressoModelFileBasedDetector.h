@interface VNEspressoModelFileBasedDetector : VNDetector
@property (nonatomic) VNEspressoResources espressoResources;
@property (nonatomic) Q networkRequiredInputImageWidth;
@property (nonatomic) Q networkRequiredInputImageHeight;
@property (nonatomic) Q inputImageAspectRatioHandling;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:error:;
- (BOOL)supportsProcessingDevice:;
- (BOOL)_loadEspressoModelWithConfigurationOptions:error:;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:;
- (BOOL)getWidth:height:ofEspressoModelNetworkBlobNamed:error:;
- (BOOL)bindBuffer:toNetworkInputBlobName:error:;
- (BOOL)bindBuffer:toNetworkOutputBlobName:error:;
- (BOOL)_bindBuffer:toNetworkBlobName:bindMode:error:;
- (BOOL)bindLockedPixelBuffer:toNetworkInputBlobName:error:;
- (BOOL)bindPixelBuffer:toNetworkBlobName:error:;
- (BOOL)executePlanAndReturnError:;
- (id)espressoResources;
- (unsigned long long)networkRequiredInputImageWidth;
- (unsigned long long)networkRequiredInputImageHeight;
- (unsigned long long)inputImageAspectRatioHandling;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:;
+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)espressoModelFileNameForConfigurationOptions:;
+ (id)supportedImageSizeSetForOptions:error:;
+ (id)keyForDetectorWithConfigurationOptions:;
@end
