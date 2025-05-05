@interface MTLResourceStatePassDescriptor : NSObject
@property (nonatomic) MTLResourceStatePassSampleBufferAttachmentDescriptorArray sampleBufferAttachments;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
+ (id)resourceStatePassDescriptor;
@end
