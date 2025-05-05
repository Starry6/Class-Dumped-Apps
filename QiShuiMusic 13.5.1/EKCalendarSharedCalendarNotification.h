@interface EKCalendarSharedCalendarNotification : EKCalendarNotification
@property (nonatomic) Q sharingInvitationResponse;
@property (nonatomic) Q allowedEntityTypes;
- (unsigned long long)sharingInvitationResponse;
- (void)setSharingInvitationResponse:;
- (id)initWithType:;
- (id)calendarFromEventStore:;
- (BOOL)isSharedCalendarInvitation;
- (unsigned long long)allowedEntityTypes;
- (void)setAllowedEntityTypes:;
@end
