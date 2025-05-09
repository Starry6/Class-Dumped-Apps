@interface CalDAVCalendarServerUserItem : CoreDAVItem
@property (nonatomic) CoreDAVHrefItem href;
@property (nonatomic) CoreDAVLeafItem commonName;
@property (nonatomic) CoreDAVItemWithNoChildren inviteStatus;
@property (nonatomic) CalDAVCalendarServerAccessItem access;
@property (nonatomic) CoreDAVLeafItem summary;
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSURL acceptedURL;
- (void)setHref:;
- (void)setLastName:;
- (id)copyParseRules;
- (id)href;
- (id)access;
- (id)init;
- (void)setFirstName:;
- (id)firstName;
- (id)lastName;
- (void)setSummary:;
- (void)setAccess:;
- (id)summary;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (id)inviteStatus;
- (id)acceptedURL;
- (id)commonName;
- (void)setInviteStatus:;
- (void)setFirstNameItem:;
- (void)setLastNameItem:;
- (void)setAcceptedURLItem:;
- (void)setAcceptedURL:;
- (void)setCommonName:;
- (id)initWithHREF:commonName:inviteStatus:access:;
@end
