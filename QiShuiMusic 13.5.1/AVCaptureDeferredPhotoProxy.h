@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto
@property (nonatomic) NSString persistentStorageUUID;
@property (nonatomic) NSString deferredPhotoIdentifier;
- (id)dimensions;
- (id)initWithTimestamp:proxySurface:proxySurfaceSize:proxyFileType:previewPhotoSurface:metadata:captureRequest:sequenceCount:photoCount:captureRequestIdentifier:photoIdentifier:expectedPhotoProcessingFlags:sourceDeviceType:;
- (id)persistentStorageUUID;
- (void)dealloc;
- (id)deferredPhotoIdentifier;
- (id)initWithDeferredPhotoIdentifier:;
- (id)debugDescription;
- (id)initWithTimestamp:captureRequestIdentifier:photoIdentifier:expectedPhotoProcessingFlags:;
- (id)description;
- (id)captureRequestIdentifier;
- (BOOL)isEqual:;
@end
