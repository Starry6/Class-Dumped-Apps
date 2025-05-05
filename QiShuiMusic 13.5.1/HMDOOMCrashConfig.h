@interface HMDOOMCrashConfig : HMDTrackerConfig
@property (nonatomic) double updateSystemStateInterval;
@property (nonatomic) double memoryPressureValidInterval;
@property (nonatomic) BOOL isFixNoDataMisjudgment;
@property (nonatomic) BOOL isNeedBinaryInfo;
- (void)setMemoryPressureValidInterval:;
- (BOOL)enableUpload;
- (id)getModule;
- (BOOL)isFixNoDataMisjudgment;
- (BOOL)isNeedBinaryInfo;
- (double)memoryPressureValidInterval;
- (void)setIsFixNoDataMisjudgment:;
- (void)setIsNeedBinaryInfo:;
- (void)setUpdateSystemStateInterval:;
- (double)updateSystemStateInterval;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
