@interface AWEIMRemoveGroupAdminViewController : AWEIMListBaseViewController
@property (nonatomic) UIButton rightButton;
@property (nonatomic) IESIMUILoadingView loadingView;
@property (nonatomic) AWEIMMessageConversation conversation;
- (void)changeToMultiselect:;
- (id)conversationDataManager;
- (long long)currentFunctin;
- (void)p_dismiss;
- (void)p_save;
- (void)updateMultiselectCount:;
- (id)conversation;
- (id)rightButton;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)setRightButton:;
- (void)fetchData;
- (void)viewDidLoad;
- (void)setConversation:;
- (id)loadingView;
- (void)setLoadingView:;
@end
