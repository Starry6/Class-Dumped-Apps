@interface AWEFantaGokuDataCollector : AWEFantaAbstractDataCollector
- (void)didChangePlaybackStateWithAction:;
- (void)onDataCollectorInit;
- (void)awemePlayerWillLoopPlayingWith:;
- (void)willDisplayCellWithContext:;
- (void)didEndDisplayingCellWithContext:;
- (void)detailTableVCWillDisplayCellWithContext:;
- (void)detailTableVCWillDisappear:;
- (void)detailTableVCDidEndDisplayCellBeforeResetWithContext:;
- (void)liveStreamPrepareForDisPlay:;
- (unsigned long long)moduleNames;
- (id)type;
+ (void)_aweLazyRegisterStaticLoad_AWEClientAIAwemeHelper;
+ (id)sharedInstance;
@end
