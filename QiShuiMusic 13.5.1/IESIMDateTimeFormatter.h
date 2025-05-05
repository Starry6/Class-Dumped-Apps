@interface IESIMDateTimeFormatter : NSObject
+ (id)dateFormatterWithYearForInsTime;
+ (id)_getWeekStringFromWeek:;
+ (id)commonTimeFormatter;
+ (id)dateFormatterForT;
+ (id)dateFormatterWithYear;
+ (id)dateFormatterWithYearForDiscoverDRelateHotSpot;
+ (id)dateFormatterWithYearForSearch;
+ (id)dateFormatterWithoutYear;
+ (id)dateFormatterWithoutYearForDiscoverDRelateHotSpot;
+ (id)dateFormatterWithoutYearForInsTime;
+ (id)formattedDateForDiscoverDRelatedHotSpotTimestamp:;
+ (id)formattedDateForInsStyleTimestamp:;
+ (id)formattedDateForSearchNewStyleTimestamp:;
+ (id)formattedDateForSearchTimestamp:;
+ (id)formattedDateForTSingleFeedTimestamp:;
+ (id)formattedDateForTimestamp:;
+ (id)formattedDateForTimestampForNotice:;
+ (id)timeFormatter;
@end
