@interface AWELivePreStreamBackPicShowElement : AWELiveBusinessBaseElement
@property (nonatomic) UIView playerViceView;
@property (nonatomic) NSString audienceRoomId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_viewWillAppear;
- (void)streamPlayer_firstFrame;
- (void)audienceViewController_WillEnterLiveRoom:anchorID:;
- (void)audienceViewController_WillLeaveLiveRoom:;
- (void)audienceQuitBySwipeWithResultBlock:;
- (void)setAudienceRoomId:;
- (id)audienceRoomId;
- (void)iesLiveTrackEvent:params:;
- (void)removeRoomBackOptimizeIfNeeded;
- (void)showRoomBackOptimizeIfNeeded;
- (BOOL)liveRoomBackOptimizeEnable;
- (BOOL)liveRoomBackShouldShowViceView;
- (void)setPlayerViceView:;
- (BOOL)liveRoomModeEnable;
- (void)showPlayerViceViewIfNeeded;
- (void)removePlayerViceView;
- (id)playerViceView;
- (void)trackLiveRoomBackShowType:;
- (void).cxx_destruct;
- (void)reset;
+ (BOOL)shouldActivateElement;
@end
