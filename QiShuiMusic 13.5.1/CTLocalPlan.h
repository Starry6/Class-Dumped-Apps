@interface CTLocalPlan : CTPlan
@property (nonatomic) CTPlanIdentifier planID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPlanID:;
- (id)planID;
- (void)setPlanID:;
+ (BOOL)supportsSecureCoding;
@end
