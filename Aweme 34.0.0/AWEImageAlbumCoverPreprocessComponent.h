@interface AWEImageAlbumCoverPreprocessComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditServiceProtocol> editService;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)editService;
- (void)setEditService:;
- (void).cxx_destruct;
@end
