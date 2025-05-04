@interface AWEPlayVideoMultiDeviceSyncTracker : AWEPlayVideoBaseTracker
@property (nonatomic) BOOL hasPushed;
- (id)paramsForVideoPlayInPlayer:paramsModel:;
- (id)paramsForVideoPlayTimeInPlayer:paramsModel:;
- (id)paramsForVideoPlayFinishInPlayer:paramsModel:;
- (void)receiveContinueEvent:;
- (BOOL)hasPushed;
- (void)setHasPushed:;
- (id)init;
- (void)dealloc;
@end
