@interface IESLiveTeamFightUIComponentManager : NSObject
@property (nonatomic) NSMutableDictionary components;
@property (nonatomic) q teamFightType;
@property (nonatomic) <IESLiveTeamFightBaseProvider> provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentPunish;
- (void)loadComponments;
- (void)componentFinished;
- (id)componentGroup;
- (void)componentPrepare;
- (void)componentShowResult;
- (void)componentTeamFighting;
- (void)componetsDidload;
- (void)createComponments;
- (void)didUpdateTeamFightScore;
- (void)didUpdatedGuestListWithActiveList:;
- (id)initWithType:DIContext:;
- (void)setTeamFightType:;
- (long long)teamFightType;
- (void)setProvider:;
- (id)components;
- (void)setComponents:;
- (id)provider;
- (void).cxx_destruct;
@end
