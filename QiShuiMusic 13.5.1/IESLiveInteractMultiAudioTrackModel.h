@interface IESLiveInteractMultiAudioTrackModel : NSObject
@property (nonatomic) @? paidLinkmicTrackModel;
@property (nonatomic) @? guestConnectionOverTrackModel;
@property (nonatomic) @? guestConnectionSuccessTrackModel;
@property (nonatomic) @? voiceRoomWatchDuraionTrackModel;
@property (nonatomic) @? voiceRoomShowTrackModel;
@property (nonatomic) @? applyConnectionTrackModel;
@property (nonatomic) @? anchorAudienceConnectionSuccessTrackModel;
@property (nonatomic) @? anchorAudienceConnectionOverTrackModel;
- (id)voiceRoomWatchDuraionTrackModel;
- (id)anchorAudienceConnectionOverTrackModel;
- (id)anchorAudienceConnectionSuccessTrackModel;
- (id)applyConnectionTrackModel;
- (id)guestConnectionOverTrackModel;
- (id)guestConnectionSuccessTrackModel;
- (id)paidLinkmicTrackModel;
- (void)setAnchorAudienceConnectionOverTrackModel:;
- (void)setAnchorAudienceConnectionSuccessTrackModel:;
- (void)setApplyConnectionTrackModel:;
- (void)setGuestConnectionOverTrackModel:;
- (void)setGuestConnectionSuccessTrackModel:;
- (void)setPaidLinkmicTrackModel:;
- (void)setVoiceRoomShowTrackModel:;
- (void)setVoiceRoomWatchDuraionTrackModel:;
- (id)voiceRoomShowTrackModel;
- (void).cxx_destruct;
@end
