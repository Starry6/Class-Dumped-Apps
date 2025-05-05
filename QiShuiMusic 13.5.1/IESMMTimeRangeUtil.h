@interface IESMMTimeRangeUtil : NSObject
+ (id)getMaxTimeRange:andM2:;
+ (id)getMinTimeRange:andM2:;
+ (BOOL)isTimeRangeAfterTime:time:;
+ (BOOL)isTimeRangeContainsTime:time:;
+ (BOOL)isTimeRangeContainsTime:time:tolerance:;
@end
