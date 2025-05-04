@interface AWEScene : NSObject
@property (nonatomic) AWESceneStack sceneStack;
@property (nonatomic) UIView view;
@property (nonatomic) AWEScene nextScene;
- (id)sceneStack;
- (void)setSceneStack:;
- (void)moveSubview:;
- (void)removeSubview:;
- (void)sceneDidLoad:;
- (void)sceneWillApper:operation:duration:;
- (void)sceneDidApper:operation:;
- (void)sceneWillDisapper:operation:duration:;
- (void)sceneDidDisapper:operation:;
- (void)sceneDidUnload:;
- (void)sceneVc_viewWillAppear:;
- (void)sceneVc_viewDidAppear:;
- (void)sceneVc_viewWillDisappear:;
- (void)sceneVc_viewDidDisappear:;
- (void)sceneVc_enterBackgroundNotification;
- (void)sceneVc_enterForegroundNotification;
- (id)nextScene;
- (void)setNextScene:;
- (id)view;
- (void)addSubview:;
- (void)setView:;
- (void).cxx_destruct;
@end
