@interface AWEShowLongVideoRelatedPanelRegister : AWERelatedPanelRegisterBaseStrategy
@property (nonatomic) AWEAwemeModel currentPanelModel;
- (BOOL)dcFeedClientShouldShowDislikeVC;
- (BOOL)dcFeed:handleRouterEventWithType:awemeModel:;
- (Class)dcFeedCustomCell:context:;
- (id)dcFeedFeedClientShowTrackParams:;
- (id)dcFeedFeedClientClickTrackParams:;
- (id)dcFeedCustomTrackParams:event:;
- (id)customTopBarTitle;
- (id)businessDataController;
- (id)currentPanelModel;
- (id)currentPanelPublicWithModel:;
- (void)setCurrentPanelModel:;
- (id)currentCellCardWithModel:;
- (void).cxx_destruct;
+ (id)elementClassArray;
+ (BOOL)shouldActiveWithAwemeModel:;
+ (long long)configType;
@end
