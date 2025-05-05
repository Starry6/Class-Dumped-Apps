@interface CloudPhotoServicesUtilities : NSObject
+ (id)sizeOfImageAtURL:orientationOut:;
+ (id)dimensionsForAVAsset:;
+ (id)newImageSourceFromImageAtURL:;
+ (void)getDimensionsFromImageProperties:orientationOut:widthOut:heightOut:;
@end
