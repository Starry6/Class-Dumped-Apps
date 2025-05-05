@interface BLSDisableAlwaysOnHoldGestureAttribute : BLSAttribute
- (BOOL)checkEntitlementSourceForRequiredEntitlements:error:;
+ (id)disableHoldGesture;
@end
