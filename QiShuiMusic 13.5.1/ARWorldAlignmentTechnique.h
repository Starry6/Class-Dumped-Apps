@interface ARWorldAlignmentTechnique : ARTechnique
@property (nonatomic) q alignment;
@property (nonatomic) q cameraPosition;
@property (nonatomic) CMMotionManager motionManager;
- (BOOL)isBusy;
- (long long)cameraPosition;
- (id)processData:;
- (id)initWithAlignment:;
- (void).cxx_destruct;
- (id)_fullDescription;
- (long long)alignment;
- (BOOL)isEqual:;
- (id)motionManager;
- (void)requestResultDataAtTimestamp:context:;
- (id)resultDataClasses;
- (unsigned long long)optionalSensorDataTypes;
- (id)predictedResultDataAtTimestamp:context:;
- (id)initWithAlignment:cameraPosition:;
- (void)_referenceDeviceOrientation:;
- (float)_trackingAlignmentAngleForPoseData:deviceOrientation:;
- (id)_referenceTrackingAlignmentWithPoseData:deviceOrientation:;
- (id)_updateHeadingAlignmentWithPoseData:deviceOrientation:timestamp:;
- (id)_deviceOrientationPoseDataFromDeviceOrientation:;
- (void)_handleTrackingStateChanges:initialized:relocalized:;
- (void)setMotionManager:;
@end
