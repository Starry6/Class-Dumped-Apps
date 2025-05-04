@interface AWEIMConversationBottomMenuItemView : UIView
@property (nonatomic) DUXActionPopover popover;
@property (nonatomic) AWEIMLifeServiceChatMenuShortModel model;
@property (nonatomic) NSArray subModels;
@property (nonatomic) @? selectMenuBlock;
@property (nonatomic) @? didClickMenuBlock;
@property (nonatomic) @? didPopSubMenuBlock;
- (void)setSubModels:;
- (void)menuClicked;
- (void)setDidClickMenuBlock:;
- (void)setDidPopSubMenuBlock:;
- (void)p_hideSubMenu;
- (void)p_showSubMenu:;
- (void)setSelectMenuBlock:;
- (id)__buildItemButtonWithTitle:type:;
- (id)selectMenuBlock;
- (id)didClickMenuBlock;
- (id)didPopSubMenuBlock;
- (id)initWithModel:subModels:;
- (void)setModel:;
- (id)menuActions;
- (id)model;
- (id)popover;
- (void).cxx_destruct;
- (void)setPopover:;
- (void)setupUI;
- (id)subModels;
@end
