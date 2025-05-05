@interface CSJSDImageCoderHelper : NSObject
+ (BOOL)CGImageContainsAlpha:;
+ (id)CGImageCreateDecoded:orientation:;
+ (BOOL)CGImageIsHardwareSupported:;
+ (id)CGImageCreateDecoded:;
+ (id)CGImageCreateScaled:size:;
+ (id)animatedImageWithFrames:;
+ (id)colorSpaceGetDeviceRGB;
+ (id)decodedAndScaledDownImageWithImage:limitBytes:;
+ (id)decodedAndScaledDownImageWithImage:limitBytes:policy:;
+ (id)decodedImageWithImage:;
+ (id)decodedImageWithImage:policy:;
+ (unsigned long long)defaultDecodeSolution;
+ (unsigned long long)defaultScaleDownLimitBytes;
+ (unsigned int)exifOrientationFromImageOrientation:;
+ (id)framesFromAnimatedImage:;
+ (long long)imageOrientationFromEXIFOrientation:;
+ (id)preferredPixelFormat:;
+ (id)scaledSizeWithImageSize:limitBytes:bytesPerPixel:frameCount:;
+ (id)scaledSizeWithImageSize:scaleSize:preserveAspectRatio:shouldScaleUp:;
+ (void)setDefaultDecodeSolution:;
+ (void)setDefaultScaleDownLimitBytes:;
+ (BOOL)shouldDecodeImage:policy:;
+ (BOOL)shouldScaleDownImagePixelSize:limitBytes:;
@end
