@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem
@property (nonatomic) NSMutableSet recurrences;
- (id)copyParseRules;
- (void).cxx_destruct;
- (id)recurrences;
- (void)setRecurrences:;
- (void)addRecurrence:;
@end
