@interface VNHumanBodyPoseObservation : VNRecognizedPointsObservation
@property (nonatomic) NSArray availableJointNames;
@property (nonatomic) NSArray availableJointsGroupNames;
- (id)availableJointNames;
- (id)availableJointsGroupNames;
- (id)recognizedPointForJointName:error:;
- (id)recognizedPointsForJointsGroupName:error:;
@end
