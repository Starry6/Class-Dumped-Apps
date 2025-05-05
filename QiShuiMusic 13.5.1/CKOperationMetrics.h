@interface CKOperationMetrics : NSObject
@property (nonatomic) CKMetric cloudKitMetrics;
@property (nonatomic) CKMetric MMCSMetrics;
- (void)setCloudKitMetrics:;
- (id)initWithCoder:;
- (id)MMCSMetrics;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (id)cloudKitMetrics;
- (void).cxx_destruct;
- (id)description;
- (void)setMMCSMetrics:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
