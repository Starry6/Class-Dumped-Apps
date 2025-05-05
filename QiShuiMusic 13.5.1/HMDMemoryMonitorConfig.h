@interface HMDMemoryMonitorConfig : HMDMonitorConfig
@property (nonatomic) BOOL enableNotify;
@property (nonatomic) Q notifyMinInterval;
@property (nonatomic) double highWaterPercentage;
- (BOOL)enableNotify;
- (id)getModule;
- (double)highWaterPercentage;
- (unsigned long long)notifyMinInterval;
- (void)setEnableNotify:;
- (void)setHighWaterPercentage:;
- (void)setNotifyMinInterval:;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
