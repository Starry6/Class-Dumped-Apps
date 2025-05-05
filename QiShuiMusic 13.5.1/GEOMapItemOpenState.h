@interface GEOMapItemOpenState : NSObject
+ (unsigned long long)_geoMapItemOpeningHoursOptionsForBusinessHours:compareDate:timeZone:;
+ (unsigned long long)_geoMapItemOpeningHoursOptionsForNormalizedHours:compareDate:timeZone:;
+ (unsigned long long)_checkForStateWithStartTime:endtime:compareTimeInSeconds:openingSoonThreshold:closingSoonThreshold:secondsOverMidnightForTomorrow:isTodaysNormalizedHours:tomorrowsHoursBeginAtMidnight:;
@end
