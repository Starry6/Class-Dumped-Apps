@interface BUTNCServiceManager : NSObject
@property (nonatomic) NSMutableDictionary registerMap;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
- (void)setRegisterMap:;
- (id)_TNCUrlWithBaseUrl:forRequest:;
- (void)_refreshTNCDomainsWithAppKey:;
- (void)_registerTNCServiceWithAppKey:tncDomains:tncPath:requestParam:;
- (void)_unregisterTNCServiceWithAppKey:;
- (id)registerMap;
- (id)init;
- (void)setSemaphore:;
- (void).cxx_destruct;
- (id)semaphore;
+ (void)unregisterTNCServiceWithAppKey:;
+ (id)TNCUrlWithBaseUrl:forRequest:;
+ (void)refreshTNCDomainsWithAppKey:;
+ (void)registerTNCServiceWithAppKey:tncDomains:tncPath:requestParam:;
+ (id)sharedInstance;
@end
