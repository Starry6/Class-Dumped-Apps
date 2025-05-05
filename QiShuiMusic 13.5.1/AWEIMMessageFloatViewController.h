@interface AWEIMMessageFloatViewController : AWEIMMessageBaseViewController
@property (nonatomic) AWEIMMessageFloatNavigationBar floatNaviBar;
@property (nonatomic) <AWEIMMessageFloatViewControllerDelegate> delegate;
- (void)backBtnClicked:;
- (void)__updateMessageListTableViewFrame;
- (void)didUpdateInputVCFrame:inputViewType:;
- (id)floatNaviBar;
- (id)messageListVCAvailableFrame;
- (void)p_updateLayout;
- (void)refreshConversationNaviBarRightContainer;
- (void)setFloatNaviBar:;
- (void)trackCharDetailPageWithValue:;
- (void)updateLayoutWithTransformToFull:;
- (void)updateTitleWithText:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
