@interface ABUTNCServiceManager : NSObject
@property (nonatomic) NSMutableDictionary registerMap;
- (void)setRegisterMap:;
- (id)_TNCUrlWithBaseUrl:;
- (void)_refreshTNCDomainsWithAppKey:;
- (void)_registerTNCServiceWithAppKey:tncDomains:tncPath:requestParam:;
- (void)_unregisterTNCServiceWithAppKey:;
- (id)registerMap;
- (void).cxx_destruct;
+ (void)unregisterTNCServiceWithAppKey:;
+ (id)TNCUrlWithBaseUrl:;
+ (void)refreshTNCDomainsWithAppKey:;
+ (void)registerTNCServiceWithAppKey:tncDomains:tncPath:requestParam:;
+ (id)_shared;
@end
