@interface BWDetectedFacesRingBuffer : NSObject
@property (nonatomic) <BWFaceDetector> faceDetector;
@property (nonatomic) float secondsSinceLastFaceDetected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)faceDetector;
- (void)flush;
- (float)secondsSinceLastFaceDetected;
- (void)addFacesFromSampleBuffer:;
- (id)initWithDepth:;
- (void)transferFacesToSampleBuffer:totalSensorCropRect:;
@end
