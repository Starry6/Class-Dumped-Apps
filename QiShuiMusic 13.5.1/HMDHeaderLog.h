@interface HMDHeaderLog : NSObject
+ (id)hmdANRHeaderLogString;
+ (id)hmdCrashHeaderLogString;
+ (id)hmdExceptionFDHeaderLogString;
+ (id)hmdExceptionHeaderLogString;
+ (id)hmdExceptionProtectHeaderLogString;
+ (id)hmdHeaderLogString;
+ (id)hmdHeaderLogString:;
+ (id)hmdOOMHeaderLogString;
+ (id)hmdUserHeaderLogString;
+ (id)hmdWatchDogHeaderLogString;
@end
