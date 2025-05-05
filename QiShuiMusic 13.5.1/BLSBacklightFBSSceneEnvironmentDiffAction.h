@interface BLSBacklightFBSSceneEnvironmentDiffAction : NSObject
@property (nonatomic) <BLSBacklightFBSSceneEnvironmentDiffActionDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)performActionsForUpdatedFBSScene:settingsDiff:fromSettings:transitionContext:;
@end
