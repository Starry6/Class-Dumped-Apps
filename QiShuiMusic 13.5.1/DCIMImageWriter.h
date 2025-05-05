@interface DCIMImageWriter : NSObject
- (BOOL)writeJPEGToURL:withData:thumbnail:properties:;
- (int)copyPrimaryFormatImageData:toURL:properties:;
- (BOOL)saveImageJobToDisk:;
- (id)_cameraAssetExtensionForType:;
- (BOOL)_writeJPEGToURL:withData:thumbnail:properties:duringBurst:;
- (void)_writeJPEGFromIOSurface:toPath:orientation:;
+ (id)recordedVideoPathForFilteredLivePhotoVideoPath:;
+ (id)incomingDirectoryPath;
+ (id)defaultFileExtensionForAssetType:;
+ (short)savedAssetTypeForCameraCapturedAsset;
+ (BOOL)isLivePhotoFilteredVideoPath:;
+ (short)savedAssetTypeForPhotoBoothAsset;
+ (void)writeableDataForImage:previewImage:imageData:imageUTIType:imageSource:exifProperties:imageOrientation:thumbnailDataOut:imageUTITypeOut:exifPropertiesOut:isJPEGOut:imageDataOut:;
+ (id)filteredVideoPathForRecordedLivePhotoVideoPath:;
+ (id)sharedDCIMWriter;
+ (id)preferredFileExtensionForType:;
+ (id)incomingDirectoryPathForPhotoStream;
+ (void)writeableDataForImageData:imageUTIType:imageSource:thumbnailDataOut:imageUTITypeOut:exifPropertiesOut:imageDataOut:;
+ (id)uniqueIncomingPathForAssetWithUUID:andExtension:isPhotoStream:;
@end
