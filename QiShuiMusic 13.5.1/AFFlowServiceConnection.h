@interface AFFlowServiceConnection : NSObject
- (void)_clearConnection;
- (id)_connection;
- (void).cxx_destruct;
- (id)_init;
- (void)invokeMethodOnRemoteWithBlock:onError:;
+ (id)sharedConnection;
@end
