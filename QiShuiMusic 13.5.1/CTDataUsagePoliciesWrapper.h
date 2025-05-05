@interface CTDataUsagePoliciesWrapper : NSObject
@property (nonatomic) NSSet policies;
- (id)policies;
- (id)initWithCoder:;
- (void)setPolicies:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)init:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
