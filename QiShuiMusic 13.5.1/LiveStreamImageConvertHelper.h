@interface LiveStreamImageConvertHelper : NSObject
+ (id)CVPixelBufferRefFromUIImage:pixelType:;
+ (id)ConvertImageBufferData:imageName:imageType:ratio:save:;
+ (void)saveImgData:imageName:;
+ (void)showImageData:imageName:;
@end
