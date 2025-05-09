@interface AWEIMVideoGuideViewController : UIViewController
@property (nonatomic) UIButton jumpButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) <IESVideoPlayerProtocol> playerController;
@property (nonatomic) BOOL hasPlay;
@property (nonatomic) NSString videoUrlString;
@property (nonatomic) NSString videoID;
@property (nonatomic) @? jumpActionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:playbackFailedWithError:;
- (void)player:didChangePlaybackStateWithAction:;
- (void)player:didChangeStallState:;
- (BOOL)hasPlay;
- (void)__appDidBecomeActive:;
- (void)__addObserver;
- (void)setHasPlay:;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)setJumpButton:;
- (id)jumpButton;
- (void)presentWithVideoID:videoURL:jumpActionBlock:;
- (void)__invokeJumpOverAction:;
- (void)invokeCloseAction:;
- (id)videoUrlString;
- (id)jumpActionBlock;
- (void)__trackAction:;
- (void)__appWillResingActive:;
- (void)setVideoUrlString:;
- (void)setJumpActionBlock:;
- (void)dealloc;
- (void)setPlayerController:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (id)playerController;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)setCloseButton:;
- (id)closeButton;
- (id)videoID;
- (void)setVideoID:;
@end
