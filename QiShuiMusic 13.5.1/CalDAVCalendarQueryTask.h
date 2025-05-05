@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask
@property (nonatomic) BOOL syncEvents;
@property (nonatomic) BOOL syncTodos;
@property (nonatomic) NSDateComponents eventFilterStartDate;
@property (nonatomic) NSDateComponents eventFilterEndDate;
- (id)requestBody;
- (BOOL)syncTodos;
- (id)_icsDateStringForNSDateComponents:;
- (id)httpMethod;
- (void)setSyncTodos:;
- (id)eventFilterStartDate;
- (void)setSyncEvents:;
- (void)setEventFilterEndDate:;
- (id)eventFilterEndDate;
- (void)_appendComponentFiltersToXMLData:;
- (void).cxx_destruct;
- (void)_appendTimeRangeFilterToXMLData:startDate:endDate:;
- (void)setEventFilterStartDate:;
- (id)description;
- (BOOL)syncEvents;
@end
