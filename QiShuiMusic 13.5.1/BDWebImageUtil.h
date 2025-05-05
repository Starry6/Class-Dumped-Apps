@interface BDWebImageUtil : NSObject
+ (id)decodeImageData:imageClass:decoderConfig:error:;
+ (id)decodeImageData:imageClass:scale:decodeForDisplay:shouldScaleDown:;
+ (id)decodeImageData:imageClass:scale:decodeForDisplay:shouldScaleDown:downsampleSize:cropRect:error:;
+ (float)getRGBAsFromImage:row:col:bytesPerRow:bytesPerPixel:hasAlpha:rawData:;
+ (long long)isWhiteOrBlackImage:samplingPoint:;
@end
