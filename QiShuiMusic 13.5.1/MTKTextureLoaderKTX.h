@interface MTKTextureLoaderKTX : MTKTextureLoaderData
- (void)dealloc;
- (id)initWithData:options:error:;
- (unsigned long long)determineFormatFromType:format:internalFormat:baseInternalFormat:;
- (id)getDataForArrayElement:face:level:depthPlane:bytesPerRow:bytesPerImage:;
- (BOOL)parseKeyValueBytes:length:error:;
- (BOOL)parseKey:value:error:;
- (unsigned long long)determineFormatFromSizedFormat:;
+ (BOOL)isKTXFile:;
@end
