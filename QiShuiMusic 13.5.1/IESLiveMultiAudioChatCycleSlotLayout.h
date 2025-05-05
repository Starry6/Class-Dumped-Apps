@interface IESLiveMultiAudioChatCycleSlotLayout : NSObject
@property (nonatomic) NSInteger uilayout;
@property (nonatomic) NSArray slots;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)frameOfSlotView;
- (void)updateAnchorPosition:guestList:;
- (id)anchorAvatarSize;
- (id)anchorSlot;
- (id)audienceAvatarSize;
- (id)audienceSlotViewForUser:inUserList:;
- (BOOL)canChangePosition;
- (id)centerWithTrack:pos:several:;
- (double)fanBGViewAlpha;
- (BOOL)isSquareLayout;
- (void)makeAnchorSlotConstraint;
- (void)makeAudienceSlotsConstraint;
- (void)makeConstraintForTeamFight:;
- (BOOL)needShowGuideAnimationInAnchorSeatView;
- (int)uilayout;
- (void)updateSlotViewsWithKeyboardShowing:;
- (void).cxx_destruct;
- (id)slots;
- (void)setSlots:;
@end
