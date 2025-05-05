@interface EKPersistentInviteReplyNotification : EKPersistentNotification
- (void)setCreationDate:;
- (void)setSummary:;
- (id)summary;
- (int)entityType;
- (id)creationDate;
- (id)inviteReplyCalendar;
- (id)inReplyTo;
- (void)setInReplyTo:;
- (id)shareeDisplayName;
- (void)setShareeDisplayName:;
- (id)shareeFirstName;
- (void)setShareeFirstName:;
- (id)shareeLastName;
- (void)setShareeLastName:;
- (id)shareeURLString;
- (void)setShareeURLString:;
- (unsigned long long)shareeStatus;
- (void)setShareeStatus:;
- (BOOL)alerted;
- (void)setInviteReplyCalendar:;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
@end
