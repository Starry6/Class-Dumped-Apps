@interface BWDeferredMetadataCache : NSObject
@property (nonatomic) NSInteger numberOfExpectedSampleBuffersForEachPTS;
- (void)dealloc;
- (int)numberOfExpectedSampleBuffersForEachPTS;
- (void)setNumberOfExpectedSampleBuffersForEachPTS:;
- (void)flush;
- (id)initWithCaptureStream:atomicTransactions:;
- (void)addMetadataAttachmentToSampleBuffer:withDutyCycleMetadataCache:;
@end
