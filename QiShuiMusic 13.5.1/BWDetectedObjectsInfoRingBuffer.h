@interface BWDetectedObjectsInfoRingBuffer : NSObject
@property (nonatomic) <BWObjectDetector> objectDetector;
@property (nonatomic) float secondsSinceLastObjectDetected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)flush;
- (id)objectsForPTS:;
- (float)secondsSinceLastObjectDetected;
- (void)addObjectsFromSampleBuffer:;
- (id)objectDetector;
- (id)initWithRingBufferDepth:;
- (void)transferObjectsToSampleBuffer:totalSensorCropRect:;
@end
