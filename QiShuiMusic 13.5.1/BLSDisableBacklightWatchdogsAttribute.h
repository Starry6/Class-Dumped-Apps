@interface BLSDisableBacklightWatchdogsAttribute : BLSAttribute
- (BOOL)checkEntitlementSourceForRequiredEntitlements:error:;
+ (id)disableWatchdogs;
@end
