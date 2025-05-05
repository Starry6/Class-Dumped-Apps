@interface CTSweetgumPlanGroup : NSObject
@property (nonatomic) q planCategory;
@property (nonatomic) NSArray plans;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (long long)planCategory;
- (void)setPlanCategory:;
- (id)plans;
- (void)setPlans:;
+ (BOOL)supportsSecureCoding;
@end
