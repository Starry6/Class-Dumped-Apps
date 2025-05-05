@interface PLInvitationRecordsChangeNotification : PLContainerChangeNotification
@property (nonatomic) PLGenericAlbum album;
@property (nonatomic) BOOL invitationRecordsDidChange;
- (id)userInfo;
- (id)album;
- (void).cxx_destruct;
- (id)name;
- (void)_calculateDiffs;
- (BOOL)invitationRecordsDidChange;
+ (id)notificationWithAlbum:snapshot:;
@end
