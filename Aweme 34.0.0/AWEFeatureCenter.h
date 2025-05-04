@interface AWEFeatureCenter : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
@property (nonatomic) NSMutableDictionary instanceConfigDictionary;
@property (nonatomic) NSMutableOrderedSet commonContext;
- (id)instanceConfigDictionary;
- (id)featureForIdentifier:withContext:;
- (id)recognizeDIProperty:;
- (void)addCommonContext:;
- (void)setInstanceConfigDictionary:;
- (BOOL)registerClass:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (id)commonContext;
- (void)setCommonContext:;
+ (id)es_defaultCenter;
+ (id)shareInstance;
@end
