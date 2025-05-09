@interface AWEIMFacePuzzleAnsweringProcessViewController : UIViewController
@property (nonatomic) AWEIMFacePuzzleAnsweringProcessView activityView;
@property (nonatomic) AWEIMFacePuzzleAnsweringProcessViewModel answeringVm;
@property (nonatomic) UIView<AWEDemaciaPlayerView> playerView;
@property (nonatomic) AWEIMFacePuzzleAnsweringPlayerViewController playVC;
@property (nonatomic) AWEIMFacePuzzleMessage message;
@property (nonatomic) BFTask playTask;
@property (nonatomic) float st;
@property (nonatomic) BFTask questionInfoTask;
@property (nonatomic) BFTask decryptImageTask;
@property (nonatomic) AWEIMMessageComponentContext context;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isOutside;
@property (nonatomic) AWEIMFacePuzzleRecognizeSenseExerciseGetRequestModel questionRequestModel;
@property (nonatomic) AWEIMFacePuzzleAnsweringProcessContext answeringContext;
@property (nonatomic) UIView loadingContainer;
@property (nonatomic) DUXLoadingToast loadingToast;
@property (nonatomic) BFTask contextPrepareTask;
@property (nonatomic) AVAudioPlayer startAudioPlayer;
@property (nonatomic) NSString startUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (BOOL)canShowInnerPush;
- (void)setPlayTask:;
- (id)playTask;
- (id)loadingToast;
- (void)setLoadingToast:;
- (void)setSt:;
- (void)p_backTapAction;
- (void)setAnsweringContext:;
- (id)answeringContext;
- (BOOL)isOutside;
- (void)setContextPrepareTask:;
- (id)contextPrepareTask;
- (void)setPlayVC:;
- (void)setAnsweringVm:;
- (id)playVC;
- (id)playCountdownAnimation;
- (void)errorHandle;
- (id)answeringVm;
- (void)showBottomLineDialog:;
- (void)showErrorDialog;
- (id)startUrl;
- (void)setStartAudioPlayer:;
- (id)startAudioPlayer;
- (void)playStartAudio;
- (id)loadingContainer;
- (id)questionInfoTask;
- (void)setQuestionInfoTask:;
- (id)decryptImageTask;
- (void)setDecryptImageTask:;
- (void)setIsOutside:;
- (id)questionRequestModel;
- (void)setQuestionRequestModel:;
- (void)setLoadingContainer:;
- (void)setStartUrl:;
- (void)viewWillDisappear:;
- (BOOL)isLoading;
- (void)dealloc;
- (id)message;
- (void)viewDidLoad;
- (void)setPlayerView:;
- (id)playerView;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setActivityView:;
- (void)viewDidAppear:;
- (void)setMessage:;
- (id)context;
- (id)activityView;
- (void)setIsLoading:;
- (float)st;
@end
