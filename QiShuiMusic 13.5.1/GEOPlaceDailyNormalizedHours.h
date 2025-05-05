@interface GEOPlaceDailyNormalizedHours : NSObject
@property (nonatomic) q weekday;
@property (nonatomic) NSArray localTimeIntervals;
@property (nonatomic) double closingSoonThresholdSeconds;
@property (nonatomic) double openingSoonThresholdSeconds;
@property (nonatomic) BOOL openToMidnight;
@property (nonatomic) BOOL openFromMidnight;
- (void).cxx_destruct;
- (id)description;
- (long long)weekday;
- (id)localTimeIntervals;
- (double)closingSoonThresholdSeconds;
- (void)setClosingSoonThresholdSeconds:;
- (double)openingSoonThresholdSeconds;
- (void)setOpeningSoonThresholdSeconds:;
- (BOOL)openToMidnight;
- (BOOL)openFromMidnight;
+ (id)dailyNormalizedHoursForWeekday:timeIntervals:closingThreshold:openingThreshold:openToMidnight:openFromMidnight:;
+ (long long)getWeekdayForDate:inNormalizedHours:timeZone:;
+ (long long)todaysWeekday:yesterdaysWeekday:containsTimeFromMidnight:inNormalizedHours:;
@end
