@interface ASSCommon : NSObject
+ (BOOL)useURLWhitelist;
+ (id)getRPCURL;
+ (id)getServerHost;
+ (void)setupEnvironmentMode:;
@end
