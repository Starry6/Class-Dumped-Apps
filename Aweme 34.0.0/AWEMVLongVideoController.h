@interface AWEMVLongVideoController : AWEDCFeedBaseController
@property (nonatomic) AWEAwemeModel updatedModel;
@property (nonatomic) NSMutableDictionary mixDataControllers;
- (id)mvPageContext;
- (id)updatedModel;
- (void)setUpdatedModel:;
- (void)preloadNextEpisodeModelWithAweme:useCache:;
- (void)updateContinueModelForModel:;
- (void)fetchNextEpisodeModelWithAweme:ancestorModel:;
- (id)getMixDataControllerForMix:;
- (id)filterInvalidAweme:;
- (id)mixDataControllers;
- (void)setMixDataControllers:;
- (void).cxx_destruct;
- (void)containerViewDidLoad;
@end
