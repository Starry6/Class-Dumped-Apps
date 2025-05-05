@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
- (BOOL)loadRefinersAndReturnError:;
- (void)calculatePupilLocationAndUpdateLandmarkPoints:;
- (id)computeLandmarksScoreOnImage:withFaceBoundingBox:andLandmarks:error:;
- (BOOL)postprocessLandmarkResultsForLandmarks:imageBuffer:outputFace:options:warningRecorder:error:;
- (id)normalizedFaceBBoxForLandmarks:;
- (BOOL)detectBlinkOnFaceImage:faceObservation:lumaRec2DInImageCoordinates:landmarks:warningRecorder:error:;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:error:;
+ (id)landmarksMeshPartsForConstellation:;
+ (id)allLandmarksPointsIndexesForConstellation:;
+ (id)computeCentroidUsingPoints:indicies:numberOfIndicies:;
@end
