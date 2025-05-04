@interface AWEDetailTrendActionServiceImpl : NSObject
@property (nonatomic) AWEDetailTrendViewModel stateContext;
@property (nonatomic) AWEDetailTrendTracker tracker;
@property (nonatomic) BOOL onAction;
@property (nonatomic) AWEMusicDetailTemplateHelper templateHelper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)useCustomRouterActionWithSchema:;
- (void)actionWithActionSender:;
- (id)initWithStateContext:tracker:;
- (BOOL)isOnAction;
- (void)setOnAction:;
- (void)handleActionSchema:trackParams:;
- (void)trackCheckSchemaCorrectWithSuccess:extraDict:;
- (void)routerCameraWithSchema:;
- (id)templateHelper;
- (BOOL)tryYuanDanRouterCameraWithComposerModel:schema:;
- (void)handleFollowshootSchema:;
- (void)setTemplateHelper:;
- (void)setStateContext:;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
- (id)stateContext;
@end
