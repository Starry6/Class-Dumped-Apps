@interface MTLAccelerationStructurePassSampleBufferAttachmentDescriptor : NSObject
@property (nonatomic) <MTLCounterSampleBuffer> sampleBuffer;
@property (nonatomic) Q startOfEncoderSampleIndex;
@property (nonatomic) Q endOfEncoderSampleIndex;
- (id)init;
- (void)dealloc;
- (id)sampleBuffer;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)startOfEncoderSampleIndex;
- (unsigned long long)endOfEncoderSampleIndex;
- (void)setSampleBuffer:;
- (void)setStartOfEncoderSampleIndex:;
- (void)setEndOfEncoderSampleIndex:;
@end
