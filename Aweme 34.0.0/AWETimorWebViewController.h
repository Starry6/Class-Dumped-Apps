@interface AWETimorWebViewController : BDPViewController
@property (nonatomic) NSString URLString;
@property (nonatomic) NSString imagePath;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString groupID;
@property (nonatomic) Q reportType;
@property (nonatomic) AWETimorWebView webview;
@property (nonatomic) AWETimorWebViewLoadingView processView;
@property (nonatomic) AWETimorWebViewHeightAdapterView blankView;
@property (nonatomic) Q webviewState;
@property (nonatomic) NSDictionary param;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeButtonDidClick;
- (id)blankView;
- (void)setBlankView:;
- (void)retryDidClick;
- (void)commonWebView:didStartProvisionalNavigation:;
- (void)commonWebView:didFinishNavigation:;
- (void)commonWebView:didFailProvisionalNavigation:withError:;
- (id)initWithParam:URLString:;
- (BOOL)createFolderIfNeed:;
- (void)setWebviewState:;
- (void)registerFeedBackMessageHandler;
- (void)updateNavigationBarConstraintFrame;
- (id)generateModelWithParam:;
- (id)generateRandomFilePathWithExtension:;
- (void)registerContextAPIName:isSynchronous:isOnMainThread:instance:type:APIHandler:;
- (void)reportALog:;
- (void)setProcessView:;
- (id)processView;
- (unsigned long long)webviewState;
- (void)updateNavigationBarHeight;
- (void)setGroupID:;
- (id)imagePath;
- (id)URLString;
- (void)viewWillDisappear:;
- (void)setReportType:;
- (id)groupID;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)appID;
- (id)param;
- (void)setAppID:;
- (void)setParam:;
- (void).cxx_destruct;
- (void)setImagePath:;
- (unsigned long long)reportType;
- (BOOL)navigationBarHidden;
- (void)setURLString:;
- (id)webview;
- (void)setWebview:;
@end
