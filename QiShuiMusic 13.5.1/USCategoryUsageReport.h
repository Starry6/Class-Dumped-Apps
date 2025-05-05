@interface USCategoryUsageReport : NSObject
@property (nonatomic) NSArray applicationUsage;
@property (nonatomic) NSString categoryIdentifier;
@property (nonatomic) double totalUsageTime;
@property (nonatomic) NSArray webUsage;
- (id)categoryIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (double)totalUsageTime;
- (id)applicationUsage;
- (id)webUsage;
- (id)initWithCategoryIdentifier:totalUsageTime:applicationUsage:webUsage:;
- (void)_usCategoryUsageReportCommonInitWithTotalUsageTime:applicationUsage:webUsage:;
- (void)setApplicationUsage:;
+ (BOOL)supportsSecureCoding;
@end
