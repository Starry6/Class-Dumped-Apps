@interface AWEIMFansGroupWelcomeEditViewController : UIViewController
@property (nonatomic) AWEIMFansGroupWelcomeCollectionView welcomeCollectionView;
@property (nonatomic) NSDictionary routerParam;
@property (nonatomic) AWEIMConversationGroupManagementInfo groupManagementInfo;
@property (nonatomic) BOOL processing;
@property (nonatomic) NSInteger defaultStatusValue;
@property (nonatomic) NSString defaultWelcomeMessage;
@property (nonatomic) NSString currentWelcomeMessage;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL shownInHalfScreen;
@property (nonatomic) AWEIMFansGroupWelcomeViewModel currentViewModel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UILabel lineLabel;
@property (nonatomic) UILabel lineLabel1;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRouterParam:;
- (void)__showtitleLabel:;
- (void)addKeyboardKVO;
- (void)awe_welcomeEditCollectionView:didSelectItemAtIndexPath:;
- (void)backBtnClicked;
- (BOOL)configWithRouterParamDict:;
- (id)currentWelcomeMessage;
- (int)defaultStatusValue;
- (id)defaultWelcomeMessage;
- (void)didChangeSubmitWelcomeText:;
- (void)didClickSubmitButton;
- (void)didSelectWelcomeSettingWithViewModel:;
- (BOOL)enableHandleLeaveEvent;
- (BOOL)enableUseWelcomeEdit;
- (int)getTypeWithUpdateValue:;
- (id)groupManagementInfo;
- (void)handleResponseDataWithError:;
- (BOOL)iesim_transition_shouldStartInteractiveTranstionToVC:;
- (id)lineLabel1;
- (double)minViewHeightForHalfScreen;
- (void)presentEmptyAlertWithMessage:cancel:ok:cancelCompletion:okCompletion:;
- (void)reloadDataWithType:welcomeMessages:;
- (void)reloadDefaultData;
- (id)routerParam;
- (void)setCurrentWelcomeMessage:;
- (void)setDefaultStatusValue:;
- (void)setDefaultWelcomeMessage:;
- (void)setGroupManagementInfo:;
- (void)setLineLabel1:;
- (void)setShownInHalfScreen:;
- (void)setWelcomeCollectionView:;
- (void)setWelcomeWithType:showStatus:welcomeMessage:completion:;
- (void)shouldHiddenFooterWithViewModel:;
- (void)showNotEnableUseToast;
- (BOOL)shownInHalfScreen;
- (void)trackWelcomeEvent;
- (id)welcomeCollectionView;
- (BOOL)isEditing;
- (void)dealloc;
- (void)keyboardWillHide:;
- (void)setTitleLabel:;
- (id)conversation;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)fetchData;
- (void)viewDidLoad;
- (id)lineLabel;
- (void)setLineLabel:;
- (void)setConversation:;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:;
- (void)keyboardWillChangeFrame:;
- (void)setProcessing:;
- (BOOL)processing;
- (void)setIsEditing:;
- (id)currentViewModel;
- (void)setCurrentViewModel:;
@end
