@interface VCSEvent : VCSEntity
@property (nonatomic) VCSDate startDate;
@property (nonatomic) VCSDate endDate;
@property (nonatomic) BOOL fullDayEvent;
- (id)startDate;
- (void)setStartDate:;
- (void)setEndDate:;
- (id)endDate;
- (unsigned long long)entityType;
- (BOOL)isValidStatus:;
- (void)ensureDurationAlarms;
- (BOOL)fullDayEvent;
- (void)setFullDayEvent:;
@end
