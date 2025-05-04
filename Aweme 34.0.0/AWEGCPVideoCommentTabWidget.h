@interface AWEGCPVideoCommentTabWidget : IESGCPBaseWidget
@property (nonatomic) BOOL diOptEnable;
@property (nonatomic) UIViewController<AWEGCPCommentTabControllerProtocol> commentTabViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createGameCPCommentTabVC:;
- (void)trackGameCommentTabShowEventWithAweme:;
- (void)trackGameCommentTabClickEventWithAweme:actionWay:;
- (id)commentTabTitleWithAweme:;
- (BOOL)shouldShowGameCPCommentTab:;
- (BOOL)diOptEnable;
- (void)setDiOptEnable:;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)setCommentTabViewController:;
- (id)getTrackParamsWithAwemeModel:;
- (id)commentTabViewController;
- (void).cxx_destruct;
@end
