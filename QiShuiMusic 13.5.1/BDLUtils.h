@interface BDLUtils : NSObject
+ (id)bdl_md5StringOfString:;
+ (void)event:params:;
+ (void)fatal:;
+ (void)logToSystem:;
+ (void)openSchema:;
+ (void)reportLog:;
+ (void)trackData:logTypeStr:;
+ (void)trackService:value:extra:;
+ (void)error:;
+ (void)info:;
+ (void)warn:;
@end
