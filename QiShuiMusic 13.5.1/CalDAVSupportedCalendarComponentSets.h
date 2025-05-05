@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem
- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)componentsAsString;
- (id)childrenToWrite;
- (void)addCompSet:;
+ (BOOL)allowedCalendars:contains:;
@end
