@interface MTLAccelerationStructurePassDescriptor : NSObject
@property (nonatomic) MTLAccelerationStructurePassSampleBufferAttachmentDescriptorArray sampleBufferAttachments;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)sampleBufferAttachments;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)convertToComputePassDescriptor;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)accelerationStructurePassDescriptor;
@end
