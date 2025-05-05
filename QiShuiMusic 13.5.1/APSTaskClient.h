@interface APSTaskClient : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEnvironment:queue:;
- (void)_clearOutstandingTasks:;
- (id)_findDNSRequestForHostname:;
- (void)_timeoutOutstandingRequests;
- (id)resolveDNS:;
@end
