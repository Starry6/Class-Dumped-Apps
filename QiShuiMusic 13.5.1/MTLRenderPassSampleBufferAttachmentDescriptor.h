@interface MTLRenderPassSampleBufferAttachmentDescriptor : NSObject
@property (nonatomic) <MTLCounterSampleBuffer> sampleBuffer;
@property (nonatomic) Q startOfVertexSampleIndex;
@property (nonatomic) Q endOfVertexSampleIndex;
@property (nonatomic) Q startOfFragmentSampleIndex;
@property (nonatomic) Q endOfFragmentSampleIndex;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
