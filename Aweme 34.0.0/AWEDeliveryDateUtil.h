@interface AWEDeliveryDateUtil : NSObject
+ (long long)awed_getDurationStartTime:endTime:;
+ (double)awed_currentTimestamp;
+ (id)awed_accurateDate;
+ (BOOL)awed_isSameYear:Time2:;
+ (BOOL)awed_isSameDay:Time2:;
+ (double)standardTimestamp:;
+ (BOOL)awed_isSameMonth:Time2:;
+ (id)awed_dateStringWithFormat:date:;
@end
