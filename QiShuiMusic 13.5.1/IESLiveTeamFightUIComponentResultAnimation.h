@interface IESLiveTeamFightUIComponentResultAnimation : IESLiveTeamFightUIComponent
@property (nonatomic) IESLiveAnimatedImageView redResultAnimationView;
@property (nonatomic) IESLiveAnimatedImageView blueResultAnimationView;
@property (nonatomic) q status;
- (void)componentPunish;
- (id)blueResultAnimationView;
- (void)componentDidLoad;
- (void)componentFinished;
- (void)componentPrepare;
- (void)componentShowResult;
- (void)componentTeamFighting;
- (BOOL)enterResultAnimEnable;
- (id)getMvpPlayerWith:;
- (id)redResultAnimationView;
- (id)resultStr:;
- (void)setBlueResultAnimationView:;
- (void)setRedResultAnimationView:;
- (void)showOneTeamResultViewWith:;
- (void)showResultViewWith:;
- (void)showTwoTeamResultViewWith:;
- (void)trackRoomBattleResultShowWith:;
- (void)trackTeamFightResultShowWith:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
@end
