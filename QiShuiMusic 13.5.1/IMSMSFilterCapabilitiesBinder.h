@interface IMSMSFilterCapabilitiesBinder : NSObject
+ (void)handleSubClassificationFilterChange;
+ (long long)localizeSubAction:;
+ (BOOL)isValidSubAction:subAction:;
+ (void)executeCompletionBlockForFilterParamsUpdate:promo:;
+ (BOOL)firstPartyFilterExtensionActive;
+ (void)IMMetricsCollectorForSMSSubClassification:;
+ (int)updateFilterParamsBindings:promotionalSubActions:;
@end
