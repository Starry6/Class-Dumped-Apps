@interface ARODTHandleManager : NSObject
@property (nonatomic) q maximumNumberOfTrackedImages;
@property (nonatomic) BOOL continuousDetection;
@property (nonatomic) BOOL deterministicMode;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (BOOL)deterministicMode;
- (long long)maximumNumberOfTrackedImages;
- (BOOL)continuousDetection;
- (id)initWithMaximumNumberOfTrackedImages:;
- (id)initWithMaximumNumberOfTrackedImages:continuousDetection:deterministicMode:;
- (id)initWithDeterministicMode:;
- (id)initWithRegionProposalModelAndDeterministicMode:;
- (int)addReferenceImage:tracking:pObjectID:;
- (int)waitForAllObjectsAddToFinish;
- (int)addReferenceObject:tracking:pObjectID:;
- (int)detectReferenceObjectsForImageData:worldTrackingPose:imageContext:pResultArray:;
- (int)trackPlanarObjectAndEstimateScaleForImageData:worldTrackingPose:imageContext:timeBudget:pResultArray:;
- (int)trackPlanarObjectForImageData:imageContext:timeBudget:pResultArray:;
- (int)predictPlanarObjectsAtTimestamp:worldTrackingPose:timeBudget:pResultArray:;
- (void)updatePowerUsage:;
- (void)releaseODTHandle;
+ (long long)actualNumberOfImagesTracked:;
+ (id)suggestionInvalidImage;
+ (id)suggestionInvalidFeature;
+ (id)suggestionInternalError;
+ (void)accumulateReferenceImageErrorsForResult:refImage:objectID:pReferenceImageMap:pFailedReferenceImageNames:pUserErrorType:;
+ (id)handleAccumulatedErrorType:failedReferenceImageNames:;
+ (int)verifyReferenceImage:;
+ (int)_calibrationDataFromImageData:pCalibrationData:;
@end
