@interface ASSCommonZZZX : NSObject
+ (BOOL)useURLWhitelist;
+ (BOOL)checkDeviceSystemVersion;
+ (int)getCurrentMode;
+ (id)getRPCHeader;
+ (id)getRPCURL;
+ (id)getRpcHeaderAppid;
+ (id)getRpcHeaderWorkspaceid;
+ (int)getSecuritySDKConfig;
+ (id)getServerHost;
+ (void)setRPCHeader:;
+ (void)setRpcHeaderAppid:;
+ (void)setRpcHeaderWorkspaceid:;
+ (void)setSecuritySDKConfig:;
+ (void)setupEnvironmentMode:;
+ (void)setupRPCAddress:;
@end
