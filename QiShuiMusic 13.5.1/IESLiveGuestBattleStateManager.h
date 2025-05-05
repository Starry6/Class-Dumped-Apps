@interface IESLiveGuestBattleStateManager : NSObject
@property (nonatomic) q state;
- (void)fireGuestBattleEvent:;
- (void)handleGuestBattleFinishEvent;
- (void)handleGuestBattlePauseEvent;
- (void)handleGuestBattleResumeEvent;
- (void)handleGuestBattleSettleEvent;
- (void)handleGuestBattleStartEvent;
- (id)initWithDIContext:;
- (void)setState:;
- (long long)state;
@end
