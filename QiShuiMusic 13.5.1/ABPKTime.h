@interface ABPKTime : NSObject
+ (unsigned long long)nowAsMachAbsoluteTime;
+ (double)nowInSeconds;
+ (double)machAbsoluteTimeToSeconds:;
+ (double)CMTimeToSeconds:;
@end
