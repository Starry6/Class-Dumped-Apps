@interface AWEHomePageRemoteChannelSwitchController : AWEHomePageRemoteCommonController
@property (nonatomic) NSString initialChannelID;
@property (nonatomic) BOOL isConsumed;
- (id)atomicDataModel;
- (void)setInitialChannelID:;
- (void)setIsConsumed:;
- (id)initialChannelID;
- (void)autoDismissPanelIfNeed;
- (void)homePageRemotePanelWillShow;
- (void)homePageRemotePanelDidShow;
- (BOOL)isBusinessConsumed;
- (BOOL)canShowCellView;
- (void).cxx_destruct;
- (BOOL)isConsumed;
- (id)currentChannelID;
@end
