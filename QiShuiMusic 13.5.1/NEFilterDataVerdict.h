@interface NEFilterDataVerdict : NEFilterVerdict
@property (nonatomic) Q passBytes;
@property (nonatomic) Q peekBytes;
@property (nonatomic) q statisticsReportFrequency;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (long long)filterAction;
- (long long)statisticsReportFrequency;
- (void)setStatisticsReportFrequency:;
- (unsigned long long)passBytes;
- (void)setPassBytes:;
- (unsigned long long)peekBytes;
- (void)setPeekBytes:;
+ (BOOL)supportsSecureCoding;
+ (id)needRulesVerdict;
+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:remediationButtonTextMapKey:;
+ (id)dataVerdictWithPassBytes:peekBytes:;
+ (id)pauseVerdict;
@end
