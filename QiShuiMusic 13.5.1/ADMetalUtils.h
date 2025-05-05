@interface ADMetalUtils : NSObject
+ (unsigned long long)getMTLPixelFormat:;
+ (id)textureForSize:pixelFormat:metalDevice:;
+ (id)bindIOSurfaceToMTL2DTexture:pixelFormat:width:height:plane:metalDevice:error:;
+ (id)bindPixelBufferToMTL2DTexture:metalDevice:;
+ (id)bindPixelBufferToMTL2DTexture:plane:metalDevice:error:;
+ (id)bindPixelBufferToMTL2DTexture:pixelFormat:textureSize:plane:metalDevice:error:;
+ (unsigned long long)bytesPerPixelForTextureFormat:;
+ (void)dispatchCommandEncoder:pipeline:width:height:;
@end
