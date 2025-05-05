@interface BLSDisableAlwaysOnHoldThroughAttribute : BLSAttribute
- (BOOL)checkEntitlementSourceForRequiredEntitlements:error:;
+ (id)disableHoldThrough;
@end
