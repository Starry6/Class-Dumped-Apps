@interface ABUUValueManager : ABUSingleton
@property (nonatomic) NSMutableDictionary uvalues;
@property (nonatomic) NSMutableDictionary uvaluesForPreload;
- (id)uvalues;
- (void)setUvalues:;
- (void)setUvaluesForPreload:;
- (id)uvaluesForPreload;
- (void).cxx_destruct;
+ (void)addUValue:withRitType:;
+ (void)addUValue:withRitType:andMode:;
+ (void)addUValue:withRitType:andPrimeRit:;
+ (void)resetUValuesWithMode:;
+ (void)updateDynamicRules:;
+ (void)updateEcpmTTL:;
+ (void)updateLabelGroupInfos:;
+ (id)uvaluesForConfigWithMode:;
+ (id)ruleList;
@end
