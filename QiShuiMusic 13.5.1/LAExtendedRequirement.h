@interface LAExtendedRequirement : NSObject
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)encodeWithACLCoder:;
+ (id)applicationRemainsForegroundRequirement;
@end
