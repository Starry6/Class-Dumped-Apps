@interface LABiometryFallbackRequirement : NSObject
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (void)encodeWithACLCoder:;
+ (id)defaultRequirement;
+ (id)devicePasscodeRequirement;
+ (id)customPasswordRequirement:;
@end
