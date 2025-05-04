@interface AWEDataLayerNetworkRequestRetryManager : NSObject
@property (nonatomic) NSMutableDictionary requestsMap;
@property (nonatomic) <AWEDataLayerNetworkRequestRetryManagerDelegate> delegate;
- (id)requestsMap;
- (void)setRequestsMap:;
- (void)enqueueRetryRequest:;
- (void)retryTimerTrigger:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
+ (id)sharedManager;
@end
