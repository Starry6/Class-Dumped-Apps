@interface BDUGLuckyXBridgeMethod : BDXBridgeMethod
- (long long)authType;
- (unsigned long long)engineTypes;
+ (id)bridgeEngineTypeSettings;
+ (void)initBridgeEngineTypeSettings;
+ (void)sdkSettingsUpdate;
@end
