@interface AWEShowMonetizeCommonRefresher : NSObject
@property (nonatomic) <AWEFeedPreloadManagerProtocol> preloadManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestAwemeItemWithID:completion:;
- (void)requestAwemeItemsWithIDs:completion:;
- (id)preloadManager;
- (void)setPreloadManager:;
- (id)customRequestParamsWithInfo:;
- (void)refreshMonetizeContentWithAwemes:info:forMonetizeSceneContainers:;
- (void)refreshMonetizeContentWithInfo:;
- (void)trackMonetizeLinkResultWithErrorCode:errorMsg:subErrorCode:awemeParams:info:monetizeSceneContainer:extraParams:;
- (void)trackMonetizeNodeWithName:awemeParams:info:monetizeSceneContainer:extraParams:;
- (void)trackMonetizeNodeWithName:aweme:info:monetizeSceneContainer:extraParams:;
- (void)trackMonetizeLinkResultWithErrorCode:errorMsg:subErrorCode:aweme:info:monetizeSceneContainer:extraParams:;
- (void)trackMonetizeWithCurrentMonetizeSceneContainer:info:extraParams:trackHandler:;
- (id)getExtraNormalPriorityItemIDsWithInfo:refreshedMonetizeData:;
- (void)trackRefreshResultWithInfo:awemes:error:logID:monetizeSceneContainer:;
- (id)init;
- (void).cxx_destruct;
@end
