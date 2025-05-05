@interface VNTrackLegacyFaceCoreObjectRequest : VNTrackObjectRequest
@property (nonatomic) NSNumber faceCoreMinFaceSize;
@property (nonatomic) NSNumber faceCoreNumberOfDetectionAngles;
@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) BOOL faceCoreExtractBlink;
@property (nonatomic) BOOL faceCoreExtractSmile;
@property (nonatomic) float faceCoreKalmanFilter;
- (id)faceCoreMinFaceSize;
- (BOOL)faceCoreExtractBlink;
- (BOOL)faceCoreExtractSmile;
- (BOOL)faceCoreEnhanceEyesAndMouthLocalization;
- (void)setFaceCoreNumberOfDetectionAngles:;
- (void)setFaceCoreMinFaceSize:;
- (id)faceCoreNumberOfDetectionAngles;
- (void)setFaceCoreExtractBlink:;
- (void)setFaceCoreExtractSmile:;
- (void).cxx_destruct;
- (void)setFaceCoreEnhanceEyesAndMouthLocalization:;
- (id)initWithDetectedObjectObservation:;
- (void)populateDetectorProcessingOptions:session:;
- (float)faceCoreKalmanFilter;
- (void)setFaceCoreKalmanFilter:;
+ (id)defaultProcessingDeviceForRevision:;
+ (id)supportedPrivateRevisions;
+ (unsigned int)frameCVPixelBufferFormatForRequestRevision:;
+ (id)trackerTypeForRequestRevision:error:;
@end
