@interface CNDate : NSObject
+ (id)gmtGregorianCalendar;
+ (id)gmtJapaneseCalendar;
+ (id)gmtBuddhistCalendar;
+ (id)gmtIslamicCalendar;
+ (id)gmtChineseCalendar;
+ (id)dateFromDayComponents:;
+ (id)dayComponentsFromDate:;
@end
