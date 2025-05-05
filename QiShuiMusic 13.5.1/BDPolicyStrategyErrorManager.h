@interface BDPolicyStrategyErrorManager : NSObject
@property (nonatomic) NSMutableDictionary customStrategyDict;
- (void)addCustomErrorStrategy:forSpace:inUnit:withErrorCode:;
- (id)customErrorStrategyForCert:inUnit:withErrorCode:;
- (id)customStrategyDict;
- (unsigned long long)errorLevelForCert:inUnit:errorCode:;
- (id)errorStrategyIdForSpaceId:unit:errorCode:;
- (unsigned long long)mapAbnormalCertStrategyToErrorLevel:;
- (void)removeAllCustomStrategy;
- (void)setCustomStrategyDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
