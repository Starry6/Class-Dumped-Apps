@interface HMDPerformanceUploadSetting : HMDCommonAPISetting
@property (nonatomic) Q maxRetryCount;
@property (nonatomic) Q uploadInterval;
@property (nonatomic) Q onceMaxCount;
@property (nonatomic) Q reportFailBaseInterval;
@property (nonatomic) BOOL enableNetQualityReport;
@property (nonatomic) BOOL enableDowngradeByChannel;
- (BOOL)enableDowngradeByChannel;
- (BOOL)enableNetQualityReport;
- (unsigned long long)onceMaxCount;
- (unsigned long long)reportFailBaseInterval;
- (void)setEnableDowngradeByChannel:;
- (void)setEnableNetQualityReport:;
- (void)setOnceMaxCount:;
- (void)setReportFailBaseInterval:;
- (void)setUploadInterval:;
- (unsigned long long)uploadInterval;
- (unsigned long long)maxRetryCount;
- (void)setMaxRetryCount:;
+ (id)hmd_attributeMapDictionary;
@end
