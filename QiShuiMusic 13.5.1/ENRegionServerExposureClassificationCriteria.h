@interface ENRegionServerExposureClassificationCriteria : NSObject
@property (nonatomic) NSString classificationName;
@property (nonatomic) C index;
@property (nonatomic) I perDaySumERVThreshold;
@property (nonatomic) I perDayMaxERVThreshold;
@property (nonatomic) NSDictionary perDaySumERVThresholdsByDiagnosisReportType;
@property (nonatomic) I weightedDurationAtAttenuationThreshold;
- (id)initWithCoder:;
- (unsigned char)index;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)classificationName;
- (unsigned int)perDayMaxERVThreshold;
- (unsigned int)perDaySumERVThreshold;
- (id)perDaySumERVThresholdsByDiagnosisReportType;
- (unsigned int)weightedDurationAtAttenuationThreshold;
+ (BOOL)supportsSecureCoding;
+ (BOOL)getCriteria:fromDictionary:index:;
@end
