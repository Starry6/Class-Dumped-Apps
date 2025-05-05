@interface TSPKCallStackFilter : NSObject
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableDictionary callStackFilterInfo;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) BOOL isUpdating;
@property (nonatomic) <TSPKLock> lock;
- (id)callStackFilterInfo;
- (BOOL)checkAllowCallWithDataType:;
- (BOOL)fixRules;
- (void)fixWithCache;
- (void)parseInfoToRules:;
- (void)setCallStackFilterInfo:;
- (void)updateWithConfigs:;
- (BOOL)isUpdating;
- (void)setAppVersion:;
- (id)appVersion;
- (id)init;
- (BOOL)disableCache;
- (id)lock;
- (void).cxx_destruct;
- (void)setIsUpdating:;
- (void)setQueue:;
- (void)setDisableCache:;
- (id)queue;
- (void)setLock:;
+ (id)shared;
@end
