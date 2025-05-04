@interface AWEPzDomainManager : NSObject
@property (nonatomic) NSMutableDictionary domainRegisterMap;
@property (nonatomic) NSMutableDictionary domainMap;
- (id)generateEngineWithDomainName:config:;
- (BOOL)isDomainRegister:;
- (id)getAllRegisterDomains;
- (void)registerAllDomains;
- (void)registerDomainWithRegisterModel:;
- (id)domainRegisterMap;
- (id)getDomainWithDomainName:;
- (id)domainMap;
- (void)setDomainRegisterMap:;
- (void)setDomainMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
