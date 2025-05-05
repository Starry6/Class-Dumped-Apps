@interface AVCapturePhotoPrivateClientMetadata : NSObject
@property (nonatomic) NSString captureFolderClientPath;
@property (nonatomic) NSDictionary inferenceAttachments;
@property (nonatomic) NSDictionary detectedObjectInfo;
@property (nonatomic) I spatialOverCaptureImageStitchingConfidenceScore;
@property (nonatomic) BOOL spatialOverCaptureImageHorizonLinePresent;
@property (nonatomic) float spatialOverCaptureImageHorizonLineAngleInDegrees;
@property (nonatomic) float spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;
- (void)dealloc;
- (id)initWithMetadataDictionary:;
- (id)initWithCoder:;
- (id)detectedObjectInfo;
- (void)encodeWithCoder:;
- (BOOL)spatialOverCaptureImageHorizonLinePresent;
- (float)spatialOverCaptureImageHorizonLineAngleInDegrees;
- (id)inferenceAttachments;
- (id)captureFolderClientPath;
- (unsigned int)spatialOverCaptureImageStitchingConfidenceScore;
- (float)spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;
+ (BOOL)supportsSecureCoding;
@end
