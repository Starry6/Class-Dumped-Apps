@interface MTKTextureLoaderMDL : MTKTextureLoaderData
- (void)dealloc;
- (id)getDataForArrayElement:face:level:depthPlane:bytesPerRow:bytesPerImage:;
- (id)initWithMDLTexture:options:error:;
- (BOOL)determineFormatFromChannelEncoding:channelCount:error:;
@end
