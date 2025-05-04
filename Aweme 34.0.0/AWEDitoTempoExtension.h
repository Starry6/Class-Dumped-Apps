@interface AWEDitoTempoExtension : AWEPOIBaseExtension
@property (nonatomic) NSMutableSet willDoCacheTags;
@property (nonatomic) TempoEngine tempoEngine;
@property (nonatomic) NSMutableDictionary preloadURLS;
- (id)preloadConfigs;
- (void)didLoadPageModel:;
- (void)componentViewModelDidCreated:;
- (void)initializeExtension;
- (void)setupTempoConfig;
- (double)fontScaleForTempo;
- (void)setTempoEngine:;
- (id)willDoCacheTags;
- (id)preloadURLS;
- (id)tempoEngine;
- (id)poiPreloadURLRuleWithBizCode:;
- (void)setWillDoCacheTags:;
- (void)setPreloadURLS:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
