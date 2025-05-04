@interface AWEPOINearbyHotStore : AWERxBaseStore
@property (nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> detailTableViewController;
@property (nonatomic) NSString poiID;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (nonatomic) AWERxReadonlyProperty feedList;
@property (nonatomic) AWERxReadonlyProperty dataController;
@property (nonatomic) AWERxReadonlyProperty hasMoreData;
@property (nonatomic) AWERxObservable nearbyEvent;
- (id)poiID;
- (void)setPoiID:;
- (BOOL)dispatchAction:completion:;
- (BOOL)setState:withValue:context:;
- (id)feedList;
- (id)detailTableViewController;
- (void)setDetailTableViewController:;
- (void)p_bindStateWithPrefetcher:;
- (void)p_initFetchWithContext:completion:;
- (void)p_loadMoreFeedWithContext:completion:;
- (id)initWithModule:prefetcher:;
- (id)nearbyEvent;
- (void)setLatitude:;
- (double)latitude;
- (void)setLongitude:;
- (double)longitude;
- (void).cxx_destruct;
- (id)hasMoreData;
- (id)dataController;
@end
