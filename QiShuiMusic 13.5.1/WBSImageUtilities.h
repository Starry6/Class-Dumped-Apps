@interface WBSImageUtilities : NSObject
+ (id)resizedImage:withSize:;
+ (id)safari_CGImageTypes;
+ (BOOL)saveCGImage:toFile:options:;
+ (id)squareThumbnailImageFromImage:thumbnailWidthInPixels:;
+ (id)flatImage:withColor:;
+ (id)_pixelDataForImage:;
+ (BOOL)image:isEqualToImage:;
+ (id)imageSizeScalingSize:proportionallyToFitSize:;
+ (id)handoffIconForDeviceType:;
@end
