@interface AWELandscapeCommentElement : AWELandscapeInteractionBaseElement
@property (nonatomic) AWELandScapeCommentButton commentButton;
@property (nonatomic) UIViewController<AWECommentListViewControllerProtocol> commentVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (id)commentVC;
- (BOOL)recoverPlayIfPauseByComment;
- (BOOL)pauseVideoIfPlaying;
- (void)setCommentVC:;
- (void)hideAllPanels;
- (id)commentButton;
- (void)setCommentButton:;
- (void)onCommentAddNotification:;
- (BOOL)isShowingPanel;
- (void)onCommentTotalCountNotification:;
- (void)onCommentDeleteNotification:;
- (void)trackClickCommentButton;
- (void)handleClickCommentButton;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (BOOL)isInteracting;
+ (Class)aAWEPadModuleAdapterClass;
@end
