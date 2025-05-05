@interface HMDLaunchTimingConfig : HMDModuleConfig
@property (nonatomic) BOOL enableCollectPerf;
@property (nonatomic) BOOL enableCollectNet;
- (BOOL)enableCollectNet;
- (BOOL)enableCollectPerf;
- (id)getModule;
- (void)setEnableCollectNet:;
- (void)setEnableCollectPerf:;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
