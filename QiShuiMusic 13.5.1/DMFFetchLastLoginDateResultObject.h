@interface DMFFetchLastLoginDateResultObject : CATTaskResultObject
@property (nonatomic) NSDictionary lastLoginDatesByAppleID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithDatesByAppleID:;
- (id)lastLoginDatesByAppleID;
+ (BOOL)supportsSecureCoding;
@end
