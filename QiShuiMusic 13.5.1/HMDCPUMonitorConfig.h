@interface HMDCPUMonitorConfig : HMDMonitorConfig
@property (nonatomic) BOOL enableThreadCPU;
- (BOOL)enableThreadCPU;
- (id)getModule;
- (void)setEnableThreadCPU:;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
