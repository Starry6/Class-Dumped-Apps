@interface CTDisplayPlanList : NSObject
@property (nonatomic) NSArray plans;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)plans;
- (id)initWithDisplayPlans:;
+ (BOOL)supportsSecureCoding;
@end
