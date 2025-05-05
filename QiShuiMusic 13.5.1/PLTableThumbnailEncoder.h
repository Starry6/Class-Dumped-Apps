@interface PLTableThumbnailEncoder : NSObject
+ (id)encodeThumbnailImage:toFormat:withUUID:error:;
+ (id)createCascadeSeedImageFromSourceImage:toFormats:;
+ (id)_createDownscaledImageFromSourceImage:toSize:cropped:;
+ (id)smallestSizeThatFitsSourceSize:withinFitFormat:andLargerSquareFormat:;
+ (id)encodeThumbnailSource:toFormats:withUUID:error:;
+ (id)encodeThumbnailSource:toFormat:withUUID:error:;
+ (id)_createDownscaledImageFromSource:toSize:cropped:;
+ (id)encodeThumbnailImage:toFormats:withUUID:error:;
+ (id)_encodeDownscaledImage:toFormat:withUUID:error:;
@end
