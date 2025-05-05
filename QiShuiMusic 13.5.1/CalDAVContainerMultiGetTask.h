@interface CalDAVContainerMultiGetTask : CoreDAVContainerMultiGetTask
@property (nonatomic) BOOL getScheduleTags;
@property (nonatomic) BOOL getScheduleChanges;
- (id)copyAdditionalPropElements;
- (void)setAdditionalProperties:onDataItem:;
- (BOOL)getScheduleTags;
- (void)setGetScheduleTags:;
- (BOOL)getScheduleChanges;
- (void)setGetScheduleChanges:;
- (id)initWithURLs:atContainerURL:getScheduleTags:getScheduleChanges:appSpecificCalendarItemClass:;
- (id)initWithURLs:atContainerURL:getScheduleTags:getScheduleChanges:;
@end
