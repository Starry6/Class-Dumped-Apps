@interface CalDAVCalendarServerAccessItem : CoreDAVItem
@property (nonatomic) CoreDAVItemWithNoChildren accessLevel;
- (id)copyParseRules;
- (id)init;
- (id)accessLevel;
- (id)initWithAccess:;
- (void).cxx_destruct;
- (void)setAccessLevel:;
@end
