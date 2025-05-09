@interface AVMomentCaptureSettings : NSObject
@property (nonatomic) q uniqueID;
@property (nonatomic) Q userInitiatedCaptureTime;
@property (nonatomic) q torchMode;
@property (nonatomic) NSString bravoCameraSelectionBehaviorForRecording;
@property (nonatomic) q flashMode;
@property (nonatomic) BOOL autoRedEyeReductionEnabled;
@property (nonatomic) q digitalFlashMode;
@property (nonatomic) q photoQualityPrioritization;
@property (nonatomic) q HDRMode;
@property (nonatomic) BOOL autoOriginalPhotoDeliveryEnabled;
@property (nonatomic) BOOL autoSpatialOverCaptureEnabled;
@property (nonatomic) BOOL autoDeferredProcessingEnabled;
@property (nonatomic) I rawOutputFormat;
@property (nonatomic) {?=ii} maxPhotoDimensions;
- (void)setDigitalFlashMode:;
- (long long)photoQualityPrioritization;
- (void)setFlashMode:;
- (long long)torchMode;
- (long long)flashMode;
- (void)setTorchMode:;
- (long long)uniqueID;
- (void)dealloc;
- (long long)HDRMode;
- (void)setPhotoQualityPrioritization:;
- (long long)digitalFlashMode;
- (id)debugDescription;
- (void)setHDRMode:;
- (unsigned int)rawOutputFormat;
- (id)description;
- (void)setMaxPhotoDimensions:;
- (void)setRawOutputFormat:;
- (id)copyWithZone:;
- (id)maxPhotoDimensions;
- (BOOL)isAutoRedEyeReductionEnabled;
- (void)setAutoRedEyeReductionEnabled:;
- (BOOL)isAutoDeferredProcessingEnabled;
- (void)setAutoDeferredProcessingEnabled:;
- (BOOL)isAutoSpatialOverCaptureEnabled;
- (void)setAutoSpatialOverCaptureEnabled:;
- (id)_initWithUserInitiatedCaptureTime:uniqueID:;
- (id)bravoCameraSelectionBehaviorForRecording;
- (void)setBravoCameraSelectionBehaviorForRecording:;
- (unsigned long long)userInitiatedCaptureTime;
- (BOOL)isAutoOriginalPhotoDeliveryEnabled;
- (void)setAutoOriginalPhotoDeliveryEnabled:;
+ (id)settingsWithUserInitiatedCaptureTime:;
+ (id)settingsWithUserInitiatedCaptureTime:uniqueID:;
@end
