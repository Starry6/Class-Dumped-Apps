@interface LSDatabaseBlockingFetchClient : NSObject
- (id)initWithXPCConnection:;
- (void).cxx_destruct;
- (void)getServerStoreBlockingWithCompletionHandler:;
@end
