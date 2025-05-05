@interface CLSImageUtils : CLSObject
+ (id)JPEGDataFromCGImage:error:;
+ (id)CGImageFromJPEGData:error:;
+ (id)JPEGDataFromCGImage:desiredMinimumDimension:desiredMaximumDimension:error:;
+ (id)JPEGDataForThumbnailForFileAtURL:maxSize:scaleFactor:error:;
@end
