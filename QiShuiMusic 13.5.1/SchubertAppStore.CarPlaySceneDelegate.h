@interface SchubertAppStore.CarPlaySceneDelegate : NSObject
- (void)templateApplicationScene:didConnectInterfaceController:;
- (void)templateApplicationScene:didDisconnectInterfaceController:;
- (id)init;
- (void)sceneDidBecomeActive:;
- (void)sceneWillResignActive:;
- (void)sceneDidEnterBackground:;
- (void)sceneWillEnterForeground:;
- (void)scene:willConnectToSession:options:;
- (void)sceneDidDisconnect:;
@end
