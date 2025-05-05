@interface IESLiveSaaSFollowGuideActionCreator : NSObject
@property (nonatomic) <HTSLiveSaaSFollowGuideActions> guideActionDispatcher;
@property (nonatomic) IESLiveSaaSRoomAPI roomApi;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) HTSEventContext trackContext;
- (id)roomApi;
- (void)showFollowAlert;
- (void)closeFollowPopup;
- (void)followAnchorFromPopup;
- (void)followAndQuit;
- (id)followPopoverAfterDelay:;
- (id)guideActionDispatcher;
- (void)scheduleFollowPopup:;
- (void)setGuideActionDispatcher:;
- (void)setRoomApi:;
- (void)setTrackContext:;
- (void)showPopupIfNeededWithDuration:;
- (id)trackContext;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
