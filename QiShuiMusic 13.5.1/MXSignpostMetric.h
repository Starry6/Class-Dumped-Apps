@interface MXSignpostMetric : MXMetric
@property (nonatomic) NSString signpostName;
@property (nonatomic) NSString signpostCategory;
@property (nonatomic) MXSignpostIntervalData signpostIntervalData;
@property (nonatomic) Q totalCount;
- (id)toDictionary;
- (id)signpostName;
- (unsigned long long)totalCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSignpostName:withSignpostCategory:withTotalCount:withSignpostIntervalData:;
- (id)signpostIntervalData;
- (id)signpostCategory;
+ (BOOL)supportsSecureCoding;
@end
