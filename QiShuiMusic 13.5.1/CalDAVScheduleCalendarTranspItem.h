@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem
@property (nonatomic) CoreDAVItemWithNoChildren transparent;
@property (nonatomic) BOOL isScheduleTransparent;
- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isScheduleTransparent;
- (id)transparent;
- (void)setTransparent:;
@end
