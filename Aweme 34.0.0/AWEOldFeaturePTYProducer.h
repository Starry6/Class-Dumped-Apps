@interface AWEOldFeaturePTYProducer : NSObject
@property (nonatomic) NSMutableDictionary configCache;
@property (nonatomic) NSLock configCacheLock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getStrFeature:extParams:;
- (float)getNumicFeature:extParams:;
- (id)getSeqFeature:extParams:;
- (id)getDictFeature:extParams:;
- (id)getHARSensorDataWithFeatureName:extParams:;
- (id)getFeaturesFromIESFCWithExtParams:;
- (id)configCacheLock;
- (id)configCache;
- (void)setConfigCache:;
- (void)setConfigCacheLock:;
- (id)init;
- (id)groupName;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
