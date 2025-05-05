@interface SSXPCServer : NSObject
- (id)init;
- (void)dealloc;
- (void)start;
- (void)_dispatchMessage:connection:;
- (id)initWithServiceName:entitlement:queue:;
- (void)removeObserver:selector:forMessage:;
- (void)_recordCoreAnalyticsEventForClient:andSelector:;
- (void)addObserver:selector:forMessage:;
- (id)initWithServiceName:;
+ (id)mainServer;
@end
