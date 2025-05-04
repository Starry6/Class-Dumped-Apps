@interface AWEIMMessageListSendOrdersEntryComponent : AWEIMComponentBase
@property (nonatomic) BOOL isPigeonKeyUser;
@property (nonatomic) AWEIMChatPanelModel plusPanelItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)canShowInPlusPanelWithContext:;
- (id)plusPanelItemModel;
- (BOOL)canShowDecidedBySettingsWithContext:;
- (void)didFetchFullDetailUser:fullDetailUser:;
- (void)p_onItemDidSelectedFromChatPanel;
- (id)plusPanelItem;
- (void)setPlusPanelItem:;
- (BOOL)isPigeonKeyUser;
- (void)setIsPigeonKeyUser:;
- (void)p_insertSendOrdersEntry;
- (void)p_didClickSendOrders;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
