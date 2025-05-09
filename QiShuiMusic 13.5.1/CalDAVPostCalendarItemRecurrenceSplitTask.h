@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask
@property (nonatomic) NSURL postURLWithQuery;
@property (nonatomic) CoreDAVResponseItem updatedResponseItem;
@property (nonatomic) CoreDAVResponseItem createdResponseItem;
@property (nonatomic) NSURL resourceURL;
@property (nonatomic) NSDate recurrenceDate;
@property (nonatomic) NSString uidForCreatedSeries;
@property (nonatomic) NSString previousScheduleTag;
@property (nonatomic) NSString previousETag;
@property (nonatomic) BOOL isFloating;
@property (nonatomic) BOOL isAllDay;
- (id)requestBody;
- (BOOL)isAllDay;
- (id)_recurrenceDateString;
- (BOOL)isFloating;
- (id)url;
- (void)setIsFloating:;
- (id)updatedETag;
- (id)_scheduleTagForItem:;
- (id)resourceURL;
- (id)updatedResponseItem;
- (id)httpMethod;
- (id)createdURL;
- (void)setPreviousETag:;
- (void)setRecurrenceDate:;
- (id)updatedICSDocument;
- (id)createdICSData;
- (void)_updateBothResponseItems;
- (void)setUpdatedResponseItem:;
- (void)setIsAllDay:;
- (id)postURLWithQuery;
- (void)setPostURLWithQuery:;
- (id)_etagForItem:;
- (id)initWithResourceURL:recurrenceDate:floating:allday:;
- (id)createdICSDocument;
- (void)setResourceURL:;
- (void)setPreviousScheduleTag:;
- (void)setCreatedResponseItem:;
- (id)createdScheduleTag;
- (id)additionalHeaderValues;
- (id)recurrenceDate;
- (void)setUidForCreatedSeries:;
- (void).cxx_destruct;
- (id)createdResponseItem;
- (id)description;
- (id)updatedScheduleTag;
- (id)urlWithQuery;
- (id)createdETag;
- (id)_documentForItem:;
- (id)previousScheduleTag;
- (id)previousETag;
- (id)_dataForItem:;
- (id)uidForCreatedSeries;
@end
