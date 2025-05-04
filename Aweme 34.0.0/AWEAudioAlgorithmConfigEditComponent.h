@interface AWEAudioAlgorithmConfigEditComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCEditAudioEffectProtocolD> audioService;
- (void)componentDidMount;
- (id)editService;
- (void)setEditService:;
- (void)bindServices:;
- (id)audioService;
- (void)setAudioService:;
- (void)p_configAudioBalance;
- (id)p_balanceFilterForAverageVolume:peakVolume:targetVolume:;
- (void).cxx_destruct;
@end
