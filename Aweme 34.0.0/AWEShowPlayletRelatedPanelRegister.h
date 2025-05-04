@interface AWEShowPlayletRelatedPanelRegister : AWERelatedPanelRegisterBaseStrategy
- (BOOL)dcFeed:handleRouterEventWithType:awemeModel:;
- (Class)dcFeedCustomCell:context:;
- (id)dcFeedFeedClientShowTrackParams:;
- (id)dcFeedFeedClientClickTrackParams:;
- (id)dcFeedCustomTrackParams:event:;
- (id)customTopBarTitle;
- (id)businessDataController;
- (id)showTrackWithDictionary:;
- (id)showTrackerParams;
+ (id)elementClassArray;
+ (BOOL)shouldActiveWithAwemeModel:;
+ (long long)configType;
@end
