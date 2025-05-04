@interface AWEIMMessageListRedPacketEntryComponent : AWEIMComponentBase
@property (nonatomic) AWEIMChatPanelModel plusPanelItem;
@property (nonatomic) BOOL isRefreshingUser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (BOOL)canShowInPlusPanelWithContext:;
- (id)plusPanelItemModel;
- (BOOL)canShowDecidedBySettingsWithContext:;
- (void)didClickRedPacket:;
- (void)p_onItemDidSelectedFromChatPanel;
- (id)plusPanelItem;
- (void)setPlusPanelItem:;
- (void)showRedpacketPage:;
- (void)trackChatRedpacketClickEvent;
- (id)mangoConfig;
- (void)p_onItemDidShownFromChatPanel;
- (BOOL)p_processModelAction;
- (void)p_trackJumpDynamicSchemaResult:;
- (void)p_trackRedPackRejectEvent;
- (void)p_redPackRejectWithToast:;
- (BOOL)isRefreshingUser;
- (void)setIsRefreshingUser:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
