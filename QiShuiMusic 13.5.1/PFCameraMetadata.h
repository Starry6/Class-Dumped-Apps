@interface PFCameraMetadata : NSObject
@property (nonatomic) NSArray junkImageClassificationObservations;
@property (nonatomic) VNImageAestheticsObservation imageAestheticsObservation;
@property (nonatomic) VNSaliencyImageObservation saliencyObservation;
@property (nonatomic) VNSceneObservation scenePrintObservation;
@property (nonatomic) NSDictionary smartCamInfo;
@property (nonatomic) NSArray detectedHumanFaces;
@property (nonatomic) NSArray detectedHumanBodies;
@property (nonatomic) NSArray detectedCatBodies;
@property (nonatomic) NSArray detectedDogBodies;
@property (nonatomic) NSArray detectedSalientObjects;
@property (nonatomic) Q stitchConfidence;
@property (nonatomic) BOOL horizonLinePresent;
@property (nonatomic) float horizonLineAngleInDegrees;
@property (nonatomic) NSArray semanticDevelopmentGatingObservations;
@property (nonatomic) NSArray faceObservations;
@property (nonatomic) NSArray torsoprints;
@property (nonatomic) NSArray foodAndDrinkObservations;
@property (nonatomic) q semanticEnhanceScene;
@property (nonatomic) double semanticEnhanceSceneConfidence;
@property (nonatomic) NSString captureFolderPath;
@property (nonatomic) NSArray contactIDsInProximity;
@property (nonatomic) q sharedLibraryMode;
@property (nonatomic) NSData JSONDebugDescription;
- (id)initWithSpatialOverCapturePrivateClientMetadata:;
- (id)torsoprints;
- (double)semanticEnhanceSceneConfidence;
- (id)foodAndDrinkObservations;
- (id)scenePrintObservation;
- (id)initWithCoder:;
- (long long)semanticEnhanceScene;
- (void)setSemanticEnhanceScene:;
- (id)faceObservations;
- (id)saliencyObservation;
- (void)encodeWithCoder:;
- (BOOL)horizonLinePresent;
- (float)horizonLineAngleInDegrees;
- (id)detectedCatBodies;
- (id)detectedSalientObjects;
- (id)detectedHumanBodies;
- (void)setSemanticEnhanceSceneConfidence:;
- (id)JSONDebugDescription;
- (id)contactIDsInProximity;
- (id)detectedDogBodies;
- (id)detectedHumanFaces;
- (void).cxx_destruct;
- (unsigned long long)stitchConfidence;
- (id)junkImageClassificationObservations;
- (id)captureFolderPath;
- (long long)sharedLibraryMode;
- (id)semanticDevelopmentGatingObservations;
- (id)smartCamInfo;
- (id)initWithJunkImageClassificationObservations:imageAestheticsObservation:saliencyObservation:scenePrintObservation:detectedObjectsInfoHumanFaces:detectedObjectsInfoHumanBodies:detectedObjectsInfoCatBodies:detectedObjectsInfoDogBodies:detectedObjectsSalientObjects:smartCamInfo:stitchConfidence:horizonLinePresent:horizonLineAngleInDegrees:captureFolderPath:semanticDevelopmentGatingObservations:faceObservations:torsoprints:foodAndDrinkObservations:semanticEnhanceScene:contactIDsInProximity:sharedLibraryMode:;
- (id)imageAestheticsObservation;
+ (BOOL)supportsSecureCoding;
@end
