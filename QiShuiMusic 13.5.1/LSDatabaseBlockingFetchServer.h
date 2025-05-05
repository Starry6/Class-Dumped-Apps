@interface LSDatabaseBlockingFetchServer : NSObject
- (void)startRunningIfNecessary;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)_init;
- (id)getEndpoint;
+ (id)sharedInstance;
@end
