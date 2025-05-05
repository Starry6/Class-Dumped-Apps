@interface NRRegistryProxy : NRXPCProxy
- (void)xpcGetDeviceCollectionWithBlock:;
- (void)xpcGetDiffSinceTokenValue:getSecureProperties:withBlock:;
- (void)xpcRetrieveSecureProperties:block:;
- (void)xpcGetChangeHistoryWithBlock:;
- (void)xpcSwitchIndex:;
- (void)xpcDeviceIDAtSwitchIndex:withBlock:;
- (void)xpcClientInfo:;
- (void)xpcApplyDiff:withSecureProperties:block:;
- (void)xpcSetMigrationConsented:forDeviceID:withBlock:;
- (id)registryDelegate;
- (BOOL)loudHasEntitlement:;
- (BOOL)_hasInternalEntitlement;
- (void)logCaller:args:;
+ (id)entitlements;
+ (id)machServiceName;
+ (id)serverExportedInterface;
+ (id)clientRemoteObjectInterface;
+ (BOOL)requireAnEntitlement;
@end
