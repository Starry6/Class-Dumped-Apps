@interface AWEIMFoldMessageRiskWarningViewController : UIViewController
@property (nonatomic) AWEIMFoldMessageRiskWarningView riskWaringView;
@property (nonatomic) AWEIMFoldMessageRiskWarningViewModel riskWaringViewModel;
@property (nonatomic) <AWEIMMediaEntranceViewControllerProtocol> messageListVC;
@property (nonatomic) AWEIMMessage message;
- (void)p_setupUI;
- (id)messageListVC;
- (void)p_addBinds;
- (void)setMessageListVC:;
- (id)initWithMessageListVC:message:;
- (void)setRiskWaringView:;
- (void)setRiskWaringViewModel:;
- (id)riskWaringView;
- (id)riskWaringViewModel;
- (id)message;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setMessage:;
@end
