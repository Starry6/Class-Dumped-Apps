@interface AWEIMLiveGroupAnnouncementDisplayViewController : UIViewController
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) AWEIMGroupNoticeDisplayViewView displayView;
@property (nonatomic) AWEIMLiveGroupAnnouncementDisplayViewModel viewModel;
@property (nonatomic) DUXButton subscribeBtn;
- (void)setDisplayView:;
- (id)displayView;
- (id)subscribeBtn;
- (void)setSubscribeBtn:;
- (void)backbuttonClicked:;
- (id)initWithConversation:liveGroupAnnoucementInfo:;
- (void)configBtnWithSubscribeStatus:;
- (void)__didClickOnSubscribe;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)conversation;
- (void)setConversation:;
@end
