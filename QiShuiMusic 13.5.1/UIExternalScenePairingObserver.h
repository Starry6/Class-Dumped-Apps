@interface UIExternalScenePairingObserver : NSObject
@property (nonatomic) FBSceneManager _sceneManager;
@property (nonatomic) FBScene scene;
@property (nonatomic) <UIExternalScenePairingObserverDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scene:didUpdateClientSettingsWithDiff:oldClientSettings:transitionContext:;
- (void)sceneManager:willDestroyScene:;
- (void)sceneManager:didDestroyScene:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)sceneManager:didCreateScene:;
- (id)scene;
- (void)sceneLayerManagerDidUpdateLayers:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (BOOL)isPairedWithExternalSceneID:;
- (id)_sceneManager;
- (id)_initWithSceneManager:scene:delegate:;
- (id)initWithScene:delegate:;
- (void)_updateExternalScenes;
- (void)_updateScenePairingState;
- (void)_setSceneManager:;
@end
