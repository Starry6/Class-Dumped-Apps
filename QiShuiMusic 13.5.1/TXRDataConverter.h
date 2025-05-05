@interface TXRDataConverter : NSObject
+ (id)newImageFromSourceImage:newPixelFormat:bufferAllocator:gammaDegamma:error:;
+ (id)newPixelFormatSetForCGImage:displayGamut:options:;
+ (id)newImageFromSourceImage:newPixelFormat:bufferAllocator:multiplyAlpha:gammaDegamma:error:;
@end
