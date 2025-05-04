@interface AWEIMMessageListVideoEntryComponent : AWEIMComponentBase
@property (nonatomic) AWEIMChatPanelModel plusPanelItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL canShowInPlusPanel;
- (void)componentDidMounted:;
- (BOOL)canShowInPlusPanelWithContext:;
- (id)plusPanelItemModel;
- (BOOL)canShowInPlusPanel;
- (void)setCanShowInPlusPanel:;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_onItemDidSelectedWithEnterFrom:conversationType:;
- (id)plusPanelItem;
- (void)setPlusPanelItem:;
- (void)p_startVideoVoipEnterFrom:extraResource:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
