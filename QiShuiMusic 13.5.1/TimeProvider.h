@interface TimeProvider : BaseDateProvider
@property (nonatomic) NSDate date;
- (id)initWithDate:;
- (id)initWithDate:calendar:locale:timeZone:;
- (id)date;
- (id)_sessionTextForIndex:context:;
- (id)_timeTextWithDropMinutes:dropDesignator:;
- (void).cxx_destruct;
- (void)setDate:;
@end
