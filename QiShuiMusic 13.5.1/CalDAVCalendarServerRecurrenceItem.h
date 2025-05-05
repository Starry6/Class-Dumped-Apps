@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem
@property (nonatomic) CoreDAVItemWithNoChildren master;
@property (nonatomic) CoreDAVLeafItem recurrenceID;
@property (nonatomic) CalDAVCalendarServerChangesItem changes;
@property (nonatomic) BOOL isMaster;
- (id)copyParseRules;
- (id)init;
- (void)setChanges:;
- (id)changes;
- (id)master;
- (void).cxx_destruct;
- (BOOL)isMaster;
- (void)setMaster:;
- (id)recurrenceID;
- (void)setRecurrenceID:;
@end
