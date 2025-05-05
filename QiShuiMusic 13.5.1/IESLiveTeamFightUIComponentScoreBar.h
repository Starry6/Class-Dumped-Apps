@interface IESLiveTeamFightUIComponentScoreBar : IESLiveTeamFightUIComponent
@property (nonatomic) UIView<IESHYContainerProtocol> lynxScoreBar;
@property (nonatomic) IESLiveTeamFightScoreBar scoreBar;
@property (nonatomic) BOOL shouldUseLynxScoreBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentPunish;
- (id)blueTeamScoreStr:;
- (void)componentDidLoad;
- (void)componentFinished;
- (void)componentPrepare;
- (void)componentShowResult;
- (void)componentTeamFighting;
- (void)didTapScoreBarWithTeamSign:;
- (BOOL)isNeedShowRelativeScore;
- (BOOL)isTeamFightFlexible;
- (void)loadLynxScoreBar;
- (void)loadScoreBarWithStatus:;
- (id)lynxScoreBar;
- (id)scoreBar;
- (void)setLynxScoreBar:;
- (void)setScoreBar:;
- (void)setShouldUseLynxScoreBar:;
- (BOOL)shouldUseLynxScoreBar;
- (void).cxx_destruct;
@end
