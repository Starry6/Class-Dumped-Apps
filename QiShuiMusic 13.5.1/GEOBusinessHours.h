@interface GEOBusinessHours : NSObject
@property (nonatomic) I openingSoonThresholdInSeconds;
@property (nonatomic) I closingSoonThresdholdInSeconds;
@property (nonatomic) Q hoursType;
@property (nonatomic) NSArray pdHours;
@property (nonatomic) NSArray placeDailyHours;
@property (nonatomic) NSArray placeDailyNormalizedHours;
@property (nonatomic) NSString localizedMessage;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) BOOL isBrandTypeHours;
- (id)startDate;
- (id)endDate;
- (void).cxx_destruct;
- (id)initWithGEOPDBusinessHours:timeZone:;
- (id)initWithGEOPDHours:timeZone:;
- (unsigned int)openingSoonThresholdInSeconds;
- (unsigned int)closingSoonThresdholdInSeconds;
- (unsigned long long)hoursType;
- (BOOL)pdHoursAreValid;
- (id)pdHours;
- (id)localizedMessage;
- (id)placeDailyHours;
- (id)placeDailyNormalizedHours;
- (BOOL)isBrandTypeHours;
+ (id)prioritizeBusinessHours:compareDate:;
+ (void)divideBusinessHoursBasedOnTodaysDate:compareDate:completion:;
@end
