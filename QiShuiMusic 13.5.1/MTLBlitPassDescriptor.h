@interface MTLBlitPassDescriptor : NSObject
@property (nonatomic) MTLBlitPassSampleBufferAttachmentDescriptorArray sampleBufferAttachments;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)blitPassDescriptor;
@end
