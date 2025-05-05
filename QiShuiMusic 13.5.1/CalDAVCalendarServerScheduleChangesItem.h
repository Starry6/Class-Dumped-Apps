@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem
@property (nonatomic) CoreDAVLeafItem dtstamp;
@property (nonatomic) CalDAVCalendarServerActionItem action;
- (id)copyParseRules;
- (id)init;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (void)setDtstamp:;
- (id)dtstamp;
@end
