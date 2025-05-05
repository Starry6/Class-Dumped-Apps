@interface IESLivePrivilegeModuleSubscribeVIPInterfaceAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fansclubSubscribeURL;
- (void)registerSubscribeVIPInfoUpdateBlock:;
- (BOOL)shouldShowSubscribeVIPTab;
- (void)showSubscribeVIPPanelWithSourceType:;
- (long long)topLeftEntranceLastPanelTab;
@end
