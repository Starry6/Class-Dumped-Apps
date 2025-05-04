@interface AWELongPressPanelIMFriendsAlbumViewModel : AWELongPressPanelBaseViewModel
@property (nonatomic) <IESIMFriendsAlbumLongPressPanelConfigurationProtocol> configuration;
- (BOOL)needShow;
- (id)panelBizVMIdentifier;
- (void)p_configureWithConfiguration:;
- (void)setConfiguration:;
- (void).cxx_destruct;
- (id)configuration;
+ (id)longPressPanelViewModel;
@end
