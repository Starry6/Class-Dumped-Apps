@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem
@property (nonatomic) CoreDAVItemWithNoChildren calendar;
@property (nonatomic) CoreDAVItemWithNoChildren scheduleInbox;
@property (nonatomic) CoreDAVItemWithNoChildren scheduleOutbox;
@property (nonatomic) CoreDAVItemWithNoChildren notification;
@property (nonatomic) CoreDAVItemWithNoChildren subscribed;
@property (nonatomic) CoreDAVItemWithNoChildren sharedOwner;
@property (nonatomic) CoreDAVItemWithNoChildren isFamilyCalendar;
- (void)setSubscribed:;
- (void)setCalendar:;
- (id)copyParseRules;
- (void)write:;
- (id)calendar;
- (id)isFamilyCalendar;
- (id)notification;
- (void)setIsFamilyCalendar:;
- (void)setNotification:;
- (void)setSharedOwner:;
- (void)setScheduleOutbox:;
- (id)scheduleOutbox;
- (void).cxx_destruct;
- (void)setScheduleInbox:;
- (id)scheduleInbox;
- (id)subscribed;
- (id)sharedOwner;
@end
