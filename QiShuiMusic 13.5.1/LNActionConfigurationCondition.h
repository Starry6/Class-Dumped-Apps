@interface LNActionConfigurationCondition : NSObject
@property (nonatomic) NSString parameterIdentifier;
@property (nonatomic) q comparisonOperator;
@property (nonatomic) LNValue value;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithParameterIdentifier:comparisonOperator:value:;
- (id)parameterIdentifier;
- (long long)comparisonOperator;
+ (BOOL)supportsSecureCoding;
@end
