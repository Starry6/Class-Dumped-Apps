@interface MTKTextureLoaderPVR : MTKTextureLoaderData
- (void)dealloc;
- (id)initWithData:options:error:;
- (id)getDataForArrayElement:face:level:depthPlane:bytesPerRow:bytesPerImage:;
- (void)determineBlockSize:blocksWide:blocksHigh:bytesPerBlock:fromFormat:width:andHeight:;
- (BOOL)determineFormat:options:;
+ (BOOL)isPVRFile:;
@end
