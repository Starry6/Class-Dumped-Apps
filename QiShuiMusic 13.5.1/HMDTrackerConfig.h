@interface HMDTrackerConfig : HMDModuleConfig
@property (nonatomic) float flushInterval;
@property (nonatomic) q flushCount;
- (long long)flushCount;
- (void)setFlushCount:;
- (void)setFlushInterval:;
- (float)flushInterval;
+ (id)hmd_attributeMapDictionary;
@end
