@interface MTKTextureLoaderImageIO : MTKTextureLoaderData
- (void)dealloc;
- (id)initWithData:options:error:;
- (id)getDataForArrayElement:face:level:depthPlane:bytesPerRow:bytesPerImage:;
- (id)initWithCGImage:options:error:;
- (BOOL)decodeCGImage:options:;
- (BOOL)decodeCGImageImageProvider:CGImageProvider:options:;
- (BOOL)decodeCGImageDataProvider:options:;
- (BOOL)determineCGImageBlockFormatWithComponentType:alphaInfo:andPixelSizeBytes:andColorSpace:isOptimized:options:;
@end
