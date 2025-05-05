@interface STWebUsageController : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
- (id)init;
- (void)dealloc;
- (id)xpcConnection;
- (void).cxx_destruct;
- (void)deleteAllWebHistoryForApplication:completionHandler:;
- (void)deleteWebHistoryDuringInterval:application:completionHandler:;
- (void)deleteWebHistoryForURL:application:completionHandler:;
- (void)deleteWebHistoryForURLs:application:completionHandler:;
- (void)_asynchronousProxyWithHandler:;
- (void)deleteWebHistoryForDomain:application:completionHandler:;
@end
