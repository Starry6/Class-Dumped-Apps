@interface ENRegionServerExposureConfiguration : NSObject
@property (nonatomic) NSString appBundleIdentifier;
@property (nonatomic) NSArray classificationCriteria;
@property (nonatomic) NSDictionary exposureConfigurationValues;
@property (nonatomic) BOOL enableRecursiveReportType;
@property (nonatomic) BOOL matchingRestrictedToRegion;
@property (nonatomic) double privacyParameterInputCandenceInterval;
- (id)initWithServerResponseDictionary:;
- (id)initWithCoder:;
- (id)appBundleIdentifier;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (double)privacyParameterInputCandenceInterval;
- (id)exposureConfigurationValues;
- (BOOL)enableRecursiveReportType;
- (id)classificationCriteria;
- (id)classificationCriteriaForName:;
- (BOOL)matchingRestrictedToRegion;
+ (BOOL)supportsSecureCoding;
@end
