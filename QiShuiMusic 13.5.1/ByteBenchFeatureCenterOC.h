@interface ByteBenchFeatureCenterOC : NSObject
@property (nonatomic) NSMutableSet eventSet;
- (void)configEventFilter;
- (id)eventSet;
- (void)setEventSet:;
- (id)init;
- (void).cxx_destruct;
+ (void)registerFeatureComponent:;
+ (void)registerFeaturePool:poolName:;
+ (void)registerFeatureProcessConfig:;
+ (void)setEventSource:param:;
+ (void)setFloatValue:value:group:;
+ (void)setStringValue:value:group:;
+ (void)unregisterFeaturePool:;
+ (void)unregisterFeaturePool:levelName:;
+ (void)updateFeatureDoubleValue:forKey:;
+ (void)updateFeatureStringValue:forKey:;
+ (id)sharedInstance;
@end
