@interface HMDStartDetectorConfig : HMDModuleConfig
@property (nonatomic) BOOL detectCPPInitializer;
@property (nonatomic) BOOL detectLoad;
- (BOOL)detectCPPInitializer;
- (BOOL)detectLoad;
- (id)getModule;
- (void)setDetectCPPInitializer:;
- (void)setDetectLoad:;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
