@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem
@property (nonatomic) CoreDAVItemWithNoChildren inviteNotification;
@property (nonatomic) CoreDAVItemWithNoChildren inviteReply;
@property (nonatomic) CoreDAVItemWithNoChildren resourceChanged;
@property (nonatomic) BOOL isInviteReply;
@property (nonatomic) BOOL isInviteNotification;
@property (nonatomic) BOOL isResourceChanged;
- (id)copyParseRules;
- (void).cxx_destruct;
- (id)description;
- (void)setInviteNotification:;
- (void)setInviteReply:;
- (void)setResourceChanged:;
- (BOOL)isInviteNotification;
- (BOOL)isInviteReply;
- (BOOL)isResourceChanged;
- (BOOL)notificationNameMatches:;
- (BOOL)notificationNameIn:;
- (id)inviteNotification;
- (id)inviteReply;
- (id)resourceChanged;
@end
