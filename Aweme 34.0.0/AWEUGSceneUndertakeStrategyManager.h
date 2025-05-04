@interface AWEUGSceneUndertakeStrategyManager : HTSService
@property (nonatomic) NSDictionary sceneTypeClassMap;
@property (nonatomic) NSMutableArray sceneStrategyList;
@property (nonatomic) NSMutableArray evadeStrategyList;
@property (nonatomic) BOOL isUGLandingTab;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)injectEvadeStrategy:;
- (void)injectSceneUndertakeStrategy:config:;
- (void)removeSceneUndertakeStrategy:;
- (void)addPitayaLandingVideoPlayTrackParamsTo:;
- (void)trackLogWithMessage:;
- (void)setSceneStrategyList:;
- (void)setSceneTypeClassMap:;
- (void)setIsUGLandingTab:;
- (id)sceneStrategyList;
- (id)sceneTypeClassMap;
- (BOOL)isUGLandingTab;
- (id)evadeStrategyList;
- (void)setEvadeStrategyList:;
- (id)init;
- (void).cxx_destruct;
@end
