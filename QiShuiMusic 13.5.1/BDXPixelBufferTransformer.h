@interface BDXPixelBufferTransformer : NSObject
+ (id)bdx_imageFromCVPixelBufferRefForSystemPlayer:;
+ (id)bdx_imageFromCVPixelBufferRefForTTPlayer:;
+ (id)bdx_pixelBufferFromImage:;
+ (void)convertBGRAtoRGBA:withSize:;
@end
