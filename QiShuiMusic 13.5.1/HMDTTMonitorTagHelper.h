@interface HMDTTMonitorTagHelper : NSObject
+ (long long)getMonitorTag;
+ (void)setMonitorTag:;
+ (void)setMonitorTagVerifyBlock:;
+ (BOOL)verifyMonitorTag:;
@end
