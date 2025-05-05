@interface CalDAVCalendarServerInviteItem : CoreDAVItem
@property (nonatomic) NSMutableSet users;
- (id)users;
- (id)copyParseRules;
- (id)init;
- (void).cxx_destruct;
- (void)setUsers:;
- (void)addUser:;
- (id)initWithNameSpace:andName:;
@end
