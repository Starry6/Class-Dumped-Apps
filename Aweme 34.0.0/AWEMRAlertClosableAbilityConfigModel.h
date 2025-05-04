@interface AWEMRAlertClosableAbilityConfigModel : NSObject
@property (nonatomic) BOOL forceAlertDefaultEnable;
@property (nonatomic) NSArray disableCloseAbilityIDList;
@property (nonatomic) NSDictionary forceAlertExtraConfig;
@property (nonatomic) NSArray canBeClosedList;
@property (nonatomic) NSDictionary closableAlertExtraConfig;
- (void)setForceAlertDefaultEnable:;
- (void)setDisableCloseAbilityIDList:;
- (void)setForceAlertExtraConfig:;
- (void)setCanBeClosedList:;
- (void)setClosableAlertExtraConfig:;
- (BOOL)forceAlertDefaultEnable;
- (id)disableCloseAbilityIDList;
- (id)forceAlertExtraConfig;
- (id)canBeClosedList;
- (id)closableAlertExtraConfig;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:;
+ (id)getCanBeClosedListDefaultList;
@end
