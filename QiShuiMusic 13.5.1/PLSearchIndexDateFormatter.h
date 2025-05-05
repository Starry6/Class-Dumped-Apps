@interface PLSearchIndexDateFormatter : NSObject
- (id)init;
- (id)_inqNewLocalizedStringFromDate:;
- (id)localizedSeasonNameFromDate:;
- (id)newLocalizedComponentsFromDate:includeMonth:;
- (id)formattedDateRangeWithStartDate:endDate:;
- (void)_inqUpdateDateFormat:;
- (id)_arrangedMonthSymbols;
- (void).cxx_destruct;
- (id)newLocalizedStringFromDate:;
- (id)newLocalizedStringFromYear:month:;
- (id)localizedMonthStringsFromDate:;
- (void)_inqSetupDateFormatter;
+ (id)monthFormatForLocale:;
+ (id)yearFormatForLocale:;
@end
