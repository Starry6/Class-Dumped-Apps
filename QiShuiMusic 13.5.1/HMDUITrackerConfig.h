@interface HMDUITrackerConfig : HMDModuleConfig
@property (nonatomic) q flushCount;
@property (nonatomic) double flushInterval;
@property (nonatomic) q maxUploadCount;
@property (nonatomic) Q recentAccessScenesLimit;
@property (nonatomic) BOOL ISASwizzleOptimization;
- (BOOL)ISASwizzleOptimization;
- (long long)flushCount;
- (id)getModule;
- (long long)maxUploadCount;
- (unsigned long long)recentAccessScenesLimit;
- (void)setFlushCount:;
- (void)setFlushInterval:;
- (void)setISASwizzleOptimization:;
- (void)setMaxUploadCount:;
- (void)setRecentAccessScenesLimit:;
- (double)flushInterval;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
