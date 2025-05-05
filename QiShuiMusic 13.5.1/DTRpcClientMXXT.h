@interface DTRpcClientMXXT : NSObject
@property (nonatomic) NSOperationQueue requestQueue;
@property (nonatomic) DTRpcConfigManagerMXXT configManager;
@property (nonatomic) NSMutableArray interceptors;
@property (nonatomic) NSLock lock;
- (void)addInterceptor:;
- (id)preferredConfig;
- (id)configForScope:;
- (void)cancelAllOperationsInThread:;
- (id)executeMethod:params:;
- (id)executeMethodAsync:params:completionBlock:;
- (id)interceptors;
- (id)preferredConfig:;
- (void)setConfig:forScope:;
- (void)setInterceptors:;
- (void)setRequestQueue:;
- (id)requestQueue;
- (id)lock;
- (id)configManager;
- (void).cxx_destruct;
- (void)setLock:;
- (void)setConfigManager:;
- (id)executeOperation:;
+ (id)defaultClient;
@end
