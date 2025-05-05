@interface CJPayCardOCRUtil : NSObject
+ (id)compressQualityWithImage:size:minQuality:;
+ (id)compressSizeWithImage:size:minScale:;
+ (void)compressWithImage:size:completionBlock:;
+ (void)compressWithImageV2:size:completionBlock:;
+ (id)resizeScaleImage:scale:size:;
@end
