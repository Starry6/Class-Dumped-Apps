@interface PLIngestJobCameraMetadata : NSObject
@property (nonatomic) PFCameraMetadata cameraMetadata;
@property (nonatomic) PFCameraMetadata overCaptureCameraMetadata;
- (void)setCameraMetadata:;
- (id)cameraMetadata;
- (void)applyCameraMetadataToAsset:;
- (void)_ingestCameraMetadata;
- (id)overCaptureCameraMetadata;
- (void)setOverCaptureCameraMetadata:;
- (void)deserializeCameraMetadata;
- (void).cxx_destruct;
- (id)initWithCameraMetadataPath:overCaptureMetadataPath:;
- (void)applyCameraMetadataToSpatialOverCaptureAsset:;
+ (BOOL)faceObservationIngestDisabled;
+ (BOOL)facePrintIngestDisabled;
@end
