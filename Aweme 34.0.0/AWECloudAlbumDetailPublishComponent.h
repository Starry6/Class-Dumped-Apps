@interface AWECloudAlbumDetailPublishComponent : AWECloudAlbumDetailBaseComponent
@property (nonatomic) AWECloudAlbumDetailPublishViewModel viewModel;
@property (nonatomic) AWECloudAlbumDetailPublishProcessor publishProcessor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (id)publishContainerView;
- (id)serviceBinding;
- (id)publishProcessor;
- (id)downloadClient;
- (id)downloadTaskKey;
- (void)assetsPublishFinish;
- (void)setPublishProcessor:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
