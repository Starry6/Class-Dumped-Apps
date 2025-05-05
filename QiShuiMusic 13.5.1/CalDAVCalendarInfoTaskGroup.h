@interface CalDAVCalendarInfoTaskGroup : CoreDAVContainerInfoTaskGroup
@property (nonatomic) BOOL fetchSharees;
- (void)setFetchSharees:;
- (id)_copyContainerWithURL:andProperties:;
- (BOOL)fetchSharees;
- (id)_copyContainerParserMappings;
- (id)initWithAccountInfoProvider:containerURLs:taskManager:;
- (id)containerForURL:;
@end
