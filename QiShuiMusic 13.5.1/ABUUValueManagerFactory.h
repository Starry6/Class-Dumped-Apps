@interface ABUUValueManagerFactory : NSObject
+ (id)filterConfigGroup:withPrimeRit:;
+ (void)addUValue:withAdType:andMode:andPrimeRit:andJsMode:;
+ (void)addUValue:withAdType:andPrimeRit:andJsMode:;
+ (void)resetUValuesWithMode:;
+ (void)updateDynamicRules:;
+ (void)updateEcpmTTL:;
+ (void)updateGroupList:forType:;
+ (void)updateLabelGroupInfos:;
+ (id)uvaluesForConfigWithMode:;
@end
