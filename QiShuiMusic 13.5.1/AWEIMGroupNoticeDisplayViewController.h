@interface AWEIMGroupNoticeDisplayViewController : UIViewController
@property (nonatomic) AWEIMGroupNoticeDisplayViewView noticeDisplayView;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) q role;
@property (nonatomic) UIViewController groupSettingVC;
@property (nonatomic) BOOL shownInHalfScreen;
- (void)backbuttonClicked:;
- (void)editButtonClicked:;
- (id)groupSettingVC;
- (BOOL)isGroupMaster;
- (id)noticeDisplayView;
- (void)setGroupSettingVC:;
- (void)setNoticeDisplayView:;
- (void)setShownInHalfScreen:;
- (BOOL)shownInHalfScreen;
- (id)conversation;
- (void)setRole:;
- (void).cxx_destruct;
- (long long)role;
- (void)viewWillAppear:;
- (void)viewDidLoad;
- (void)setConversation:;
- (id)initWithConversation:;
@end
