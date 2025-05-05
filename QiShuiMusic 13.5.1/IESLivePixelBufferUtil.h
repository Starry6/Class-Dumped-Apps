@interface IESLivePixelBufferUtil : NSObject
+ (id)copyPixelBufferWithPixelBuffer:;
+ (id)convertBGRAToRGBA:;
+ (id)imageFromPixelBuffer:;
+ (id)imageFromPixelBuffer:scaleToSize:ignoreDeviceRestrict:;
+ (id)pixelBufferFromImage:;
@end
