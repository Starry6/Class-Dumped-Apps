@interface TVLTool : NSObject
+ (BOOL)checkLicenseFeature:;
+ (id)parseStreamNameFromURL:;
+ (id)parse_SEI:;
+ (void)reportALog:tag:message:;
+ (void)setALogCallback:;
+ (void)setShouldDynamicChangeLogCallbackValue:;
+ (long long)sumIntArray:;
+ (void)swizzleForClass:oriSEL:fromClass:newSEL:;
+ (void)setLogLevel:;
+ (void)setShouldLogToConsole:;
@end
