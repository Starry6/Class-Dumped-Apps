@interface IESLiveGuestBattlerRoleAnimationItem : NSObject
@property (nonatomic) IESLiveGuestBattlerRoleAnimationConfig config;
@property (nonatomic) <IESLiveGuestBattleReaction> reaction;
- (void)dispatchAnimationWithCompletion:;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)config;
- (void)stopAnimation;
- (id)reaction;
- (void)setReaction:;
@end
