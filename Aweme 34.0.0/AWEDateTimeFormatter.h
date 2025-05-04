@interface AWEDateTimeFormatter : NSObject
+ (id)formattedDateForTimestampForNotice:;
+ (id)formattedDateForTimestamp:;
+ (id)formattedDateForInsStyleTimestamp:;
+ (id)formattedDateForSearchTimestamp:;
+ (id)formattedDateForDiscoverDRelatedHotSpotTimestamp:;
+ (id)dateFormatterWithoutYearForInsTime;
+ (id)dateFormatterWithYearForInsTime;
+ (id)dateFormatterWithoutYear;
+ (id)dateFormatterWithYear;
+ (id)commonTimeFormatter;
+ (id)_getWeekStringFromWeek:;
+ (id)dateFormatterForT;
+ (id)dateFormatterWithYearForSearch;
+ (id)dateFormatterWithoutYearForDiscoverDRelateHotSpot;
+ (id)dateFormatterWithYearForDiscoverDRelateHotSpot;
+ (id)dateFormatterWithoutYearForRelatedRecommend;
+ (id)dateFormatterWithYearForRelatedRecommend;
+ (id)formattedDateForTSingleFeedTimestamp:;
+ (id)formattedDateForRelatedRecommendTimestamp:;
+ (id)formattedDateForSearchNewStyleTimestamp:;
+ (id)timeFormatter;
@end
