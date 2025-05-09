@interface JDPointCloud : NSObject
@property (nonatomic) NSInteger length;
@property (nonatomic) NSInteger size;
@property (nonatomic) ^f euclideanDistances;
@property (nonatomic) ^{CGPoint=dd} cameraPixels;
@property (nonatomic) ^{CGPoint=dd} undistortedCameraPixels;
@property (nonatomic) ^ points;
@property (nonatomic) JDCameraCalibrationData cameraCalibrationData;
@property (nonatomic) ^f intensities;
@property (nonatomic) ^f confidences;
@property (nonatomic) ^f signalToNoiseRatios;
@property (nonatomic) * bankIds;
@property (nonatomic) * spotIds;
@property (nonatomic) * echoIds;
@property (nonatomic) ^I flags;
- (void)dealloc;
- (BOOL)writeToFile:atomically:;
- (void).cxx_destruct;
- (void)reset;
- (int)length;
- (id)dictionaryRepresentation;
- (id)flags;
- (id)points;
- (id)cameraCalibrationData;
- (int)size;
- (id)dataBuffer;
- (char *)spotIds;
- (char *)bankIds;
- (id)confidences;
- (void)replacePointsInRange:withPointsFrom:range:;
- (id)pointCloudByChangingPointOfViewByTransform:to:;
- (id)undistortedCameraPixels;
- (char *)echoIds;
- (id)intensities;
- (id)signalToNoiseRatios;
- (id)cameraPixels;
- (id)euclideanDistances;
- (id)initWithLength:storage:;
- (id)initWithPointCloud:;
- (id)pointCloudByChangingPointOfViewFrom:to:;
- (void)applyPerformanceOverrides;
- (id)initWithLength:cameraCalibration:storage:;
- (id)initWithSize:calibrationData:;
- (void)calculateUndistortedPixelsFromCameraPixels;
- (void)calculatePixelsFromUndistortedPixels;
- (void)calculateWorldPointsFromUndistortedPixels;
- (void)calculateUndistortedPixelsFromWorldPoints;
- (id)pointCloudByChangingPointOfView:;
+ (unsigned int)pixelFormat;
+ (id)makeWithDataBuffer:;
+ (unsigned long long)requiredStorageBytesForLength:;
+ (id)pointCloudByMergingPointClouds:;
+ (id)makeWithDictionaryRepresentation:;
@end
