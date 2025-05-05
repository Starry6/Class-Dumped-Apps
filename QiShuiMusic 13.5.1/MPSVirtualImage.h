@interface MPSVirtualImage : MPSImage
@property (nonatomic) <MTLTexture> texture;
- (id)texture;
- (id)initWithDevice:imageDescriptor:;
- (unsigned long long)setPurgeableState:;
- (void)readBytes:dataLayout:bytesPerRow:bytesPerImage:region:featureChannelInfo:imageIndex:;
- (void)writeBytes:dataLayout:bytesPerRow:region:featureChannelInfo:imageIndex:;
- (void)writeBytes:dataLayout:imageIndex:;
- (void)synchronizeOnCommandBuffer:;
- (void)readBytes:dataLayout:imageIndex:;
- (id)initWithTexture:featureChannels:;
- (void)writeBytes:dataLayout:bytesPerRow:bytesPerImage:region:featureChannelInfo:imageIndex:;
- (void)readBytes:dataLayout:bytesPerRow:region:featureChannelInfo:imageIndex:;
@end
