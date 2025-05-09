@interface VNFaceObservation : VNDetectedObjectObservation
@property (nonatomic) VNFaceLandmarks2D landmarks;
@property (nonatomic) {_Geometry2D_rect2D_={_Geometry2D_point2D_=ff}{_Geometry2D_size2D_=ff}} alignedBoundingBox;
@property (nonatomic) float alignedRotationAngle;
@property (nonatomic) NSData landmarkPoints;
@property (nonatomic) NSData landmarkPoints65;
@property (nonatomic) Q landmarksConstellation;
@property (nonatomic) NSArray landmarkPrecisionEstimatesPerPoint;
@property (nonatomic) NSData landmarkPoints3d;
@property (nonatomic) NSData poseData;
@property (nonatomic) float faceIdConfidence;
@property (nonatomic) NSData alignedMeanShape;
@property (nonatomic) NSNumber roll;
@property (nonatomic) NSNumber yaw;
@property (nonatomic) NSNumber pitch;
@property (nonatomic) VNRequestSpecifier landmarksOriginatingRequestSpecifier;
@property (nonatomic) VNRequestSpecifier landmarks3DOriginatingRequestSpecifier;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} unalignedBoundingBox;
@property (nonatomic) VNFaceLandmarks3D landmarks3d;
@property (nonatomic) VNFaceLandmarks2D landmarks65;
@property (nonatomic) VNFaceRegionMap faceRegionMap;
@property (nonatomic) VNFaceAttributes faceAttributes;
@property (nonatomic) NSDictionary expressionsAndConfidence;
@property (nonatomic) VNFaceLegacyFaceCore legacyFaceCore;
@property (nonatomic) {?=[4]} pose;
@property (nonatomic) VNRequestSpecifier poseOriginatingRequestSpecifier;
@property (nonatomic) {?=} poseQuaternion;
@property (nonatomic) float nameConfidence;
@property (nonatomic) Q faceId;
@property (nonatomic) VNFaceprint faceprint;
@property (nonatomic) VNTorsoprint torsoprint;
@property (nonatomic) VNFaceTorsoprint faceTorsoprint;
@property (nonatomic) VNFaceSegments faceSegments;
@property (nonatomic) float blinkScore;
@property (nonatomic) float faceJunkinessIndex;
@property (nonatomic) float faceOrientationIndex;
@property (nonatomic) VNFaceGaze gaze;
@property (nonatomic) VNFaceScreenGaze faceScreenGaze;
@property (nonatomic) BOOL boundingBoxAligned;
@property (nonatomic) NSNumber faceCaptureQuality;
- (id)yaw;
- (id)debugQuickLookObject;
- (void)setPitch:;
- (void)setFaceSegments:;
- (void)_initLocks;
- (id)pitch;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)roll;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)faceSegments;
- (BOOL)isEqual:;
- (void)setYaw:;
- (void)setRoll:;
- (id)pose;
- (id)landmarks;
- (id)faceAttributes;
- (float)faceJunkinessIndex;
- (float)faceOrientationIndex;
- (id)legacyFaceCore;
- (unsigned long long)faceId;
- (void)setFaceId:;
- (void)setLandmarks:;
- (void)setFaceprint:;
- (id)faceprint;
- (id)vn_cloneObject;
- (id)torsoprint;
- (id)VNEntityIdentificationModelPrintWithOriginatingRequestSpecifier:error:;
- (id)VNPersonsModelFaceprintWithRequestRevision:error:;
- (id)initWithRequestRevision:;
- (id)expressionsAndConfidence;
- (float)nameConfidence;
- (id)landmarks65;
- (id)landmarks3d;
- (void)setPoseData:originatingRequestSpecifier:;
- (id)poseQuaternion;
- (BOOL)getComputedRectifyingTransform:;
- (void)setIsBlinking:;
- (void)setBlinkScore:;
- (BOOL)isBlinking;
- (float)blinkScore;
- (id)alignedBoundingBoxAsCGRect;
- (void)setExpressionsAndScores:;
- (id)expressionsAndScores;
- (id)expressionsAndDetections;
- (void)setBoundingBoxAligned:;
- (void)setLandmarkPointsData:originatingRequestSpecifier:;
- (void)setLandmarkPoints65Data:originatingRequestSpecifier:;
- (void)setLandmark3DPointsData:originatingRequestSpecifier:;
- (void)setLandmarkScore:;
- (float)landmarkScore;
- (void)_addPointsOfNamedRegion:inLandmarks:toPath:applyingAffineTransform:;
- (void)setFaceRegionMap:;
- (void)setFaceAttributes:;
- (void)setFaceCaptureQuality:;
- (void)setFaceJunkinessIndex:;
- (void)setFaceOrientationIndex:;
- (void)setTorsoprint:;
- (id)faceTorsoprint;
- (void)setFaceTorsoprint:;
- (void)setUnalignedBoundingBox:;
- (void)setLegacyFaceCore:;
- (void)setFaceScreenGaze:;
- (void)setGaze:;
- (BOOL)getFaceEXIFOrientation:error:;
- (BOOL)isRevision1DetectedRectanglesCompatible;
- (id)faceCaptureQuality;
- (id)alignedBoundingBox;
- (void)setAlignedBoundingBox:;
- (float)alignedRotationAngle;
- (void)setAlignedRotationAngle:;
- (id)landmarkPoints;
- (id)landmarkPoints65;
- (unsigned long long)landmarksConstellation;
- (void)setLandmarksConstellation:;
- (id)landmarkPrecisionEstimatesPerPoint;
- (void)setLandmarkPrecisionEstimatesPerPoint:;
- (id)landmarkPoints3d;
- (id)poseData;
- (float)faceIdConfidence;
- (void)setFaceIdConfidence:;
- (id)alignedMeanShape;
- (void)setAlignedMeanShape:;
- (id)landmarksOriginatingRequestSpecifier;
- (id)landmarks3DOriginatingRequestSpecifier;
- (id)unalignedBoundingBox;
- (id)faceRegionMap;
- (id)poseOriginatingRequestSpecifier;
- (id)gaze;
- (id)faceScreenGaze;
- (BOOL)isBoundingBoxAligned;
+ (id)faceObservationWithRequestRevision:unalignedBoundingBox:alignedBoundingBox:;
+ (BOOL)supportsSecureCoding;
+ (id)faceObservationWithRequestRevision:boundingBox:alignedBoundingBox:roll:yaw:;
+ (BOOL)_exifOrientationFromFaceRollAngle:exifOrientation:error:;
+ (id)faceObservationWithRequestRevision:boundingBox:alignedBoundingBox:roll:yaw:pitch:;
+ (id)faceObservationWithRequestRevision:boundingBox:roll:yaw:pitch:;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
+ (BOOL)computeYawPitchRollFromPoseMatrix:outputYaw:outputPitch:outputRoll:;
+ (id)faceObservationWithRequestRevision:boundingBox:roll:yaw:;
+ (id)observationWithRequestRevision:boundingBox:;
+ (id)faceObservationWithRequestRevision:boundingBox:andAlignedBoundingBox:;
+ (id)faceObservationWithRequestRevision:boundingBox:faceprint:;
@end
