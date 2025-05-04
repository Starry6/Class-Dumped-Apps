@interface AWEMRAlertDismissExecuteManager : NSObject
@property (nonatomic) AWEMRAlertClosableAbilityConfigModel abilityConfigModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAbilityConfigModel;
- (void)setAbilityConfigModel:;
- (id)abilityConfigModel;
- (BOOL)executeShowingAlertDismiss:fromForceAlert:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
