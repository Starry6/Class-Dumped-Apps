@interface AWEIMMessageListExchangeAnswerEntryComponent : AWEIMComponentBase
@property (nonatomic) AWEIMChatPanelModel plusPanelItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)canShowInPlusPanelWithContext:;
- (id)plusPanelItemModel;
- (void)p_onItemDidSelectedFromChatPanel;
- (id)plusPanelItem;
- (void)setPlusPanelItem:;
- (void)p_didClickExchangeAnswer;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
