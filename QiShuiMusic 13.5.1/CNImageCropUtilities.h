@interface CNImageCropUtilities : NSObject
+ (BOOL)cropRect:fitsWithinSize:;
+ (id)centeredSquareCropRectInRect:;
+ (id)squareCropRect:toFitSize:;
+ (id)scaledCropRect:fromSize:toSize:;
+ (id)intersectingSquareCropRect:forRect:;
@end
