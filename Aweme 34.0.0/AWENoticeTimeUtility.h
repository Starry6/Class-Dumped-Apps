@interface AWENoticeTimeUtility : NSObject
+ (id)converTimeStampToTextForMessage:;
+ (id)convertTimeStampToShorterTextForMessage:withRecentSeconds:;
+ (id)formattedDateForTimestampForNotice:;
+ (id)timeLabelAccessibilityLabel:;
+ (id)getWeekStringFromWeek:;
+ (id)dateFormatterWithoutYear;
+ (id)dateFormatterWithYear;
+ (id)commonTimeFormatter;
+ (id)_getWeekStringFromWeek:;
+ (id)dateFormatterForD;
+ (id)timeFormatter;
@end
