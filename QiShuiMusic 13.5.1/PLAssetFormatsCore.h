@interface PLAssetFormatsCore : NSObject
+ (long long)masterThumbnailFormat;
+ (id)centeredRectForSourceSize:destinationSize:;
+ (id)sizeForFormat:;
+ (id)scaledSizeForSize:format:capLength:;
+ (BOOL)formatSizeIsShortSide:;
+ (long long)wildcatStackFormat;
@end
