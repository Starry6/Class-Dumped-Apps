@interface AWEAdFormOperationGuideViewController : UIViewController
@property (nonatomic) AWEAdSpecialWebViewController webViewController;
@property (nonatomic) AWEButton replayBtn;
@property (nonatomic) AWEButton lookDetailBtn;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString cssStr;
@property (nonatomic) BOOL isOldFormURL;
@property (nonatomic) BOOL isInteractedOnAdOperationGuideWebView;
@property (nonatomic) NSTimer replayTimer;
@property (nonatomic) q replaySecond;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL loadSuccess;
@property (nonatomic) BOOL formSubmitSuccess;
@property (nonatomic) BOOL shouldCloseFormOperation;
@property (nonatomic) @? dismissBlock;
- (void)detectAbnormalDisplay;
- (void)setLoadSuccess:;
- (void)setupSubview;
- (void)setFormSubmitSuccess:;
- (void)setShouldCloseFormOperation:;
- (void)closeReplayTimer;
- (id)replayTimer;
- (void)setReplayTimer:;
- (id)replayBtn;
- (id)lookDetailBtn;
- (void)registerOldFormEventIfNeeded;
- (void)adjustSubview;
- (BOOL)isOldFormURL;
- (void)injectCSS;
- (void)changeShouldShowFormOperation;
- (void)formDidSubmit;
- (void)resetCard:;
- (void)adCardStatusUpdate:;
- (void)setReplaySecond:;
- (void)resetReplayBtnTitle;
- (id)cssStr;
- (void)preLoadCSS;
- (id)adapter_preLoadCSS;
- (void)setCssStr:;
- (void)replayBtnClicked:;
- (void)lookDetailBtnClicked:;
- (void)interactedOnAdOperationGuideView;
- (void)setIsInteractedOnAdOperationGuideWebView:;
- (BOOL)isInteractedOnAdOperationGuideWebView;
- (long long)replaySecond;
- (void)showFromView:model:;
- (BOOL)formSubmitSuccess;
- (BOOL)shouldCloseFormOperation;
- (void)setReplayBtn:;
- (void)setLookDetailBtn:;
- (void)setIsOldFormURL:;
- (void)setModel:;
- (void)keyboardWillHide:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)dismiss;
- (id)model;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)webViewController;
- (void)setWebViewController:;
- (void)startMonitor;
- (BOOL)loadSuccess;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (void)setupNotification;
@end
