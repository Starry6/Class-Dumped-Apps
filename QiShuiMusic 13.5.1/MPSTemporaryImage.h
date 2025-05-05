@interface MPSTemporaryImage : MPSImage
@property (nonatomic) Q readCount;
- (void)dealloc;
- (unsigned long long)setPurgeableState:;
- (void)readBytes:dataLayout:bytesPerRow:bytesPerImage:region:featureChannelInfo:imageIndex:;
- (id)debugDescription;
- (id)initWithParentImage:sliceRange:featureChannels:;
- (void)synchronizeOnCommandBuffer:;
- (unsigned long long)readCount;
- (void)setReadCount:;
- (void)writeBytes:dataLayout:bytesPerRow:bytesPerImage:region:featureChannelInfo:imageIndex:;
+ (id)temporaryImageWithCommandBuffer:textureDescriptor:featureChannels:;
+ (id)temporaryImageWithCommandBuffer:textureDescriptor:;
+ (id)defaultAllocator;
+ (id)temporaryImageWithCommandBuffer:imageDescriptor:;
+ (void)prefetchStorageWithCommandBuffer:imageDescriptorList:;
@end
