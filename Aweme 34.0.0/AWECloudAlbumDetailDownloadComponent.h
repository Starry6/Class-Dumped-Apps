@interface AWECloudAlbumDetailDownloadComponent : AWECloudAlbumDetailBaseComponent
@property (nonatomic) <AWECloudAlbumDetailAlertServiceProtocol> alertService;
@property (nonatomic) AWECloudAlbumDetailDownloadViewModel viewModel;
@property (nonatomic) AWECloudAlbumDetailDownloadHandler handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (id)alertService;
- (id)serviceBinding;
- (void)setAlertService:;
- (void)download_shouldExitSelectMode;
- (id)download_client;
- (id)download_taskKey;
- (id)download_containerView;
- (id)download_createAlertView;
- (void)setHandler:;
- (id)viewModel;
- (id)handler;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
