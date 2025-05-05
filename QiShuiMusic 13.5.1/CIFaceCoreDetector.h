@interface CIFaceCoreDetector : CIDetector
@property (nonatomic) CIContext context;
@property (nonatomic) VNDetectFaceRectanglesRequest visionRequest;
@property (nonatomic) VNTrackLegacyFaceCoreObjectRequest visionTrackingRequest;
- (void)dealloc;
- (id)context;
- (void)setContext:;
- (id)initWithContext:options:;
- (id)featuresInImage:options:;
- (id)featuresInImage:;
- (id)visionRequest;
- (void)setVisionRequest:;
- (id)visionTrackingRequest;
- (void)setVisionTrackingRequest:;
- (id)ctmForImageWithBounds:orientation:;
- (id)adjustedImageFromImage:orientation:inverseCTM:;
- (id)createFaceCoreDataFromCIImage:width:height:;
@end
