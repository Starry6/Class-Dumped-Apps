@interface IESLiveStreamPlayerLayoutSonicGame : IESLiveStreamPlayerLayoutBase
- (BOOL)layoutWithMetaInfo:;
- (void)layoutWithPreviousType:;
- (BOOL)shouldUseCurrentLayoutType;
- (id)supportRoomScenes;
- (id)layoutFrame;
@end
