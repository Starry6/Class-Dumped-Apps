@interface MKLocalSearch : NSObject
@property (nonatomic) BOOL searching;
- (id)initWithRequest:;
- (id)init;
- (void)cancel;
- (void)startWithCompletionHandler:;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (id)initWithPointsOfInterestRequest:;
- (void)_startWithCompletionHandler:queue:;
- (id)_ticketForSearchRequest:;
- (void)_startPointsOfInterestFetchWithCompletionHandler:queue:;
- (void)_handleMapItems:boundingRegion:error:withCompletionHandler:;
- (void)_phoneOnlyStartWithCompletionHandler:queue:;
@end
