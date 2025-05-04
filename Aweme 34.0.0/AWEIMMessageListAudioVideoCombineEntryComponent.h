@interface AWEIMMessageListAudioVideoCombineEntryComponent : AWEIMComponentBase
@property (nonatomic) AWEIMChatPanelModel plusPanelItem;
@property (nonatomic) BOOL canShowInPlusPanel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)canShowInPlusPanelWithContext:;
- (id)plusPanelItemModel;
- (BOOL)canShowInPlusPanel;
- (void)setCanShowInPlusPanel:;
- (void)p_onItemDidSelectedFromChatPanel;
- (id)plusPanelItem;
- (void)setPlusPanelItem:;
- (void)p_onItemDidSelectedWithEnterFrom:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
