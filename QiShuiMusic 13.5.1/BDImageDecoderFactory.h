@interface BDImageDecoderFactory : NSObject
+ (Class)HEIFDecoderForData:isStaticSystemFirst:isAnimatedCustomFirst:;
+ (Class)AVIFDecoderForData:;
+ (Class)decoderForImageData:type:;
@end
