@interface MTLComputePassDescriptor : NSObject
@property (nonatomic) Q dispatchType;
@property (nonatomic) MTLComputePassSampleBufferAttachmentDescriptorArray sampleBufferAttachments;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)computePassDescriptor;
@end
