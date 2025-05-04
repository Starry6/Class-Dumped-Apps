@interface AWEPzDomainDataControl : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) AWEPzDomainModel config;
@property (nonatomic) NSHashTable observerTable;
@property (nonatomic) BOOL hasLoadConfig;
@property (nonatomic) q lastResponseResult;
@property (nonatomic) BOOL configFromHotSwitch;
@property (nonatomic) NSMutableArray waitingQueue;
- (id)waitingQueue;
- (void)setWaitingQueue:;
- (void)setObserverTable:;
- (BOOL)hasLoadConfig;
- (void)setHasLoadConfig:;
- (long long)lastResponseResult;
- (void)setLastResponseResult:;
- (BOOL)configFromHotSwitch;
- (void)setConfigFromHotSwitch:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)observerTable;
@end
