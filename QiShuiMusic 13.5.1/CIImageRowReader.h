@interface CIImageRowReader : NSObject
- (id)init;
- (void)dealloc;
- (short)red;
- (short)blue;
- (short)green;
- (unsigned long long)height;
- (unsigned long long)width;
- (short)alpha;
- (unsigned int)bytesPerPixel;
- (id)rowAtIndex:;
- (void)_dumpImage:colorspace:;
- (void)dumpImage:;
- (void)dumpImageAsDeviceRGB:;
- (void)dumpImageAsDict:;
+ (id)fromImageFile:;
+ (id)fromImage:;
+ (id)forImage:downscaleToMax:colorspace:usingContext:;
+ (id)withDictionary:;
+ (id)forImage:usingContext:;
+ (id)forImage:usingContext:colorspace:;
@end
