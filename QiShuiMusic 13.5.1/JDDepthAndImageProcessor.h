@interface JDDepthAndImageProcessor : NSObject
@property (nonatomic) {?=[4]} pointCloudToImageTransform;
@property (nonatomic) JDCameraCalibrationData imageCalibrationData;
@property (nonatomic) NSInteger numberOfPointCloudsPerImage;
@property (nonatomic) BOOL pointCloudFiltering;
@property (nonatomic) BOOL retainImagesRemovedFromQueue;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setNumberOfPointCloudsPerImage:;
- (id)pushPointCloud:;
- (id)pushImage:;
- (id)initWithImageCameraCalibration:;
- (int)numberOfPointCloudsPerImage;
- (id)initWithPointCloudToImageTransform:imageCameraCalibration:;
- (id)checkSyncResults:;
- (id)purgeAllQueuedImages;
- (id)pointCloudToImageTransform;
- (id)imageCalibrationData;
- (void)setImageCalibrationData:;
- (BOOL)pointCloudFiltering;
- (void)setPointCloudFiltering:;
- (BOOL)retainImagesRemovedFromQueue;
- (void)setRetainImagesRemovedFromQueue:;
@end
