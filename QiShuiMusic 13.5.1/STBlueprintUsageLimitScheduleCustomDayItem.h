@interface STBlueprintUsageLimitScheduleCustomDayItem : NSObject
@property (nonatomic) double budgetLimit;
@property (nonatomic) Q day;
- (unsigned long long)day;
- (void)setDay:;
- (double)budgetLimit;
- (void)setBudgetLimit:;
@end
