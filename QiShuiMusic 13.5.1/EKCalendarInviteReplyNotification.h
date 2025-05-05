@interface EKCalendarInviteReplyNotification : EKCalendarNotification
@property (nonatomic) Q status;
@property (nonatomic) Q allowedEntityTypes;
- (void)setStatus:;
- (unsigned long long)status;
- (id)initWithType:;
- (unsigned long long)allowedEntityTypes;
- (void)setAllowedEntityTypes:;
- (BOOL)acknowledgeWithEventStore:error:;
- (id)inviteReplyNotificationFromEventStore:;
@end
