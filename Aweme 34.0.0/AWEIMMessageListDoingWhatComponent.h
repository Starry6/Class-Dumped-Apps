@interface AWEIMMessageListDoingWhatComponent : AWEIMComponentBase
@property (nonatomic) NSString lightCameraRepliedMessageIdString;
@property (nonatomic) AWEIMChatPanelModel plusPanelItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)canShowInPlusPanelWithContext:;
- (id)plusPanelItemModel;
- (void)didFetchMsgWithMessageGroupArray:hasMore:direction:shouldAutoLoadMore:isFirstLoad:;
- (void)p_onItemDidSelectedFromChatPanel;
- (id)plusPanelItem;
- (void)setPlusPanelItem:;
- (void)setLightCameraRepliedMessageIdString:;
- (id)lightCameraRepliedMessageIdString;
- (void)p_didClickWhatAreYouDoing;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
