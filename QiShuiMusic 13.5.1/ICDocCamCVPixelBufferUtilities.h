@interface ICDocCamCVPixelBufferUtilities : NSObject
+ (id)createImageWithCVPixelBuffer:;
+ (id)createImageWithCVPixelBuffer:colorSpace:;
+ (id)createImageWithCVPixelBuffer:colorSpace:copyMemory:;
+ (id)coreImageForPixelBuffer:colorSpace:;
@end
