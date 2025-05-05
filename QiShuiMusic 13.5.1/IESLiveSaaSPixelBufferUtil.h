@interface IESLiveSaaSPixelBufferUtil : NSObject
+ (id)copyPixelBufferWithPixelBuffer:;
+ (id)convertBGRAToRGBA:;
+ (id)imageFromPixelBuffer:;
+ (id)imageFromPixelBuffer:scaleToSize:;
+ (id)pixelBufferFromImage:;
@end
