@interface USWebUsageReport : NSObject
@property (nonatomic) NSString domainIdentifier;
@property (nonatomic) BOOL webUsageTrusted;
@property (nonatomic) double totalUsageTime;
@property (nonatomic) NSDictionary webUsageByDomain;
- (id)domainIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (double)totalUsageTime;
- (BOOL)webUsageTrusted;
- (id)webUsageByDomain;
- (id)initWithDomainIdentifier:totalUsageTime:webUsageByDomain:;
- (id)initWithDomainIdentifier:webUsageTrusted:totalUsageTime:webUsageByDomain:;
- (void)_usWebUsageReportCommonInitWithDomainIdentifier:webUsageTrusted:totalUsageTime:webUsageByDomain:;
+ (BOOL)supportsSecureCoding;
@end
