@interface AWELunaMusicAnchorComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditMusicServiceProtocol> musicService;
- (void)componentDidMount;
- (void)bindViewModel;
- (id)musicService;
- (void)setMusicService:;
- (void)shouldAddLunaMusicAnchor;
- (void).cxx_destruct;
@end
