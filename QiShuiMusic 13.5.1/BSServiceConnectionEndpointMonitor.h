@interface BSServiceConnectionEndpointMonitor : NSObject
@property (nonatomic) NSString service;
@property (nonatomic) <BSServiceConnectionEndpointMonitorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)service;
- (id)endpointsForEnvironment:;
- (void)serialCallOut_didUpdateEndpointEnvironments:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)activate;
+ (id)monitorForService:;
@end
