@interface AWEPlayInteractionPreloadManager : NSObject
@property (nonatomic) double commentPreloadBeforeWidth;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) <AWEPlayInteractionViewControllerProtocol> container;
@property (nonatomic) <AWEPlayInteractionContextProtocol> context;
@property (nonatomic) <AWEPlayInteractionCommentPanelControllerProtocol><AWEPlayInteractionReusableSafeTimerProtocol> commentPanelControllerDelegate;
- (id)commentVC;
- (void)scheduleCommentPreload:model:context:opportunity:;
- (void)setCommentPanelControllerDelegate:;
- (id)commentPanelControllerDelegate;
- (void)setCommentPreloadBeforeWidth:;
- (void)smartPreloadComments:triggerEventType:;
- (void)preloadCommentWithThreshold:;
- (void)preloadCommentDataWithThreshold:;
- (void)preRenderCommentPanel;
- (double)commentPreloadBeforeWidth;
- (void)setModel:;
- (void)setContainer:;
- (id)container;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
+ (unsigned long long)commentPreloadPredictOpportunity;
@end
