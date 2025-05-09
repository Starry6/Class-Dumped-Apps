@interface AWEIMMessageFilePreviewController : UIViewController
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel fileNameLabel;
@property (nonatomic) UILabel fileSizeLabel;
@property (nonatomic) UILabel errTipLabel;
@property (nonatomic) UIProgressView progressView;
@property (nonatomic) UIButton downloadBtn;
@property (nonatomic) UIButton openActivityBtn;
@property (nonatomic) UIButton rightNavButton;
@property (nonatomic) UIView<AnnieXContainerBaseProtocol> previewView;
@property (nonatomic) AWEIMMessageFilePreviewViewModel viewModel;
@property (nonatomic) AWEIMUserActionSheetView moreActionAlert;
@property (nonatomic) UIActivityViewController openExternalVC;
@property (nonatomic) <AWEInnerNotificationController> notificationController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:gestureRecognizer:;
- (BOOL)transition_gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:;
- (void)backBtnClicked;
- (void)setDownloadBtn:;
- (id)downloadBtn;
- (void)p_bindVM;
- (void)clickDownloadBtn;
- (void)clickOpenFileBtn;
- (void)p_addViewConstraints;
- (void)p_configFileLabelAndIcon;
- (void)rightBtnClick;
- (void)setRightNavButton:;
- (id)rightNavButton;
- (id)errTipLabel;
- (id)openActivityBtn;
- (void)p_handleMessageRecalled;
- (void)p_showPreviewView;
- (void)p_hiddenPreviewViewIfNeeded;
- (void)p_configFileDesc;
- (void)p_configProgressStatus;
- (void)p_configErrTipLabel;
- (void)p_resolveButtonState;
- (id)moreActionAlert;
- (id)openExternalVC;
- (void)p_configButtonState:;
- (BOOL)p_showPopAlertIfNeeded;
- (void)p_openActivityViewController;
- (void)setMoreActionAlert:;
- (void)setOpenExternalVC:;
- (void)setErrTipLabel:;
- (void)setOpenActivityBtn:;
- (id)notificationController;
- (id)init;
- (void)setPreviewView:;
- (id)progressView;
- (id)previewView;
- (id)initWithConfig:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)containerView;
- (void)setNotificationController:;
- (void)viewDidDisappear:;
- (void)setProgressView:;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void)viewWillAppear:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)webView:didFailLoadWithError:;
- (void)setupUI;
- (id)fileNameLabel;
- (id)fileSizeLabel;
- (void)setFileNameLabel:;
- (void)setFileSizeLabel:;
@end
