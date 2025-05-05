@interface ABUTNCNetwork : NSObject
@property (nonatomic) NSMutableDictionary requestMap;
@property (nonatomic) NSMutableDictionary failDomains;
@property (nonatomic) double lastTimeInterval;
@property (nonatomic) NSLock lock;
@property (nonatomic) NSDictionary domains;
- (void)setFailDomains:;
- (id)failDomains;
- (void)getDomainsWithConfig:andCompletion:;
- (void)handleFailRequest:;
- (double)lastTimeInterval;
- (BOOL)recordFailCountDomain:;
- (id)requestMap;
- (void)setLastTimeInterval:;
- (void)setRequestMap:;
- (void)updateDomains:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setDomains:;
- (id)domains;
- (void)setLock:;
+ (id)defaultPersistence;
+ (id)sharedInstance;
@end
