@interface HMDANRRecord : HMDTrackerRecord
@property (nonatomic) NSString anrLogStr;
@property (nonatomic) Q anrTime;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double freeMemoryUsage;
@property (nonatomic) double freeDiskUsage;
@property (nonatomic) q freeDiskBlockSize;
@property (nonatomic) NSDictionary customParams;
@property (nonatomic) NSString business;
@property (nonatomic) NSDictionary filters;
@property (nonatomic) q blockDuration;
@property (nonatomic) NSString access;
@property (nonatomic) NSString lastScene;
@property (nonatomic) BOOL isEnableSample;
@property (nonatomic) BOOL isSampleHit;
@property (nonatomic) BOOL isLaunch;
@property (nonatomic) NSDictionary operationTrace;
@property (nonatomic) NSDictionary settings;
@property (nonatomic) NSArray flameGraph;
@property (nonatomic) NSDictionary binaryImages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)anrTime;
- (id)JSONForObject:;
- (double)freeMemoryUsage;
- (void)setIsSampleHit:;
- (id)anrLogStr;
- (long long)blockDuration;
- (id)customParams;
- (id)flameGraph;
- (long long)freeDiskBlockSize;
- (double)freeDiskUsage;
- (id)generateANRLogStringWithStack:;
- (BOOL)isEnableSample;
- (BOOL)isSampleHit;
- (id)operationTrace;
- (void)setAnrLogStr:;
- (void)setAnrTime:;
- (void)setBinaryImages:;
- (void)setBlockDuration:;
- (void)setCustomParams:;
- (void)setFlameGraph:;
- (void)setFreeDiskBlockSize:;
- (void)setFreeDiskUsage:;
- (void)setFreeMemoryUsage:;
- (void)setIsEnableSample:;
- (void)setLastScene:;
- (void)setOperationTrace:;
- (id)filters;
- (id)access;
- (id)binaryImages;
- (id)settings;
- (void)setSettings:;
- (void)setFilters:;
- (void)setAccess:;
- (void).cxx_destruct;
- (id)lastScene;
- (void)setMemoryUsage:;
- (double)memoryUsage;
- (id)business;
- (void)setBusiness:;
- (BOOL)isLaunch;
- (void)setIsLaunch:;
- (id)reportDictionary;
+ (id)bg_ignoreKeys;
+ (id)tableName;
@end
