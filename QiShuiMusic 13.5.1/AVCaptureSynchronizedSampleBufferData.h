@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData
@property (nonatomic) ^{opaqueCMSampleBuffer=} sampleBuffer;
@property (nonatomic) BOOL sampleBufferWasDropped;
@property (nonatomic) q droppedReason;
- (void)dealloc;
- (id)sampleBuffer;
- (BOOL)hasCorrespondingDepthData;
- (BOOL)hasCorrespondingVisionData;
- (int)constituentDeviceCaptureID;
- (BOOL)sampleBufferWasDropped;
- (long long)droppedReason;
- (id)_initWithSampleBuffer:sampleBufferWasDropped:;
@end
