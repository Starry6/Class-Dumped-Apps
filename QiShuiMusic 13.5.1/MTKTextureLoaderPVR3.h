@interface MTKTextureLoaderPVR3 : MTKTextureLoaderData
- (void)dealloc;
- (id)initWithData:options:error:;
- (BOOL)parseMetadataWithError:;
- (id)getDataForArrayElement:face:level:depthPlane:bytesPerRow:bytesPerImage:;
- (unsigned long long)determineFormat:colorSpace:channelType:options:;
- (void)determineBlockSize:blocksWide:blocksHigh:bytesPerBlock:fromFormat:width:andHeight:;
+ (BOOL)isPVR3File:;
@end
