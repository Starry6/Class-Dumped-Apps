@interface IESLiveInteractPreStreamEnterRoomService : NSObject
@property (nonatomic) IESLiveInteractionLayout preStreamEnterRoomLayout;
@property (nonatomic) NSArray preStreamEnterRoomUserList;
@property (nonatomic) UIView fullScreenVideoBackgroundView;
@property (nonatomic) BOOL didEnterRoomWithPreStreamData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)couldEnterRoomWithPreStreamData;
- (BOOL)didEnterRoomWithPreStreamData;
- (void)didSetAttachingDIContext;
- (id)fullScreenVideoBackgroundView;
- (void)interactionModeStartedWithLayout:;
- (void)loadFullScreenVideoBackgroundViewIfNeed;
- (id)preStreamEnterRoomLayout;
- (id)preStreamEnterRoomUserList;
- (void)setDidEnterRoomWithPreStreamData:;
- (void)setFullScreenVideoBackgroundView:;
- (void)setPreStreamEnterRoomLayout:;
- (void)setPreStreamEnterRoomUserList:;
- (id)init;
- (void).cxx_destruct;
@end
