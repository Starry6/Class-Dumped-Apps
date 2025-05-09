@interface AWERVInteractiveViewModel : NSObject
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) UIViewController<AWECommentListViewControllerProtocol> commentVC;
@property (nonatomic) NSMutableArray needInsertComments;
@property (nonatomic) BOOL noNeedInsertComment;
@property (nonatomic) BOOL isPausedByComment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)logExtraDict;
- (id)commentVC;
- (BOOL)recoverPlayIfPauseByComment;
- (BOOL)pauseVideoIfPlaying;
- (void)setCommentVC:;
- (void)addNotifications;
- (void)onAddCommentNotification:;
- (void)bindEvent;
- (void)showCommentPanel;
- (void)setIsPausedByComment:;
- (BOOL)isPausedByComment;
- (id)initWithPageContext:;
- (void)refreshCommentVC;
- (id)needInsertComments;
- (BOOL)noNeedInsertComment;
- (void)insertCommentIfNeeded;
- (void)setNoNeedInsertComment:;
- (void)setNeedInsertComments:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
@end
