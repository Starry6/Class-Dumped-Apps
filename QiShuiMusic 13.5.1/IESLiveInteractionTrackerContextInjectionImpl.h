@interface IESLiveInteractionTrackerContextInjectionImpl : NSObject
@property (nonatomic) @? guestConnectionSuccessInjectionBlock;
@property (nonatomic) @? guestConnectionOverInjectionBlock;
@property (nonatomic) @? voiceRoomShowInjectionBlock;
@property (nonatomic) @? voiceRoomWatchDurationInjectionBlock;
@property (nonatomic) @? anchorAudienceConnectionOverInjectionBlock;
@property (nonatomic) @? anchorAudienceConnectionSuccessInjectionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVoiceRoomShowInjectionBlock:;
- (id)anchorAudienceConnectionOverInjectionBlock;
- (id)anchorAudienceConnectionSuccessInjectionBlock;
- (id)guestConnectionOverInjectionBlock;
- (id)guestConnectionSuccessInjectionBlock;
- (void)setAnchorAudienceConnectionOverInjectionBlock:;
- (void)setAnchorAudienceConnectionSuccessInjectionBlock:;
- (void)setGuestConnectionOverInjectionBlock:;
- (void)setGuestConnectionSuccessInjectionBlock:;
- (void)setVoiceRoomWatchDurationInjectionBlock:;
- (id)voiceRoomShowInjectionBlock;
- (id)voiceRoomWatchDurationInjectionBlock;
- (void).cxx_destruct;
@end
