@interface ABUBehaviorInfoManager : ABUSingleton
@property (nonatomic) ABUBehaviors behavior;
- (double)srrForPrimeRit:andAdn:andTtl:;
- (double)ssrForPrimeRit:andAdn:andTtl:;
- (void)updateInfoWithPrimeRit:andAdnName:andEventType:;
- (id)init;
- (void)setBehavior:;
- (void).cxx_destruct;
- (id)behavior;
+ (void)updateInfoWithPrimeRit:andAdnName:andEventType:;
+ (id)sharedInstance;
@end
