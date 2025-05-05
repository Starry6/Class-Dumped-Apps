@interface IESLiveTeamFightUIComponent : NSObject
@property (nonatomic) <IESLiveTeamFightBaseProvider> provider;
@property (nonatomic) q teamFightType;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView lowerView;
@property (nonatomic) UIView upperView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentPunish;
- (void)componentDidLoad;
- (void)componentFinished;
- (void)componentPrepare;
- (void)componentShowResult;
- (void)componentTeamFighting;
- (id)initWithType:provider:DIContext:;
- (id)lowerView;
- (void)setLowerView:;
- (void)setTeamFightType:;
- (void)setUpperView:;
- (long long)teamFightType;
- (id)upperView;
- (void)setProvider:;
- (id)containerView;
- (void)setContainerView:;
- (id)provider;
- (void).cxx_destruct;
@end
