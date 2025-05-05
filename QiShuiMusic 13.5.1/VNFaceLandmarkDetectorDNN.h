@interface VNFaceLandmarkDetectorDNN : VNFaceLandmarkDetector
@property (nonatomic) ^v landmarkPoints65;
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void)releaseResources;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (id).cxx_construct;
- (id)landmarkPoints65;
- (BOOL)getConstellation:cvmlConstellation:fromOptions:error:;
- (BOOL)getLandmarkPoints:forConstellation:error:;
- (BOOL)getLandmarkErrorEstimates:forConstellation:error:;
- (BOOL)getLandmarkOcclusionFlags:forConstellation:error:;
- (BOOL)translateAndNormalizeLandmarkPointsWrtLLCofAlignedFaceBBox:imageBuffer:outputFace:error:;
+ (void)recordDefaultConfigurationOptionsInDictionary:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)outputBlobNames;
+ (id)inputBlobNames;
+ (id)_requestConstellationToDetectorConstellationMap;
@end
