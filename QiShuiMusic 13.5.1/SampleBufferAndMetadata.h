@interface SampleBufferAndMetadata : NSObject
@property (nonatomic) ^{opaqueCMSampleBuffer=} sampleBuffer;
@property (nonatomic) AVTimedMetadataGroup metadata;
- (id)sampleBuffer;
- (id)metadata;
- (void)setMetadata:;
- (void).cxx_destruct;
- (void)setSampleBuffer:;
@end
