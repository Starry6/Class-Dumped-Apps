@interface ARFaceTrackingInternalTechnique : ARImageBasedTechnique
@property (nonatomic) q maximumNumberOfTrackedFaces;
- (id)init;
- (id)initWithOptions:;
- (id)processData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (long long)captureBehavior;
- (id)initWithMaximumNumberOfTrackedFaces:options:;
- (void)_enqueueImageForFaceTrackingNonBlocking:;
- (void)_processImageDataInBackgound:;
- (long long)maximumNumberOfTrackedFaces;
+ (BOOL)isSupported;
@end
