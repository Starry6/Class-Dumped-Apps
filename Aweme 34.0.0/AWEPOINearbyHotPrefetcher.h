@interface AWEPOINearbyHotPrefetcher : NSObject
@property (nonatomic) AWEPOINearbyHotListDataResponse prefetchedReponse;
@property (nonatomic) NSError error;
@property (nonatomic) <AWEHttpTask> currentTask;
- (void)prefetchWithPOIID:completion:;
- (void)fetchResponse:;
- (void)setPrefetchedReponse:;
- (id)prefetchedReponse;
- (void)setError:;
- (id)currentTask;
- (void)setCurrentTask:;
- (void)clear;
- (void).cxx_destruct;
- (id)error;
@end
