@interface SPIProcessUtils : NSObject
+ (int)getUsageForPid:withOutput:;
+ (id)getProcessNameForPid:;
+ (unsigned char)getProcessForPid:;
@end
