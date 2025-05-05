@interface FBSSceneSnapshotRequestAction : BSAction
@property (nonatomic) Q type;
@property (nonatomic) FBSSceneSnapshotContext context;
- (id)context;
- (unsigned long long)type;
- (id)valueDescriptionForFlag:object:ofSetting:;
- (id)_initWithType:context:responder:;
- (id)keyDescriptionForSetting:;
@end
