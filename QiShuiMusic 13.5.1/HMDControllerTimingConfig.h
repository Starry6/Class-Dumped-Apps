@interface HMDControllerTimingConfig : HMDModuleConfig
@property (nonatomic) float flushInterval;
@property (nonatomic) q flushCount;
- (long long)flushCount;
- (id)getModule;
- (void)setFlushCount:;
- (void)setFlushInterval:;
- (float)flushInterval;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
