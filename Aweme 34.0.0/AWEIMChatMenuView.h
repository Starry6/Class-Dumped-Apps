@interface AWEIMChatMenuView : UIView
@property (nonatomic) AWEIMInputVCBadgeButton switchButton;
@property (nonatomic) UIView separator;
@property (nonatomic) @? didClickSwitchButton;
@property (nonatomic) @? canClickSwitchButton;
@property (nonatomic) @? didClickMenuBlock;
@property (nonatomic) @? didPopSubMenuBlock;
- (id)p_applyAlpha:toImage:;
- (void)setSwitchButton:;
- (void)refreshCanSwitchMenu;
- (void)configWithModelArray:;
- (void)updateSwitchButtonEnbale:;
- (void)setDidClickSwitchButton:;
- (void)setCanClickSwitchButton:;
- (void)setDidClickMenuBlock:;
- (void)setDidPopSubMenuBlock:;
- (id)didClickMenuBlock;
- (id)didPopSubMenuBlock;
- (id)p_generateSeparator;
- (id)p_switchButtonImage;
- (id)canClickSwitchButton;
- (void)p_switchButtonClick;
- (id)didClickSwitchButton;
- (void)setSeparator:;
- (id)separator;
- (void).cxx_destruct;
- (id)switchButton;
@end
