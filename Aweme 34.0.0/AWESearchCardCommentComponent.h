@interface AWESearchCardCommentComponent : AWESearchComponent
@property (nonatomic) AWESearchCardCommentModel model;
@property (nonatomic) AWESearchCardCommentButton commentButton;
@property (nonatomic) NSMutableArray broadCastArray;
@property (nonatomic) <AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (nonatomic) UIViewController<AWECommentListViewControllerProtocol> commentVC;
@property (nonatomic) BOOL commentVCHasShown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWESearchEventDispather eventDispather;
@property (nonatomic) <AWESearchContainerProtocol> containerContext;
@property (nonatomic) <AWESearchComponentProtocol> componentContext;
@property (nonatomic) NSDictionary dictLogExtraInfo;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL hidden;
- (id)commentVC;
- (BOOL)recoverPlayIfPauseByComment;
- (BOOL)pauseVideoIfPlaying;
- (void)setCommentVC:;
- (void)componentDidLoad;
- (id)commentButton;
- (void)setCommentButton:;
- (void)setCommentVCHasShown:;
- (BOOL)commentVCHasShown;
- (void)updateWithModel:forceUpdate:;
- (void)componentViewDidEndShowing;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)accessibilityElementsArr;
- (id)broadCastArray;
- (void)setBroadCastArray:;
- (void)showCommentViewController;
- (void)updateInteractor;
- (id)buildCommentViewController;
- (void)setModel:;
- (id)init;
- (id)interactor;
- (void)setInteractor:;
- (id)model;
- (void).cxx_destruct;
- (id)componentView;
+ (id)componentSizeForModel:width:;
@end
