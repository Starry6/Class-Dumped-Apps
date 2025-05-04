@interface AWEShowBottomButtonSceneManager : NSObject
@property (nonatomic) NSMutableDictionary registeredSceneConfigs;
@property (nonatomic) NSMutableArray activeScenes;
@property (nonatomic) <AWEShowBottomButtonPluginHubProtocol> hub;
@property (nonatomic) <AWEShowBottomButtonSceneProtocol> currentActiveScene;
- (void)switchToScene:enableAnimation:completion:;
- (void)setHub:;
- (id)hub;
- (id)initWithHub:;
- (id)currentActiveScene;
- (void)registerSceneConfig:;
- (id)registeredSceneConfigs;
- (void)performSceneTransitionTo:enableAnimation:completion:;
- (void)sendEventWillDeactivateForScene:;
- (void)sendEventWillActivateForScene:;
- (void)updateActiveSceneWithNewScene:;
- (void)sendEventDidActivateForScene:;
- (id)activeScenes;
- (void)sendEventDidDeactivateForScene:;
- (void)performTransitionAnimationFrom:to:completion:;
- (void)setRegisteredSceneConfigs:;
- (void)setActiveScenes:;
- (id)init;
- (void).cxx_destruct;
@end
