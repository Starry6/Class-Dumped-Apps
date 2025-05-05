@interface MTLResourceStatePassSampleBufferAttachmentDescriptor : NSObject
@property (nonatomic) <MTLCounterSampleBuffer> sampleBuffer;
@property (nonatomic) Q startOfEncoderSampleIndex;
@property (nonatomic) Q endOfEncoderSampleIndex;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
