@interface C2MetricOperationGroupOptions : NSObject
@property (nonatomic) NSString operationGroupId;
@property (nonatomic) NSString operationGroupName;
- (void)setOperationGroupName:;
- (id)operationGroupName;
- (id)operationGroupId;
- (void)setOperationGroupId:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
