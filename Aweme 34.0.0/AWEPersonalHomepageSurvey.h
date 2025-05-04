@interface AWEPersonalHomepageSurvey : NSObject
@property (nonatomic) AWEQuestionnaireResponse questionnaireResponse;
@property (nonatomic) @? onClose;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)containerWillStartLoading:;
- (void)containerDidStartLoading:;
- (void)containerDidClose:;
- (void)showWithCloseCallback:;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)setQuestionnaireResponse:;
- (id)questionnaireResponse;
- (void)onBroadcastNotification:;
- (void)trackLoadResult:errorCode:errorMsg:;
- (id)initWithViewController:;
- (id)init;
- (id)viewController;
- (void).cxx_destruct;
- (void)setViewController:;
- (id)onClose;
- (void)setOnClose:;
@end
