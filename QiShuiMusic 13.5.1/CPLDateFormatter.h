@interface CPLDateFormatter : NSObject
+ (id)dateFromString:;
+ (id)stringFromDateAgo:now:;
+ (id)stringFromDate:;
+ (id)stringForTimeIntervalAgo:now:;
+ (id)_formatter;
+ (id)stringForTimeInterval:;
@end
