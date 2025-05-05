@interface SchubertAppStore.AppMainSceneDelegate : UIResponder
@property (nonatomic) UIWindow window;
- (void)scene:continueUserActivity:;
- (void)scene:openURLContexts:;
- (id)init;
- (void)sceneDidBecomeActive:;
- (void)windowScene:performActionForShortcutItem:completionHandler:;
- (void)sceneWillResignActive:;
- (void)sceneDidEnterBackground:;
- (void)sceneWillEnterForeground:;
- (void).cxx_destruct;
- (void)setWindow:;
- (id)window;
- (void)scene:willConnectToSession:options:;
- (void)sceneDidDisconnect:;
@end
