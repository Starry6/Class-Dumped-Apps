@interface CTPlanBillingDetails : NSObject
@property (nonatomic) NSString planName;
@property (nonatomic) NSNumber planCost;
@property (nonatomic) NSString planCurrency;
@property (nonatomic) NSNumber planDataAmount;
@property (nonatomic) Q planDataMeasureUnit;
@property (nonatomic) Q planType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (unsigned long long)planType;
- (id)initWithName:PlanCost:PlanCurrency:PlanDataAmount:PlanDataMeasureUnit:PlanType:;
- (id)planName;
- (id)planCost;
- (id)planCurrency;
- (id)planDataAmount;
- (unsigned long long)planDataMeasureUnit;
+ (BOOL)supportsSecureCoding;
@end
