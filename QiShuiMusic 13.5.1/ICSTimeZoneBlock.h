@interface ICSTimeZoneBlock : ICSComponent
@property (nonatomic) ICSDate dtstart;
@property (nonatomic) NSArray rdate;
@property (nonatomic) NSArray rrule;
@property (nonatomic) NSArray tzname;
@property (nonatomic) q tzoffsetfrom;
@property (nonatomic) q tzoffsetto;
- (BOOL)validate:;
- (long long)compare:;
- (void)setRrule:;
- (void)setDtstart:;
- (id)dtstart;
- (id)rrule;
- (void)setRdate:;
- (id)rdate;
- (id)tzname;
- (void)setTzname:;
- (long long)tzoffsetfrom;
- (void)setTzoffsetfrom:;
- (long long)tzoffsetto;
- (void)setTzoffsetto:;
- (void)addRecurrenceDate:;
- (id)computeTimeZoneChangeListFromDate:toDate:;
@end
