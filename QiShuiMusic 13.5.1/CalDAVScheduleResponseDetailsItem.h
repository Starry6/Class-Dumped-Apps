@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem
@property (nonatomic) CoreDAVItemWithHrefChildItem recipientHREF;
@property (nonatomic) NSString recipientString;
@property (nonatomic) CoreDAVLeafItem requestStatus;
@property (nonatomic) ICSDocument calendarData;
@property (nonatomic) CoreDAVErrorItem topLevelErrorItem;
@property (nonatomic) NSString responseDescription;
- (id)copyParseRules;
- (void)setResponseDescription:;
- (void).cxx_destruct;
- (id)description;
- (id)responseDescription;
- (void)setRequestStatus:;
- (id)requestStatus;
- (void)setRecipientHREF:;
- (void)_setCalendarDataWithLeafItem:;
- (void)setTopLevelErrorItem:;
- (id)recipientString;
- (id)recipientHREF;
- (id)calendarData;
- (void)setCalendarData:;
- (id)topLevelErrorItem;
@end
