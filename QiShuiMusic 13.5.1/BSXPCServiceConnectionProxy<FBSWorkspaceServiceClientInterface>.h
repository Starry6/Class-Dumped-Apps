@interface BSXPCServiceConnectionProxy<FBSWorkspaceServiceClientInterface> : BSXPCServiceConnectionProxy
- (id)sceneID:didReceiveActions:;
- (id)handshakeWithRemnants:;
- (id)requestSceneWithOptions:completion:;
- (id)sceneID:sendMessage:withResponse:;
- (id)sceneID:didUpdateClientSettingsWithDiff:transitionContext:;
@end
