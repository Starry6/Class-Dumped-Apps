@interface SFTabGroupBanner : SFPinnableBanner
@property (nonatomic) WBTabGroup tabGroup;
@property (nonatomic) UIAction tabGroupTapAction;
@property (nonatomic) _SWCollaborationButtonView collaborationButton;
- (void)setCollaborationButton:;
- (id)initWithFrame:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)collaborationButton;
- (id)tabGroup;
- (void)setTabGroup:;
- (void)setTabGroupTapAction:;
- (void)updateTitle;
- (BOOL)shouldUsePlainTheme;
- (void)themeDidChange;
- (void)_updateToolbarItems;
- (id)tabGroupTapAction;
@end
