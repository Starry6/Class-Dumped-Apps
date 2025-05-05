@interface BUCVImageTools : NSObject
+ (id)pixelBufferFromCGImage:pixelFormatType:resizeSize:;
+ (id)uiImageFromPixelBuffer:;
@end
