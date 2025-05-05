@interface CTPlanList : NSObject
@property (nonatomic) NSArray plans;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)plans;
- (id)initWithPlans:;
+ (BOOL)supportsSecureCoding;
@end
