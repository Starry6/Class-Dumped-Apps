@interface AWEPOIUGCPictureEditComponent : ACCFeatureComponent
@property (nonatomic) <ACCStickerServiceProtocol> stickerService;
@property (nonatomic) ACCStickerContainerView stickerContainer;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)setStickerContainer:;
- (id)stickerContainer;
- (id)stickerService;
- (void)setStickerService:;
- (void)p_trackImageAlbumDidShow;
- (void).cxx_destruct;
@end
