@interface ARImageData : NSObject
@property (nonatomic) NSMutableDictionary extrinsicsMap;
@property (nonatomic) NSDictionary tiffData;
@property (nonatomic) AVCaptureDevice captureDevice;
@property (nonatomic) double timestamp;
@property (nonatomic) NSDate captureDate;
@property (nonatomic) double currentCaptureTimestamp;
@property (nonatomic) {?=[3]} cameraIntrinsics;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) BOOL mirrored;
@property (nonatomic) {CGSize=dd} imageResolution;
@property (nonatomic) Q lensType;
@property (nonatomic)  radialDistortion;
@property (nonatomic)  tangentialDistortion;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureTargetOffset;
@property (nonatomic) float temperature;
@property (nonatomic) float signalToNoiseRatio;
@property (nonatomic) float ISO;
@property (nonatomic) NSDictionary exifData;
@property (nonatomic) q deviceOrientation;
@property (nonatomic) ARFaceData faceData;
@property (nonatomic) AVDepthData depthData;
@property (nonatomic) ARPointCloud pointCloud;
@property (nonatomic) double depthDataTimestamp;
@property (nonatomic) ^{__CVBuffer=} visionData;
@property (nonatomic) q cameraPosition;
@property (nonatomic) NSString cameraType;
@property (nonatomic) AVCameraCalibrationData calibrationData;
@property (nonatomic) ADCameraCalibration adCameraCalibration;
@property (nonatomic) q captureFramesPerSecond;
@property (nonatomic) ARImageData originalImage;
@property (nonatomic) BOOL secondary;
@property (nonatomic) BOOL highResolution;
@property (nonatomic) ARImageData latestUltraWideImage;
@property (nonatomic) {?=[4]} visionTransform;
@property (nonatomic) double timestampOfSynchronizedWideImageData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary tracingEntry;
- (void)setDeviceOrientation:;
- (id)debugQuickLookObject;
- (void)setCaptureDevice:;
- (id)captureDevice;
- (id)init;
- (void)dealloc;
- (void)setTemperature:;
- (id)captureDate;
- (id)pixelBuffer;
- (id)initWithDictionary:;
- (void)setMirrored:;
- (long long)cameraPosition;
- (id)cameraType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (long long)deviceOrientation;
- (id)initWithImageData:;
- (float)exposureTargetOffset;
- (void)encodeWithCoder:;
- (id)depthData;
- (void)setTimestamp:;
- (float)ISO;
- (void).cxx_destruct;
- (double)timestamp;
- (BOOL)isMirrored;
- (id)description;
- (void)setExposureDuration:;
- (id)originalImage;
- (double)exposureDuration;
- (float)temperature;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)lensType;
- (void)setCameraType:;
- (void)setExposureTargetOffset:;
- (id)cameraIntrinsics;
- (void)setCameraIntrinsics:;
- (id)calibrationData;
- (void)setSecondary:;
- (id)imageResolution;
- (double)currentCaptureTimestamp;
- (void)setPixelBuffer:;
- (float)signalToNoiseRatio;
- (void)setSignalToNoiseRatio:;
- (void)setCameraPosition:;
- (id)encodeToDictionary;
- (void)setImageResolution:;
- (void)setLensType:;
- (id)radialDistortion;
- (void)setRadialDistortion:;
- (id)tangentialDistortion;
- (void)setTangentialDistortion:;
- (void)setISO:;
- (id)tracingEntry;
- (id)initWithSampleBuffer:captureFramePerSecond:captureDevice:captureSession:;
- (id)initWithPixelBuffer:captureFramePerSecond:captureDevice:captureSession:timestamp:intrinsics:exif:;
- (id)initWithPixelBuffer:captureFramePerSecond:captureDevice:captureSession:timestamp:intrinsics:exif:tiff:;
- (void)setVisionData:;
- (id)extrinsicsMap;
- (BOOL)matchesPixelBufferPointerRecursively:;
- (id)extrinsicMatrix4x4ToDeviceType:;
- (id)extrinsicMatrixToDeviceType:;
- (void)addExtrinsicMatrix:toDeviceType:;
- (void)addExtrinsicMatrix4x4:toDeviceType:;
- (void)setCaptureDate:;
- (void)setCurrentCaptureTimestamp:;
- (id)exifData;
- (void)setExifData:;
- (id)faceData;
- (void)setFaceData:;
- (void)setDepthData:;
- (id)pointCloud;
- (void)setPointCloud:;
- (double)depthDataTimestamp;
- (void)setDepthDataTimestamp:;
- (id)visionData;
- (void)setCalibrationData:;
- (id)adCameraCalibration;
- (void)setAdCameraCalibration:;
- (long long)captureFramesPerSecond;
- (void)setCaptureFramesPerSecond:;
- (BOOL)isSecondary;
- (BOOL)isHighResolution;
- (void)setHighResolution:;
- (id)latestUltraWideImage;
- (void)setLatestUltraWideImage:;
- (id)visionTransform;
- (void)setVisionTransform:;
- (double)timestampOfSynchronizedWideImageData;
- (void)setTimestampOfSynchronizedWideImageData:;
- (void)setExtrinsicsMap:;
- (id)tiffData;
+ (BOOL)supportsSecureCoding;
+ (id)captureDateFromPresentationTimestamp:session:;
@end
