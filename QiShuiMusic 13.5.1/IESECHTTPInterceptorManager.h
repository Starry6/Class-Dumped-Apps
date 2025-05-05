@interface IESECHTTPInterceptorManager : NSObject
@property (nonatomic) NSMutableArray registeredInterceptors;
@property (nonatomic) # globalInterceptor;
@property (nonatomic) NSSet interceptorBlackList;
- (Class)globalInterceptor;
- (id)interceptorBlackList;
- (id)registeredInterceptors;
- (void)setGlobalInterceptor:;
- (void)setInterceptorBlackList:;
- (void)setRegisteredInterceptors:;
- (id)init;
- (void).cxx_destruct;
+ (void)executeInterceptorIfNeedWithRequest:modelClass:;
+ (id)getApiPathWithHttpURL:;
+ (BOOL)isInterceptorInBlacklist:;
+ (void)registerInterceptor:isGlobal:;
+ (void)unregisterInterceptor:;
+ (id)sharedInstance;
@end
