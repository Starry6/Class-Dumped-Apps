@interface AWERVExposedMixInfoViewModel : NSObject
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) NSMutableSet episodeShowSet;
@property (nonatomic) AWEListDataController<AWEMixVideoDetailPlayListDataControllerProtocol> subDataController;
@property (nonatomic) q strengthenMixInfoLoadCount;
- (id)createDataController;
- (void)setSubDataController:;
- (id)subDataController;
- (id)initWithPageContext:;
- (void)updateDataControllerWithModel:;
- (long long)strengthenMixInfoLoadCount;
- (void)setStrengthenMixInfoLoadCount:;
- (void)trackCompilationEpisodeSlideWithModel:;
- (void)trackCompilationEpisodeClickWithSelectModel:;
- (void)trackCompilationEpisodeShowWithModel:;
- (id)episodeShowSet;
- (void)setEpisodeShowSet:;
- (void).cxx_destruct;
- (void)reset;
- (void)setPageContext:;
- (id)pageContext;
@end
