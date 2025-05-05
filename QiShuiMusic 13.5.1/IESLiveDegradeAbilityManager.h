@interface IESLiveDegradeAbilityManager : NSObject
@property (nonatomic) NSMapTable levelAbilitiesTable;
@property (nonatomic) <IESLiveSettings> settingsService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)degradeAbility:;
- (void)executeAbilities:inDegradeLevel:;
- (void)initDegradeAbilities;
- (id)levelAbilitiesTable;
- (void)resetDegradeAbilities;
- (void)setLevelAbilitiesTable:;
- (void)setSettingsService:;
- (void)trackerAbilities:inDegradeLevel:withParams:;
- (id)init;
- (void).cxx_destruct;
- (id)settingsService;
+ (id)shared;
@end
