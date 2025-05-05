@interface PuzzlePrefetchCapability : NSObject
@property (nonatomic) PuzzlePrefetchCacheManager storage;
@property (nonatomic) <PuzzleLogServiceProtocol> logService;
@property (nonatomic) NSArray disableMonitorServices;
@property (nonatomic) NSString businessKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)customConfigForProject:version:;
- (void)setBusinessKey:;
- (id)businessKey;
- (id)customCacheStorage;
- (id)disableMonitorServices;
- (id)envVariables;
- (id)logService;
- (void)monitorService:metric:category:extra:;
- (void)networkForRequest:completion:;
- (void)setDisableMonitorServices:;
- (void)setLogService:;
- (void)trackPrefetchErrorEvent:category:extra:;
- (void)setStorage:;
- (id)storage;
- (void).cxx_destruct;
- (id)initWithBusiness:;
+ (id)registCapabilityForBusiness:;
@end
