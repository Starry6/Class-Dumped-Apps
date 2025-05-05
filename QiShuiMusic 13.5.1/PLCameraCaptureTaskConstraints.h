@interface PLCameraCaptureTaskConstraints : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)stateCaptureDictionary;
- (void).cxx_destruct;
- (id)taskConstraintStatus;
- (void)startConstrainingTasksWithCoordinator:;
- (void)stopConstrainingTasksWithCoordinator:;
+ (id)sharedTaskConstraints;
@end
