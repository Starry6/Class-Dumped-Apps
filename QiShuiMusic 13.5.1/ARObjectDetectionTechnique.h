@interface ARObjectDetectionTechnique : ARImageBasedTechnique
@property (nonatomic) BOOL finishedLoadingObjects;
@property (nonatomic) ARWorldTrackingPoseData currentWorldTrackingPose;
@property (nonatomic) NSDictionary referenceObjecteMap;
@property (nonatomic) NSArray detectionObjects;
- (id)processData:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)prepare:;
- (double)requiredTimeInterval;
- (id)processResultData:timestamp:context:;
- (id)currentWorldTrackingPose;
- (void)setCurrentWorldTrackingPose:;
- (void)_processImageDataInBackgound:;
- (id)detectionObjects;
- (id)initWithDetectionObjects:;
- (void)_loadReferenceObjects;
- (void)_enqueueObjectForDetectionNonBlocking:;
- (id)referenceObjecteMap;
- (BOOL)finishedLoadingObjects;
- (void)setFinishedLoadingObjects:;
+ (BOOL)producesResultDataForAnchorOfClass:;
@end
