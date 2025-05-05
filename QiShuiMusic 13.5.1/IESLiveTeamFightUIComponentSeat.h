@interface IESLiveTeamFightUIComponentSeat : IESLiveTeamFightUIComponent
@property (nonatomic) <IESLiveTeamFightDelegate> delegate;
- (void)componentPunish;
- (void)componentDidLoad;
- (void)componentFinished;
- (void)componentPrepare;
- (void)componentShowResult;
- (void)componentTeamFighting;
- (id)teamFightDelegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
