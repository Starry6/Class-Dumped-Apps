@interface AWEECOMIMDateUtil : NSObject
+ (long long)ecomim_getDurationStartTime:endTime:;
+ (double)ecomim_currentTimestamp;
+ (BOOL)ecomim_isSameDay:Time2:;
+ (BOOL)ecomim_isSameYear:Time2:;
@end
