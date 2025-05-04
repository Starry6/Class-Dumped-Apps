@interface AWEIMMessageListAudioEntryComponent : AWEIMComponentBase
@property (nonatomic) Q conversationType;
@property (nonatomic) AWEIMChatPanelModel plusPanelItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL canShowInPlusPanel;
- (unsigned long long)conversationType;
- (void)setConversationType:;
- (void)componentDidMounted:;
- (BOOL)canShowInPlusPanelWithContext:;
- (id)plusPanelItemModel;
- (BOOL)canShowInPlusPanel;
- (void)setCanShowInPlusPanel:;
- (void)p_onItemDidSelectedFromChatPanel;
- (void)p_onItemDidSelectedWithEnterFrom:conversationType:;
- (void)p_startAudioVoipEnterFrom:extraAction:;
- (id)plusPanelItem;
- (void)setPlusPanelItem:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
