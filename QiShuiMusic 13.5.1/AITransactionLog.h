@interface AITransactionLog : NSObject
- (void)_logScenario:step:success:forBundleID:description:;
- (id)_initWithLog:;
- (void).cxx_destruct;
+ (void)logStep:byParty:phase:success:forBundleID:description:;
+ (void)initializeWithLog:;
+ (void)logScenario:step:success:forBundleID:description:;
+ (void)logStep:byParty:phase:success:forBundleID:persona:description:;
+ (id)_defaultLog;
@end
