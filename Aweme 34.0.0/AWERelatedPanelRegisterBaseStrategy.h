@interface AWERelatedPanelRegisterBaseStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)dcFeedClientShouldShowDislikeVC;
- (BOOL)dcFeed:handleRouterEventWithType:awemeModel:;
- (Class)dcFeedCustomCell:context:;
- (id)dcFeedFeedClientShowTrackParams:;
- (id)dcFeedFeedClientClickTrackParams:;
- (id)dcFeedCustomTrackParams:event:;
- (id)customTopBarTitle;
- (id)businessDataController;
- (id)businessInnerDataController;
+ (id)elementClassArray;
+ (BOOL)shouldActiveWithAwemeModel:;
+ (long long)configType;
@end
