@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup
@property (nonatomic) CalDAVCalendarServerInviteNotificationItem invitation;
@property (nonatomic) BOOL acceptInvitation;
@property (nonatomic) NSURL calendarHomeURL;
@property (nonatomic) <CoreDAVTaskGroupDelegate> delegate;
@property (nonatomic) NSURL sharedAs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didFinishWithError:;
- (void)startTaskGroup;
- (id)invitation;
- (void)setInvitation:;
- (void).cxx_destruct;
- (id)initWithAccountInfoProvider:taskManager:;
- (BOOL)acceptInvitation;
- (id)calendarHomeURL;
- (id)initWithInvitation:acceptInvitation:atCalendarHomeURL:accountInfoProvider:taskManager:;
- (id)generateReply;
- (id)sharedAs;
- (void)setSharedAs:;
- (void)setAcceptInvitation:;
- (void)setCalendarHomeURL:;
@end
