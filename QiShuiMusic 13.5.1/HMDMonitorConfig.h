@interface HMDMonitorConfig : HMDModuleConfig
@property (nonatomic) float flushInterval;
@property (nonatomic) float flushCount;
@property (nonatomic) float refreshInterval;
@property (nonatomic) NSDictionary customEnableUpload;
- (id)customEnableUpload;
- (float)flushCount;
- (void)setCustomEnableUpload:;
- (void)setFlushCount:;
- (void)setFlushInterval:;
- (float)flushInterval;
- (float)refreshInterval;
- (void).cxx_destruct;
- (void)setRefreshInterval:;
+ (id)hmd_attributeMapDictionary;
@end
