@interface AVOfflineVideoStabilizer : NSObject
@property (nonatomic) NSMutableArray outputSampleBuffers;
@property (nonatomic) NSInteger preferredSourcePixelBufferPrimingFrameCount;
@property (nonatomic) NSInteger preferredSourceStabilizationMetadataPrimingCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)didCompleteProcessingOfBuffer:withStatus:;
- (id)initWithTargetFrameDuration:dataProvider:destinationBufferPool:stabilizationEnabled:;
- (id)copyStabilizedSampleBuffer:;
- (int)preferredSourcePixelBufferPrimingFrameCount;
- (int)preferredSourceStabilizationMetadataPrimingCount;
- (id)_copyStabilizedSampleBuffer:;
- (unsigned long long)_extendedRowsOfOutputBuffer;
- (int)_setupVISProcessor;
- (void)_teardownVISProcessor;
- (int)_validateStabilizationMetadata:withSampleTime:isEndOfData:;
- (int)_validateSourcePixelBuffer:withSampleTime:metadata:isEndOfData:;
- (id)_createSampleBufferWithPixelBuffer:sampleTime:futureMetadata:status:;
- (id)outputSampleBuffers;
+ (id)offlineVideoStabilizerWithTargetFrameDuration:dataProvider:destinationBufferPool:stabilizationEnabled:;
@end
