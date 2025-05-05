@interface SFCollaborationPerformerContext : NSObject
@property (nonatomic) BOOL requiresParticipants;
@property (nonatomic) double deviceScreenScale;
- (double)deviceScreenScale;
- (BOOL)requiresParticipants;
- (void)setRequiresParticipants:;
- (void)setDeviceScreenScale:;
@end
