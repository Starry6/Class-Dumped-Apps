@interface AVCaptureVisionDataOutput : AVCaptureOutput
@property (nonatomic) <AVCaptureVisionDataOutputDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateCallbackQueue;
@property (nonatomic) {?=qiIq} minFrameDuration;
@property (nonatomic) {?=qiIq} minBurstFrameDuration;
@property (nonatomic) {?=qiIq} maxBurstDuration;
@property (nonatomic) Q gaussianPyramidOctavesCount;
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor;
@property (nonatomic) Q maxKeypointsCount;
@property (nonatomic) BOOL featureBinningEnabled;
@property (nonatomic) BOOL featureOrientationAssignmentEnabled;
@property (nonatomic) BOOL dynamicThresholdingSupported;
@property (nonatomic) BOOL dynamicThresholdingEnabled;
@property (nonatomic) Q keypointDetectionFlowType;
@property (nonatomic) BOOL subPixelThresholdSupported;
@property (nonatomic) Q subPixelThreshold;
@property (nonatomic) BOOL featureMatchingSupported;
@property (nonatomic) BOOL featureMatchingEnabled;
@property (nonatomic) Q featureMatchingDescriptorSize;
@property (nonatomic) BOOL orientationDistanceThresholdSupported;
@property (nonatomic) float orientationDistanceThreshold;
@property (nonatomic) BOOL sigmaDistanceThresholdSupported;
@property (nonatomic) float sigmaDistanceThreshold;
@property (nonatomic) BOOL squareDistanceDisparityFractionSupported;
@property (nonatomic) float squareDistanceDisparityFraction;
@property (nonatomic) BOOL hammingDistanceThresholdSupported;
@property (nonatomic) Q hammingDistanceThreshold;
@property (nonatomic) BOOL laccConfigAndMetadataSupported;
@property (nonatomic) NSData laccConfigAndMetadata;
@property (nonatomic) @ delegateOverride;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateOverrideCallbackQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canAddConnection:failureReason:;
- (id)init;
- (void)dealloc;
- (id)addConnection:error:;
- (id)connectionMediaTypes;
- (void)detachSafelyFromFigCaptureSession:;
- (void)attachSafelyToFigCaptureSession:;
- (void)setDelegateOverride:delegateOverrideCallbackQueue:;
- (void)removeConnection:;
- (void)handleChangedActiveFormat:forDevice:;
- (void)_handleNotification:payload:;
- (id)delegateCallbackQueue;
- (void)_updateRemoteQueue:;
- (id)delegateOverride;
- (void)_handleLocalQueueMessage:;
- (void)_processSampleBuffer:;
- (id)delegate;
- (void)_handleRemoteQueueOperation:;
- (id)delegateOverrideCallbackQueue;
- (id)minFrameDuration;
- (void)setRuntimeUpdates:;
- (void)_updateLocalQueue:;
- (void)setDelegate:callbackQueue:;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:;
- (void)setMinFrameDuration:;
- (id)minBurstFrameDuration;
- (id)maxBurstDuration;
- (unsigned long long)gaussianPyramidOctavesCount;
- (float)gaussianPyramidBaseOctaveDownscalingFactor;
- (unsigned long long)maxKeypointsCount;
- (unsigned long long)keypointDetectionFlowType;
- (unsigned long long)subPixelThreshold;
- (unsigned long long)featureMatchingDescriptorSize;
- (float)orientationDistanceThreshold;
- (float)sigmaDistanceThreshold;
- (float)squareDistanceDisparityFraction;
- (unsigned long long)hammingDistanceThreshold;
- (id)laccConfigAndMetadata;
- (float)keypointDetectionThreshold;
- (void)setMinBurstFrameDuration:;
- (void)setMaxBurstDuration:;
- (void)setGaussianPyramidOctavesCount:;
- (void)setGaussianPyramidBaseOctaveDownscalingFactor:;
- (void)setMaxKeypointsCount:;
- (BOOL)isFeatureBinningEnabled;
- (void)setFeatureBinningEnabled:;
- (BOOL)isFeatureOrientationAssignmentEnabled;
- (void)setFeatureOrientationAssignmentEnabled:;
- (BOOL)isDynamicThresholdingSupported;
- (BOOL)isDynamicThresholdingEnabled;
- (void)setDynamicThresholdingEnabled:;
- (BOOL)isKeypointDetectionFlowTypeSupported:;
- (void)setKeypointDetectionFlowType:;
- (BOOL)isSubPixelThresholdSupported;
- (void)setSubPixelThreshold:;
- (BOOL)isFeatureMatchingSupported;
- (BOOL)isFeatureMatchingEnabled;
- (void)setFeatureMatchingEnabled:;
- (void)setFeatureMatchingDescriptorSize:;
- (BOOL)isOrientationDistanceThresholdSupported;
- (void)setOrientationDistanceThreshold:;
- (BOOL)isSigmaDistanceThresholdSupported;
- (void)setSigmaDistanceThreshold:;
- (BOOL)isSquareDistanceDisparityFractionSupported;
- (void)setSquareDistanceDisparityFraction:;
- (BOOL)isHammingDistanceThresholdSupported;
- (void)setHammingDistanceThreshold:;
- (BOOL)isLACCConfigAndMetadataSupported;
- (void)setLaccConfigAndMetadata:;
- (void)setKeypointDetectionThreshold:;
- (BOOL)areRuntimeUpdatesSupported;
- (void)triggerBurst;
- (void)_initializeClientVisiblePropertiesForSourceDevice:;
- (BOOL)_isPropertySupported:;
+ (id)new;
@end
