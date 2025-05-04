@interface AWEUGTaskSceneService : NSObject
@property (nonatomic) NSString currentScene;
@property (nonatomic) <AWEUGCampaignTaskEvadeSceneProtocol> sceneEvade;
@property (nonatomic) <AWEUGSceneServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentScene:;
- (void)sceneDidAppeared:;
- (void)sceneDidDisappeared:;
- (void)setSceneEvade:;
- (void)webSceneDidDisappeared:;
- (BOOL)isSatisfiedScene:;
- (id)sceneEvade;
- (void)getSceneAndCheck;
- (void)webviewDidReloadContext:;
- (id)delegate;
- (id)initWithModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)currentScene;
- (void)setupObserver;
@end
