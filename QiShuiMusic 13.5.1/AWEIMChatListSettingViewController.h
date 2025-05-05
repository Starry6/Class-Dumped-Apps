@interface AWEIMChatListSettingViewController : UIViewController
@property (nonatomic) AWEIMChatDetailSettingCell innerPushCell;
@property (nonatomic) AWESettingSwitch innerPushSwitch;
@property (nonatomic) AWEIMChatDetailSettingCell imEnableCell;
@property (nonatomic) AWESettingSwitch imEnableSwitch;
@property (nonatomic) UIView sectionHeaderView;
@property (nonatomic) UILabel sectionHeaderLabel;
- (id)innerPushSwitch;
- (void)backBtnClicked:;
- (BOOL)configWithRouterParamDict:;
- (id)imEnableCell;
- (id)imEnableSwitch;
- (id)innerPushCell;
- (void)p_setupUI;
- (void)p_updateUI;
- (void)setImEnableCell:;
- (void)setImEnableSwitch:;
- (void)setInnerPushCell:;
- (void)setInnerPushSwitch:;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)viewDidLoad;
- (id)sectionHeaderLabel;
- (id)sectionHeaderView;
- (void)setSectionHeaderView:;
- (void)setSectionHeaderLabel:;
@end
