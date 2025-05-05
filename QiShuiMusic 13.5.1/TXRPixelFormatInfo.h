@interface TXRPixelFormatInfo : NSObject
+ (BOOL)isFloat:;
+ (BOOL)isInteger:;
+ (BOOL)isASTC:;
+ (BOOL)isCompressed:;
+ (unsigned char)pixelBytes:;
+ (BOOL)isSRGB:;
+ (BOOL)isBC1to5:;
+ (BOOL)isBC6to7:;
+ (BOOL)isPVRTC:;
+ (BOOL)isETC2:;
+ (BOOL)hasAlpha:;
+ (BOOL)isGammaEncoded:;
+ (id)packedMemoryLayoutForFormat:dimensions:;
+ (unsigned char)componentsPerPixel:;
@end
