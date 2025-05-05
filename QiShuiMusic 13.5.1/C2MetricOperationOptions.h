@interface C2MetricOperationOptions : NSObject
@property (nonatomic) C2MetricOperationGroupOptions operationGroup;
@property (nonatomic) NSString operationId;
@property (nonatomic) NSString operationType;
- (id)operationType;
- (id)operationId;
- (void)setOperationType:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)operationGroup;
- (void)setOperationGroup:;
- (void).cxx_destruct;
- (void)setOperationId:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
