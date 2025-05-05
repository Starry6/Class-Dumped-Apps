@interface CalDAVCalendarServerNotificationItem : CoreDAVItem
@property (nonatomic) CoreDAVLeafItem dtstamp;
@property (nonatomic) CoreDAVItem content;
- (id)copyParseRules;
- (id)content;
- (void)setContent:;
- (id)init;
- (void).cxx_destruct;
- (void)setDtstamp:;
- (id)dtstamp;
@end
