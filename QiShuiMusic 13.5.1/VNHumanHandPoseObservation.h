@interface VNHumanHandPoseObservation : VNRecognizedPointsObservation
@property (nonatomic) NSArray availableJointNames;
@property (nonatomic) NSArray availableJointsGroupNames;
@property (nonatomic) q chirality;
- (id)availableJointNames;
- (id)availableJointsGroupNames;
- (id)recognizedPointForJointName:error:;
- (id)recognizedPointsForJointsGroupName:error:;
- (long long)chirality;
@end
