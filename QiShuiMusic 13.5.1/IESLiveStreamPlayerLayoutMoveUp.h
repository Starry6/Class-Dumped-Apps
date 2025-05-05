@interface IESLiveStreamPlayerLayoutMoveUp : IESLiveStreamPlayerLayoutBase
@property (nonatomic) BOOL didComfireSpecifyRatio;
@property (nonatomic) BOOL shouldSpecifyRatio;
- (id)changeSizeWithVideoSize:specifyRatio:;
- (BOOL)didComfireSpecifyRatio;
- (BOOL)enableSpecifyRatio;
- (id)getCurrentStreamFrame;
- (void)layoutWithPreviousType:;
- (id)playerOffsetWithPlayerFrame:videoSize:;
- (void)setDidComfireSpecifyRatio:;
- (void)setShouldSpecifyRatio:;
- (BOOL)shouldPresentDoubleInteractionPlayerView;
- (BOOL)shouldSpecifyRatio;
- (BOOL)shouldUseCurrentLayoutType;
- (id)specifyRatioSupportRoomScenes;
- (id)supportRoomScenes;
- (id)layoutFrame;
@end
