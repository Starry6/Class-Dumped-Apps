@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene
- (void)_workspaceQueue_cancelWatchdogTimer:;
- (id)_workspaceQueue_createWatchdogForSceneAction:transitionContext:;
- (void).cxx_destruct;
- (void)_workspaceQueue_invalidate;
- (id)initWithWorkspace:host:settings:clientSettings:fromRemnant:;
@end
