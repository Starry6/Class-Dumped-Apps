@interface IESLiveTeamFightUIComponentTopBar : IESLiveTeamFightUIComponent
@property (nonatomic) IESLiveTeamFightPrepareTopBar prepareTopBar;
@property (nonatomic) IESLiveTeamFightCountDownTopBar teamFightingTopbar;
@property (nonatomic) IESLiveTeamFightCountDownTopBar punishTopBar;
- (void)componentPunish;
- (void)audienceAdminChangePrivilege:isAdd:;
- (void)componentFinished;
- (void)componentPrepare;
- (void)componentShowResult;
- (void)componentTeamFighting;
- (BOOL)enableStartTeamFight;
- (BOOL)isAdminWithTeamFightPrivilege;
- (void)loadPunishTopBar;
- (id)prepareTopBar;
- (id)punishTopBar;
- (void)removeTopBar;
- (void)setPrepareTopBar:;
- (void)setPunishTopBar:;
- (void)setTeamFightingTopbar:;
- (id)teamFightingTopbar;
- (void).cxx_destruct;
@end
