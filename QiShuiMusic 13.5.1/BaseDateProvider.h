@interface BaseDateProvider : NSObject
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) NSLocale locale;
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) q updateType;
@property (nonatomic) Q updateWallClockAlignment;
@property (nonatomic) NSDate timerEndDate;
- (void)setCalendar:;
- (void)setLocale:;
- (void)setTimeZone:;
- (id)calendar;
- (id)updateInterval;
- (id)locale;
- (id)_sessionTextForIndex:context:;
- (long long)updateType;
- (void)_endSession;
- (void).cxx_destruct;
- (id)formattedString;
- (id)timeZone;
- (id)initWithCalendar:locale:timeZone:;
- (id)formattedStringInContext:;
- (unsigned long long)updateWallClockAlignment;
- (id)timerEndDate;
- (void)_startSessionWithDate:;
- (long long)_updateFrequency;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:designatorExists:;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:andRemovingDesignator:designatorExists:;
@end
