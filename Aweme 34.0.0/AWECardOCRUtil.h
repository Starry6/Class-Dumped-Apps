@interface AWECardOCRUtil : NSObject
+ (id)compressImage:toTargetSize:minQuality:minScale:;
+ (void)compressWithImage:size:completionBlock:;
+ (id)cutCenterImage:widthScale:heightScale:;
+ (id)imageFromSampleBuffer:;
@end
