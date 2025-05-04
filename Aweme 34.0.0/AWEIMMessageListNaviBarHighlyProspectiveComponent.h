@interface AWEIMMessageListNaviBarHighlyProspectiveComponent : AWEIMComponentBase
@property (nonatomic) AWEIMHightlyProspectiveView hightlyProspectiveView;
@property (nonatomic) BOOL highlyProsepectiveViewClickEventInProcess;
@property (nonatomic) DUXBasicSheet basicSheet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickCloseButton:;
- (void)sheetWillDismiss:;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (double)naviBarViewCustomSpacing;
- (void)naviBarViewWillAppearToPosition:;
- (void)componentDidMounted:;
- (void)setBasicSheet:;
- (id)basicSheet;
- (BOOL)highlyProsepectiveViewClickEventInProcess;
- (void)setHighlyProsepectiveViewClickEventInProcess:;
- (id)hightlyProspectiveView;
- (void)p_markConversationHighlyProspective:;
- (BOOL)p_showHighlyProspectivePopupViewIfNeeded;
- (void)p_didClickConfirmButton;
- (void)p_hightlyProspectiveViewClicked;
- (void)setHightlyProspectiveView:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
