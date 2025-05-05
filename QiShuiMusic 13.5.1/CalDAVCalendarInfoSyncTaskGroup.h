@interface CalDAVCalendarInfoSyncTaskGroup : CoreDAVContainerInfoSyncTaskGroup
@property (nonatomic) BOOL fetchSharees;
- (id)copyContainerParserMappings;
- (void)setFetchSharees:;
- (Class)containerItemClass;
- (BOOL)fetchSharees;
@end
